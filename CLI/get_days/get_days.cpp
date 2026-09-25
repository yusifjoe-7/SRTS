
#include "get_days.hpp"
#include <iostream>
#include "../colors.hpp"

#include <charconv>
#include <stdexcept>
#include <string>


bool isInteger(const std::string& token){
    int value;

    auto [ptr, ec] = std::from_chars(
        token.data(),
        token.data() + token.size(),
        value
    );

    return ec == std::errc{} && ptr == token.data() + token.size();
}


void throw_error(std::string& token){
        std::cout<<"unable to understand the syntax " << RED << token << RESET << " use "<<
            BB<<"help"<<RESET<<" command to improve your IQ"<<std::endl;
}

std::variant<int, Error>  get_days(std::vector<std::string>& tokens){
    
    int i{0};
    int last{};
    bool isTL{false}; // is thare last
    int totalDays{};
    while (i< tokens.size()) {
        bool isitInt {isInteger(tokens[i])};
        if (isitInt) {
            last = std::stoi(tokens[i]);
            isTL = true;
        }else {
            if(isTL){
                switch (tokens[i][0]) {
                    case 'm':
                        totalDays += last * 30;
                        break;
                    case 'w':
                        totalDays += last * 7;
                         break;
                    case 'd':
                        totalDays += last;
                         break;
                    case '-':
                        if (tokens[i] == "-l") {
                            break;
                        }
                        else {
                            throw_error(tokens[i]);
                            return Error::ERROR;
                        }
                        break;
                    default:
                      throw_error(tokens[i]);
                      return Error::ERROR;
                    break;  
                }
                isTL = false;
            }else {
                throw_error(tokens[i]);
                return Error::ERROR;
                break;
            }
        }
       i++; 
    }
    return totalDays;
}