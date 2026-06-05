#pragma once

#include <exception>
template <typename T>

class Array
{
private:
	unsigned int	n;
	T				*_t;

public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &other);
	Array& operator=(const Array<T> &other);
	~Array();

	const T& operator[](unsigned int index) const;
	T& operator[](unsigned int index);

	unsigned int size() const;

	class IndexOutOfBoundsException : public std::exception
	{
	public:
		const char * what() const throw();	
	};
};

#include "Array.tpp"
