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
	std::ifstream file;
	std::ofstream outFile;

	if(s1.empty()){
		std::cerr << "Error:"<< " s1 empty is not allowed" << std::endl;		
		return 1;
	}

	file.open(argv[1]);
	if (!file.is_open()){
		std::cerr << "Failed to open the file." << std::endl;
		return 1;
	}

	outFile.open(outFileName.c_str());
	if (!outFile.is_open()){
    	std::cerr << "Failed to open the file." << std::endl;
		return 1;
	}

	replaceStr(file, fileRead, s1, s2);

	outFile << fileRead.str();
	file.close();
	outFile.close();
	return 0;
}


