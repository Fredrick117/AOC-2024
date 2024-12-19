#include "three.h"

#include <cctype>

int day_three_part_one()
{
	std::fstream input_file("input_three.txt");
	
	std::string line;

	while (std::getline(input_file, line))
	{
		std::stringstream ss(line);

		while (ss >> line)
		{
			std::vector<int> positions = get_all_mul_positions(line);

			for (int pos : positions)
			{
				std::string full_instruction = line.substr(pos, 12);
			}
		}
	}
}

bool is_valid_instruction(std::string input)
{
	
}

std::vector<int> get_all_mul_positions(std::string input)
{
	std::vector<int> positions;

	size_t pos = input.find("mul(", 0);

	while (pos != std::string::npos)
	{
		positions.push_back(pos);
		pos = input.find("mul(", pos + 1);
	}

	return positions;
}

