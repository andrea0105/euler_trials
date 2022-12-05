#include <iostream>
#define Max_num 2000000

int main()
{
	unsigned long int sum = 0;

	for (int i = 2; i < Max_num; i++)
	{
		int cnt = 0;

		for (int j = 2; j < i; j++)
		{
			if ( i % j != 0 )
			{
				cnt += 1;
			}
		}

		if ( cnt == (i - 2) )
		{
			sum += i;
		}
	}

	std::cout << "Sum is " << sum << std::endl;
	
	return 0;
}
