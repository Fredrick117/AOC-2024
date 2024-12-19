#pragma once

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

int day_three_part_one();

bool is_valid_instruction(std::string input);

std::vector<int> get_all_mul_positions(std::string input);