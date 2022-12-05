#include <iostream>

unsigned long int collatz(unsigned long int number)
{	
	unsigned long int count = 1;

	while (1)
	{
		if ( number % 2 == 0 )
		{
			number = number / 2;
			count += 1;
		}

		else if ( number % 2 != 0 && number != 1 )
		{
			number = 3 * number + 1;
			count += 1;
		}

		else if ( number == 1)
		{
			break;
		}
	}
	
	return count;
}


int main()
{
	unsigned long int number = 1000000;
	unsigned long int result = 0;
	unsigned long int temp = 0;
	
	for ( unsigned long int v = number; v > 0; v-- )
	{	
		temp = collatz(v);
		if ( temp > result )
		{
			result = temp;
			std::cout << "Number is " << v << ", Chain is " << result << std::endl;
		}
	}

	return 0;
}
