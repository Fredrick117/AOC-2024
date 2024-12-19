#include "one.h"
#include "two.h"
#include "three.h"

int main()
{
	std::cout << "Day 1 part 1 answer: " << day_one_part_one() << std::endl;
	std::cout << "Day 1 part 2 answer: " << day_one_part_two() << std::endl;

	std::cout << std::endl;

	std::cout << "Day 2 part 2 answer: " << day_two() << std::endl;

	std::cout << "day 3 test: " << has_valid_mul("mul(1,2)lkajslkdja") << std::endl;
	
	return 0;
}