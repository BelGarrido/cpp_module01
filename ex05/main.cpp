#include "Harl.hpp"

int main(void){
    Harl h;
    void (Harl::*complain)(std::string)
    complain = &Harl::debug;
    h.complain("DEBUG");
    h.complain("ERROR");
    h.complain("WARNING");
    h.complain("INFO");
}