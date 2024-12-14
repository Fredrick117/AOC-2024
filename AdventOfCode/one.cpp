#include "one.h"

std::vector<int> column_one;
std::vector<int> column_two;

int day_one_part_one()
{
	std::ifstream input_file("input_one.txt");

	int total_distance = 0;
	
	std::string line;
	while (std::getline(input_file, line))
	{
		std::istringstream iss(line);
		int a, b;

		if (!(iss >> a >> b)) 
		{ 
			break; 
		}

		column_one.push_back(a);
		column_two.push_back(b);
	}
	
	std::sort(column_one.begin(), column_one.end());
	std::sort(column_two.begin(), column_two.end());

	for (int i = 0; i < column_one.size(); i++)
	{
		total_distance += std::abs(column_one[i] - column_two[i]);
	}

	return total_distance;
}

int day_one_part_two()
{
	int similarity_score = 0;

	for (int i = 0; i < column_one.size(); i++)
	{
		similarity_score += column_one[i] * std::count(column_two.begin(), column_two.end(), column_one[i]);
	}

	return similarity_score;
}
