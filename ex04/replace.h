#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>
#include <fstream>
#include <sstream> 

void replaceStr(std::ifstream &file, std::stringstream &fileRead, std::string s1, std::string s2);

#endif