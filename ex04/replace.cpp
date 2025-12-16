#include "replace.h"

void replaceStr(std::ifstream &file, std::stringstream &fileRead, std::string s1, std::string s2){
	std::string subsCopy;
	std::string subsRemain;
	std::string line;
	
	while(getline(file, line)){
		size_t pos = 0;
		pos = line.find(s1);
		while ((pos != std::string::npos)){
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			subsCopy = line.substr(0, pos + s2.length());
			subsRemain = line.substr(pos + s2.length(), line.length() - 1);               
			line = line.erase();
			line = subsRemain;
			fileRead << subsCopy;
			subsCopy.erase();
			pos = line.find(s1);
		}
		fileRead << line;
		if(!file.eof()){
			fileRead << "\n";
		}
	}
}

bool isFileEmpty(std::istream &file){
  if(file.peek() == EOF)
    return true;
  return false;
}
