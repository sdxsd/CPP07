#ifndef ITER_H
#define ITER_H
#include <iostream>

template <typename T, typename Lambda> void iter(T* addr, int len, Lambda func) {
	for (int i = 0; i < len; i++) {
		func(addr[i]);
	}
}

#endif // ITER_H
