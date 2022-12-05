#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int rev(int num){
	std::string s = std::to_string(num);
	std::reverse(s.begin(), s.end());
	return atoi(s.c_str());
}

int main() {
	
	int temp;
	std::vector<int> num;

	for ( int x = 999; x > 0; x-- ) {
		for (int y = 999; y > 0; y-- ) {
			temp = x * y ;
			if ( temp == rev(temp) ) {
				num.push_back(temp);
			}			
		}
	}

	std::sort(num.begin(), num.end());

	std::cout << *max_element(num.begin(), num.end()) << std::endl;

	return 0;
}

