

#include "colors.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include "./get_days/get_days.hpp"
#include "create/create.hpp"
#include "help/help.hpp"
int main(int argc, char *argv[]){
    if(argc < 2 ){std::cerr<<"there is no input !?\nyou can use "<<RED<<"help"<<RESET<<" command"<<std::endl; return 1;}
    std::vector<std::string> data{};

    if(std::string(argv[1]) == "help"){
        help();
        return 0;
    }

    
    // std::cout<<*argv<<std::endl;
    for(int i{1}; i<argc; i++) {
        std::string y{argv[i]};
        data.push_back(y);
    }

    std::variant<int, Error> days{get_days(data)};
    if(std::holds_alternative<Error>(days)){return 2;}
    if(std::get<int>(days)< 1){
        std::cerr<<RED << "fuck you"<<RESET<<" that is a nagative number of days \n are you even know math "<<std::endl;
        return 3;
    }
    
    create(std::get<int>(days));
    
    
    return 0;
}