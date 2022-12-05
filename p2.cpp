#include <iostream>
#define MAX_NUM 4000000

int main()
{
	
	int x = 0;
	int y = 1;
	int z;
	int sum;

	do {
		z = x + y;
		x = y;
		y = z;
		if ( y % 2 == 0 ) { sum += y;}
	}while (y <= MAX_NUM );
	
	std::cout << sum << std::endl;

	return 0;
}
