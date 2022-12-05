#include <iostream>
#include <vector>

int main() 
{
	int cnt2 = 0;
	std::vector<int> num;

	for (unsigned long int i = 2; i < 10000000000000 ; i++)
	{
		int cnt = 0;

		for ( int j = 2; j < i; j++)
		{
			if ( i % j != 0 )
			{
				cnt += 1;
			}
		}

		if ( cnt == i - 2 )
		{
			num.push_back(i);
			cnt2 += 1;
			std::cout << cnt2 << "th number is " << num.back() << std::endl;
		}

		if ( cnt2 == 10001 )
			break;
	}

	return 0;
}

