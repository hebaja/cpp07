#include <stdexcept>
template <typename T>
Array<T>::Array() : n(0), _t(new T[n]()){}

template <typename T>
Array<T>::Array(unsigned int n) : n(n), _t(new T[n]()){}

template <typename T>
Array<T>::Array(const Array<T> &other) : n(other.n), _t(new T[other.n]())
{
	for (unsigned int i = 0; i < other.n; i++) {
		_t[i] = other._t[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		delete[] _t;
		n = other.n;
		_t = new T[n]();
		for (unsigned int i = 0; i < other.n; i++) {
			_t[i] = other._t[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _t;
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= n)
		throw IndexOutOfBoundsException();
	else
		return _t[index];
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= n)
		throw IndexOutOfBoundsException();
	else
		return _t[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (n);
}

template <typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "Exception: Index out of bounds";
}
