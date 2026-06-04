#pragma once

#include <cstddef>

template <typename T>

void	iter(T *arr, const size_t length, void (*f)(T&))
{
	for (size_t i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>

void	iter(T *arr, const size_t length, void (*f)(const T&))
{
	for (size_t i = 0; i < length; i++)
		f(arr[i]);
}
