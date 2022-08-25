/**
Studing copy constructor

Defining The Book class
mem var		: int price, string title
mem func	: destructor,copy constructor, set(), show()
**/
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
	string	title;
	int		price;
public:
	Book(string title, int price) { set(title, price); }
	Book(Book& b) { set(b.title, b.price); }
	void	set(string title, int price);
	void	show() { cout << title << ' ' << price << "won" << endl; }
};

void Book::set(string title, int price)
{
	this->price = price;
	this->title = title;
}

int main()
{
	Book cpp("C++", 10000);
	Book java = cpp;
	java.set("java", 12000);
	cpp.show();
	java.show();

	return (0);
}