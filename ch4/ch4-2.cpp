/**
Defining The PersonManager class
mem var		: Person *p, int size
mem func	: input(), show(), search()
constructor	: PersonManager(int n)
destructor	: !PersonManager()
**/
#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	string tel;
public:
	Person() { set("", ""); }
	string	getName()	{ return (name); }
	string	getTel()	{ return (tel); }
	void	set(string name, string tel) { this->name = name; this->tel = tel; }
};

class PersonManager
{
	Person	*p;
	int		size;
public:
	PersonManager(int n) { size = n; p = new Person[size]; }
	~PersonManager() { delete[] p; }
	void	input();
	void	show();
	void	search();
};

void PersonManager::input()
{
	string name, tel;
	for (int i=0;i<size;i++)
	{
		cout << "name : ";
		cin >> name;
		cout << "tel : ";
		cin >> tel;
		p[i].set(name, tel);
	}
}

void PersonManager::show()
{
	for (int i=0;i<size;i++)
	{
		cout << "name : " << p[i].getName();
		cout << "	tel : " << p[i].getTel() << endl;
	}
}

void PersonManager::search()
{
	string name;
	cout << "search tel - input name : ";
	cin >> name;
	for(int i=0;i<size;i++)
	{
		if (name == p[i].getName())
		{
			cout << "tel is " << p[i].getTel() << endl;
			return ;
		}
	}
	cout << "Searching fail(Wrong tel)" << endl;
}

int	main()
{
	int	n;
	cout << "num of person : ";
	cin >> n;
	PersonManager pm(n);
	pm.input();
	pm.show();
	pm.search();

	return (0);
}