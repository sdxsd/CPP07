#include <iostream>
#include "whatever.hpp"

int main(void) {
	int x = 5, y = 15;

	std::cout << min(1, 10) << std::endl;
	std::cout << max(11, 10) << std::endl;

	std::cout << "x == " << x << std::endl;
	std::cout << "y == " << y << std::endl;
	std::cout << "Swapping..." << std::endl;
	swap(x, y);
	std::cout << "x == " << x << std::endl;
	std::cout << "y == " << y << std::endl;

}
