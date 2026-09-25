#pragma once

#include <variant>
#include <vector>
#include <string>

#include "../error.hpp"
std::variant<int, Error> get_days(std::vector<std::string>& tokens);