#include "iter.hpp"
#include <iostream>

void	function(int &x)
{
	std::cout << x << std::endl;
}

int	main()
{
	size_t	size = 5;
	int *arr = new int;
	for (size_t i = 0; i < size; i++)
		arr[i] = i;

	iter(arr, size, function);
	delete arr;

	return (0);
}
