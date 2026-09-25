#pragma once

#include "../get_days/get_days.hpp"
#include <iostream>


class get_tokens{
    public:
       static std::string get_input();
       static std::vector<std::string> splet_tokens(std::string& input);
};

// handle_tokens_commands

class HTC{
    public:
        static void read(std::vector<std::string>& tokens);
};