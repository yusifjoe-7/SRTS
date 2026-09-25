#include "../colors.hpp"
#include <iostream>

void help(){
    std::cout<<std::endl;
    std::cout<<BB<<"m"<<RESET<<" : month"<<std::endl;
    std::cout<<BB<<"w"<<RESET<<" : week"<<std::endl;
    std::cout<<BB<<"d"<<RESET<<" : day"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"--->  srts 3 m 2 w 5 d"<<std::endl;
    std::cout<<"that is 3 monthes and 2 weeks and 5 days total 109 days"<<std::endl;
}