#pragma once

template <typename T>

class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array &a);
	Array& operator=(const Array &a);
	~Array();

	const T& operator[](int index) const;
	T& operator[](int index);

	unsigned int size() const;
};
