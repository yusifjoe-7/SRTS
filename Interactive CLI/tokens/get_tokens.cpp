#include "tokens.hpp"
#include "../colors.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


std::string get_tokens::get_input(){
    std::string input{};
    std::cout << "\n{ "<< BB <<"SRTS"<< RESET <<" } => ";
    std::getline(std::cin, input);
    return input;
}

std::vector<std::string> get_tokens::splet_tokens(std::string& input){
    std::vector<std::string> vec;
    std::string token;
    std::stringstream ss(input);
    while (ss >> token) {
        vec.push_back(token);
    }
    return vec;
}