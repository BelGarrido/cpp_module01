#include "replace.h"

int main(int argc, char **argv)
{
	if(argc != 4){
		std::cerr << "Usage:"<< argv[0] << " <file.txt> <string1> <string2>"<< std::endl;		
		return 1;
	}
	
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::string outFileName = std::string(argv[1]) + ".replace";
	std::stringstream fileRead;
  
	std::ifstream file(argv[1]);
	std::ofstream outFile(outFileName.c_str());

	if(s1.empty() || s2.empty()){
		std::cerr << "Error:"<< " <strings> empty are not allowed" << std::endl;		
		return 1;
	}

  if(isFileEmpty(file)){
    std::cout << "File is empty\n";
    return 1;
  }

	replaceStr(file, fileRead, s1, s2);

	outFile << fileRead.str();
	file.close();
	outFile.close();
	return 0;
}
