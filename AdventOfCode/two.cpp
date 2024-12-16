#include "two.h"

int day_two()
{
	int num_safe_reports = 0;

	std::fstream input_file("input_two.txt");

	std::string line;

	while (std::getline(input_file, line))
	{
		std::stringstream ss(line);
		std::vector<int> levels;
		int level;

		while (ss >> level)
		{
			levels.push_back(level);
		}

		if (is_safe(levels))
		{
			num_safe_reports++;
		}
		else
		{
			if (can_remove_level(levels))
			{
				num_safe_reports++;
			}
		}
	}

	return num_safe_reports;
}

bool is_safe(std::vector<int> levels)
{
	return is_increasing_or_decreasing(levels) && is_within_difference(levels);
}

bool is_increasing_or_decreasing(std::vector<int> levels)
{
	bool is_increasing = levels[0] < levels[1];

	for (int i = 0; i < levels.size() - 1; i++)
	{
		int current_level = levels[i];
		int next_level = levels[i + 1];

		if (current_level < next_level && !is_increasing)
		{
			return false;
		}

		if (current_level > next_level && is_increasing)
		{
			return false;
		}
	}

	return true;
}

bool is_within_difference(std::vector<int> levels)
{
	for (int i = 0; i < levels.size() - 1; i++)
	{
		int current_level = levels[i];
		int next_level = levels[i + 1];
		int difference = std::abs(next_level - current_level);

		if (difference > 3 || difference < 1)
		{
			return false;
		}
	}

	return true;
}

bool can_remove_level(std::vector<int> levels)
{
	for (int i = 0; i < levels.size(); i++)
	{
		std::vector<int> new_levels = levels;
		new_levels.erase(new_levels.begin() + i);

		if (is_safe(new_levels))
		{
			return true;
		}
	}

	return false;
}


