#include <iostream>

unsigned long long int sum(unsigned long long int number)
{
	int result = 0;

	while(number != 0)
	{
		result += number % 10;
		number /= 10;
	}

	return result;
}

int main()
{
	int iter = 100;
	unsigned long long int result = 1;
	unsigned long long int number = 0;

	for ( int i = iter; i > 0; i-- )
	{
		result *= 2;
	}

	std::cout << result << std::endl;

	number = sum(result);

	std::cout << "The sum of the digits : " << number << std::endl;
	
	return 0;
}

