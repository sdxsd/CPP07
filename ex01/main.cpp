#include "iter.hpp"

int main(void) {
	int		x[4] = { 1, 2, 3, 4 };
	char	y[] = "Hello!";

	iter(x, 4, []<typename T>(T &param) {
		std::cout << param << std::endl;
	});

	iter(y, 6, []<typename T>(T &par) {
			std::cout << par;
	});
	std::cout << std::endl;
}
