/**
Studing copy constructor

Defining The Book class
mem var		: int price, char *title
mem func	: destructor,copy constructor, set(), show()
**/
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
	char	*title;
	int		price;
public:
	Book(char *title, int price) { this->title = new char; set(title, price); }
	Book(Book& b) { this->title = new char; set(b.title, b.price); }
	~Book() { delete title; }
	void	set(char *title, int price);
	void	show() { cout << title << ' ' << price << "won" << endl; }
};

void Book::set(char *title, int price)
{
	this->price = price;
	strcpy(this->title, title);
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