#include "iter.hpp"
#include <iostream>

void	function(int &x)
{
	std::cout << x << std::endl;
}

class	Human
{
private:
	std::string name;
	int	age;

public:
	Human(std::string name, int age) : name(name), age(age){};
	~Human(){};

	std::string getName() const
	{
		return name;
	}

	int getAge() const
	{
		return age;
	}
};

void	function_human(Human h)
{
	std::cout << "Name -> " << h.getName() << " - Age -> " << h.getAge() << std::endl;
}

int	main()
{
	{
		size_t	size = 5;
		int *arr = new int;
		for (size_t i = 0; i < size; i++)
			arr[i] = i;

		iter(arr, size -1, function);
		delete arr;
	}
	{
		Human arr[2] = {Human("Serumaninho", 6), Human("Caramelo", 5)};

		iter(arr, 2, function_human);
	}

	return (0);
}
