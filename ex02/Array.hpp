#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template <typename T> class Array {
	private:
		T*				elements;
		unsigned int	length;
	public:
		// Constructors & Destructors:
		Array(void): elements(NULL), length(0) { ; }
		~Array(void) {
			if (elements)
				delete []elements;
		}
		Array(unsigned int n) {
			elements = new T[n]; // Need to add alloc checker.
			length = n;
		}
		Array(const Array& copy) {
			elements = new T[copy.length];
			for (int i = 0; i < copy.length; i++)
				elements[i] = copy.elements[i];
			length = copy.length;
		}
		// Operators:
		Array<T> &operator=(const Array& copy) {
			if (this != &copy) {
				if (length > 0)
					delete []elements;
				this->elements = new T[copy.length];
				for (int i = 0; i < copy.length; i++)
					this->elements[i] == copy.elements[i];
				this->length = copy.length;
			}
			return (*this);
		}
		T &operator[](const unsigned int& index) {
			if (index > this->length)
				throw std::out_of_range("Index out of range.");
			else
				return (elements[index]);
		}
		// Methods:
		unsigned int	size(void) {
			return (length);
		}
};

#endif // ARRAY_H
