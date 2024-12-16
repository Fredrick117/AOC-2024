#pragma once

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

int day_two();

bool is_safe(std::vector<int> levels);
bool is_increasing_or_decreasing(std::vector<int> levels);
bool is_within_difference(std::vector<int> levels);
bool can_remove_level(std::vector<int> levels);