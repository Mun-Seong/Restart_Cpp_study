/**
3-1 + Defining constructor
Person(string s, int age);
Person(string s);
Person();
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
	Person() : Person("", 0) {}
	Person(string s) : Person(s, 0) {}
	Person(string s, int age) {name = s; this->age = age;}
};
void Person::show()
{
	cout << "name : " << name << " | age : " << age << endl;
}

int	main()
{
	Person p1;
	Person p2("aaa");
	Person p3("bbb", 3);

	p1.show();
	p2.show();
	p3.show();

	return (0);
}