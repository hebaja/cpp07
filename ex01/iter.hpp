#pragma once

template <typename T>
void	iter(T *arr, const unsigned int length, void (*f)(T&))
{
	for (unsigned int i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void	iter(T *arr, const unsigned int length, void (*f)(const T&))
{
	for (unsigned int i = 0; i < length; i++)
		f(arr[i]);
}
