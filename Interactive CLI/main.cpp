
#include "tokens/tokens.hpp"


void assest(){
    std::cout<<"\n you can use quit & help commands \n\n";
}



int main(){

    assest();
    
    while (1) {
        std::string input{get_tokens::get_input()};
        if (input == "quit") {
            break;
        }else if (input == "help") {
        
        }
        std::vector<std::string> tokens{get_tokens::splet_tokens(input)};
        HTC::read(tokens);
    }
    
    return 0;
}