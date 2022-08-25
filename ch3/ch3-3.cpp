/**
3-2 + Protecting mem var
Person(string s, int age);
Person(string s);
Person();
**/
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string	name;
	int		age;
public:
	void	show();
	void	set_name(string s) { this->name = s; }
	void	set_age(int i) { this->age = i; }
	string	get_name() { return (name); }
	int		get_age() { return (age); }
	Person() : Person("", 0) {}
	Person(string s) : Person(s, 0) {}
	Person(string s, int age) { set_name(s); set_age(age); }
};
void Person::show()
{
	cout << "name : " << get_name() << " | age : " << get_age() << endl;
}

int	main()
{
	Person p1("aaa");
	Person p2("bbb", 2);

	p1.show();
	p2.show();

	p1.set_age(1);
	p2.set_name("p2_name");

	p1.show();
	p2.show();

	return (0);
}