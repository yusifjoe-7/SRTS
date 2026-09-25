


#include "tokens.hpp"
#include <array>
#include <iostream>
#include <ostream>
#include <string>
#include <variant>
#include "../colors.hpp"

std::array<std::string, 3> options{"create", "load", "edit"};

void HTC::read(std::vector<std::string> &tokens){
    if (tokens[0] != "create" && tokens[0] != "load" && tokens[0] != "edit") {
        std::cout<<"what a fuck is "<<RED<<tokens[0]<<RESET<<" command !? \n--- use "<<RED<<"help"<<RESET<<" command to improve your IQ ---"<<std::endl;
        return;
    }
    std::variant<double, Error> days{get_days(tokens)};
    if(std::holds_alternative<Error>(days)){return;}
    if(std::get<double>(days)< 1){
        std::cout<<RED << "fuck you"<<RESET<<" that is a nagative number of days \n are you even know math "<<std::endl;
    }
    
    if(tokens[0] == "create"){
        std::cout<<std::get<double>(days)<<std::endl;
    }else if (tokens[0] == "load") {
    
    }else if (tokens[0] == "edit") {
    }
}