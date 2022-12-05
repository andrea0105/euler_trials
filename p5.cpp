#include <iostream>

int gcd(int num1, int num2)
{
	int temp{0};

	while (num2)
	{	
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}

	return num1;
}

int lcm(int num1, int num2)
{
	int result{0};

	result = (num1 * num2) / gcd(num1, num2);

	return result;
}

int main()
{
	int res{1};
	for (int i = 2; i < 20; i++)
	{
		res = lcm(res, i);
		std::cout << res << std::endl;
	}

	return 0;
}






