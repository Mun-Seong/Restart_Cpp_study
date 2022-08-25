/**
Defining the Person class
mem var		: name, age
mem func	: show()
**/
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string	name;
	int		age;
	void	show();
};
void Person::show()
{
	cout << "name : " << name << " | age : " << age << endl;
}

int	main()
{
	Person p1;
	Person p2;

	p1.name = "p1_name";
	p2.name = "p2_name";
	p1.age = 1;
	p2.age = 2;

	p1.show();
	p2.show();

	return (0);
}