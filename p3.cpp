#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	
	unsigned long int num = 600851475143;
	std::vector<int> y;

	for (int x = 2; x < num; x++) {
		if ( num % x == 0 ) {
			y.push_back(num / x);
		}
	}
	
	std::sort( y.begin(), y.end() );

	for (auto v: y) {
		int cnt = 0;
		for (int i = 2; i < v; i++) {
			if ( v % i != 0 ) { cnt++; }
		}
		if ( cnt == v - 2 ) { std::cout << v << std::endl; }
	}
	return 0;
}
