#include "Array.hpp"
#include <iostream>
#include <string>

class	Human
{
private:
	std::string name;
	int	age;

public:
	Human() : name("default"), age(0){};
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

int	main()
{
	{
		Array<int>	int_arr;
		Array<char>	char_arr(5);
	}
	{
		Array<int>	int_arr(5);
		Array<int>	copy_arr(int_arr);
	}
	{
		Array<std::string>	a(5);
		Array<std::string>	b;
		b = a;
	}
	std::cout << std::endl;
	/* ASSIGNING */
	std::cout << "::: ASSIGNING :::" << std::endl;
	{
		Array<int>	arr(3);
		arr[0] = 42;
		arr[1] = 24;
		arr[2] = 12;
		std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
		arr[2] = 6;
		std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
	}
	{
		Array<char>	arr(2);
		try {
			arr[0] = 'a';
			arr[1] = 'b';
			std::cout << arr[0] << ", " << arr[1] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	/* OUT OF BOUNDS */
	std::cout << "::: INDEX OUT OF BOUNDS :::" << std::endl;
	{
		Array<char>	arr(2);
		try {
			arr[0] = 'a';
			arr[1] = 'b';
			//out of bounds index;
			arr[2] = 'c';
			std::cout << arr[0] << ", " << arr[1] << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	/* STRING */
	std::cout << "::: STRING :::" << std::endl;
	{
		Array<std::string> arr(4);
		arr[0] = "Foo";
		arr[1] = "Bar";
		arr[2] = "Hello";
		arr[3] = "World";
		for (int i = 0; i < 4; i++) {
			std::cout << arr[i] << std::endl;
		}

	}
	std::cout << std::endl;
	/* CLASS */
	std::cout << "::: CLASS :::" << std::endl;
	{
		Array<Human> arr(3);
		arr[0] = Human("Serumaninho", 5);
		arr[1] = Human("Caramelo", 4);
		for (int i = 0; i < 3; i++) {
			std::cout << "dog's age: "<< arr[i].getAge() << " | dog's name: "<< arr[i].getName() << std::endl;
		}
	}
	std::cout << std::endl;
	/* COPY CONSTRUCTOR */
	std::cout << "::: COPY CONSTRUCTOR :::" << std::endl;
	{
		Array<int>	arr(3);
		arr[0] = 42;
		arr[1] = 24;
		arr[2] = 12;
		std::cout << "Before copy: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
		Array<int>	copy(arr);
		arr[2] = 6;
		std::cout << "After copy: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
		std::cout << "New coppied : " << copy[0] << ", " << copy[1] << ", " << copy[2] << std::endl;
	}
	std::cout << std::endl;
	/* COPY OPERATOR */
	std::cout << "::: COPY OPERATOR :::" << std::endl;
	{
		Array<int>	arr(3);
		Array<int>	copy;
		arr[0] = 42;
		arr[1] = 24;
		arr[2] = 12;
		std::cout << "Before copy: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
		copy = arr;
		arr[2] = 6;
		std::cout << "After copy: " << arr[0] << ", " << arr[1] << ", " << arr[2] << std::endl;
		std::cout << "New coppied : " << copy[0] << ", " << copy[1] << ", " << copy[2] << std::endl;
	}
	return (0);
}
