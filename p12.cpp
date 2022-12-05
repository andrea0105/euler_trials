#include <iostream>

unsigned long int tri(unsigned long int num)
{	
	unsigned long int temp = 0;

	for (unsigned long int i = num; i > 0; i--)
	{
		temp += i;
	}
	std::cout << "Triangle number is " << temp << std::endl;

	return temp;
}

unsigned long int factor(unsigned long int num)
{
	unsigned long int count = 0;

	for (unsigned long int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count += 1;
	}
	
	return count;
}

int main()
{
	unsigned long int count = 1;
	unsigned long int number = 0;
	unsigned long int count2 = 0;
	
	while(1)
	{
		number = tri(count);
		count2 = factor(number);
		if (count2 > 500)
			break;
		else
			count += 1;
	}

	return 0;
}
