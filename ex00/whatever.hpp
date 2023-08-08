#ifndef WHATEVER_H
#define WHATEVER_H

template <typename T> T swap(T &x, T &y) {
	T z;
	z = x;
	x = y;
	y = z;
}

#endif // WHATEVER_H
