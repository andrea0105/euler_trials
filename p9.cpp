#include <iostream>

int main()
{
	int a, b, c;
	for (int i = 1; i < 1000; i++)
	{

		for (int j = 1; j < 1000; j++)
		{

			for (int k = 1; k < 1000; k++)
			{

				if ( i + j + k == 1000 && i < j && j < k && ( (i*i) + (j*j) == (k * k) ) )
				{
					std::cout << "a = " << i << " b = " << j << " c = " << k << std::endl;
					std::cout << "Result is " << i * j * k << std::endl;
				}
			}
		}
	}

	return 0;
}
