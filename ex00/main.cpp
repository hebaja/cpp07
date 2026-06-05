#include "whatever.hpp"
#include <iostream>

class	Human
{
private:
	std::string name;
	int	age;

public:
	Human() : name("default"), age(0){};
	Human(std::string name, int age) : name(name), age(age){};
	~Human(){};

	bool operator<(Human &other)
	{
		return (this->age < other.age);
	}
	
	bool operator>(Human &other)
	{
		return (this->age > other.age);
	}

	std::string getName() const
	{
		return name;
	}

	int getAge() const
	{
		return age;
	}
};

std::ostream &operator<<(std::ostream &os, const Human &h)
{
	os << "Dog's age: "<< h.getAge() << " | Dog's name: " << h.getName();
    return (os);
}

int	main()
{
	{
		int	a = 2;
		int	b = 3;

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl; 
		std::cout << "min(a, b) = " << min(a, b) << std::endl;
		std::cout << "max(a, b) = " << max(a, b) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
		std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "::: CLASS :::" << std::endl;
		Human a("Serumaninho", 8); 
		Human b("Caramelo", 5);
		std::cout << "Dog's age: " << a.getAge() << " | Dog's name: " << a.getName() << std::endl;
		std::cout << "Dog's age: " << b.getAge() << " | Dog's name: " << b.getName() << std::endl;
		::swap(a, b);
		std::cout << "Swapped dog's age: " << a.getAge() << " | Dog's name: " << a.getName() << std::endl;
		std::cout << "Swapped dog's age: " << b.getAge() << " | Dog's name: " << b.getName() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "::: CLASS :::" << std::endl;
		Human a("Serumaninho", 8); 
		Human b("Caramelo", 5);
		std::cout << "min -> " << ::min(a, b) << std::endl;
		std::cout << "max -> " << ::max(a, b) << std::endl;
	}

	return (0);
}
