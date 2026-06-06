#include "iter.hpp"
#include <iostream>

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

void	function_human(Human &h)
{
	std::cout << "Name -> " << h.getName() << " - Age -> " << h.getAge() << std::endl;
}

void	function_int(const int &x)
{
	std::cout << x << " ";
}

void	function_string(std::string &str)
{
	str.insert(0, "*** ");
	str.insert(str.length(), " ***");
}

int	main()
{
	/* NON-CONST ARRAY */
	{
		std::cout << "::: NON-CONST INT ARRAY :::" << std::endl;
		size_t	size = 5;
		int arr[size];
		for (size_t i = 0; i < size; i++)
			arr[i] = i;
		::iter(arr, size, function_int);
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "::: NON-CONST ARRAY ARRAY :::" << std::endl;
		std::string arr[4] = {"C", "Java", "C++", "Kotlin"};
		for (int i = 0; i < 4; i++)
			std::cout << "String -> " << arr[i] << std::endl;
		::iter(arr, 4, function_string);		
		for (int i = 0; i < 4; i++)
			std::cout << "String -> " << arr[i] << std::endl;
	}
	/* CLASS */
	{
		std::cout << std::endl;
		std::cout << "::: CLASS :::" << std::endl;
		Human arr[2] = {Human("Serumaninho", 6), Human("Caramelo", 5)};
		iter(arr, 2, function_human);
	}
	/* CONST ARRAY */
	{
		std::cout << std::endl;
		std::cout << "::: CONST ARRAY :::" << std::endl;
		const int arr[7] = {0, 1, 2, 3, 4, 5, 6};
		::iter(arr, 7, function_int);
		std::cout << std::endl;
	}
	return (0);
}
