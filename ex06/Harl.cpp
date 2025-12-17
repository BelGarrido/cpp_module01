#include "Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){
    
}

void Harl::debug(void) {
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}       

void Harl::complain(std::string level) {
  int nLevel = -1;

  if(level == "DEBUG") nLevel = 0;
  else if (level == "INFO") nLevel = 1;
  else if (level == "WARNING") nLevel = 2;
  else if (level == "ERROR") nLevel = 3;

  switch(nLevel) {
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
    case 0:
      std::cout << "[DEBUG]" << std::endl;
      debug();
      std::cout << std::endl;
    case 1:
      std::cout << "[INFO]" << std::endl;
      info();
      std::cout << std::endl;
    case 2:
      std::cout << "[WARNING]" << std::endl;
      warning();
      std::cout << std::endl;
    case 3:
    std::cout << "[ERROR]" << std::endl;
      error();
  }
}
