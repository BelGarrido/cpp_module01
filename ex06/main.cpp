#include "Harl.hpp"

std::string touppercase(std::string s){  
  for (size_t i = 0; i < s.length(); i++) {
      if (s[i] >= 'a' && s[i] <= 'z')
          s[i] = toupper(s[i]);;
  }    
  return s;
}

int main(int argc, char **argv){
  if(argc != 2){
    std::cout << "Usage: " << argv[0] << " <level of complain>" << std::endl;
    return 1;
  }

  Harl h;
  std::string level = touppercase(argv[1]);

  //std::cout << level << std::endl;
  if (level.empty()){
      std::cout << "Invalid argument" << std::endl;
      std::cout << "<level of complain>" << std::endl;
      return 1;
  }

  h.complain(level);
  return 0;
}
