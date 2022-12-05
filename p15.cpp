#include <iostream>

unsigned long int fact()
{
	unsigned long int result = 1;

	for (int i = 40; i >= 21; i-- )
	{
		result *= i;
	}

	return result;
}

int main()
{
	std::cout << fact() << std::endl;

	return 0;
}
		
