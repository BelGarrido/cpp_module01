#include <string>
#include <iostream>
#include <fstream>




int main(int argc, char **argv)
{
	if(argc != 4){
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream myFile;
	myFile.open(argv[1]);

	std::ofstream copyFile;
	copyFile.open("copyText.txt");

	std::string line;
	
	while(getline(myFile, line))
	{
		std::cout << line << std::endl;
		size_t pos = line.find(s1);
		while(pos < line.length()){
			line.erase(pos, s1.length());
			//std::cout << "after erase: " <<line << std::endl;
			line.insert(pos, s2);
			//std::cout << "after insert: " <<line << std::endl;
			pos = line.find(s1);
		}
		copyFile << line;
		if(!myFile.eof()){
			copyFile << "\n";
		}
	}
	//copiar
	myFile.close();
	copyFile.close();
	return 0;
}
