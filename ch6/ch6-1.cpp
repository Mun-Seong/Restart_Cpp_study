/**
Studing Operator Overloading and friend func

Defining the Book class
mem var		: string title, int price, pages
mem func	: constructor, friend (==operator int, string, Book)
**/
#include <iostream>
#include <string>
using namespace std;

class Book
{
	string	title;
	int		price;
	int		pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
	{ this->title = title; this->price = price; this->pages = pages; }
	friend bool operator ==(Book book, int price);
	friend bool operator ==(Book book, string title);
	friend bool operator ==(Book book1, Book book2);
};

bool operator ==(Book book, int price)
{
	if (book.price == price) return (true);
	else return (false);
}

bool operator ==(Book book, string title)
{
	if (book.title == title) return (true);
	else return (false);
}

bool operator ==(Book book1, Book book2)
{
	if (book1.title == book2.title && book1.price == book2.price
	&& book1.pages == book2.pages) return (true);
	else return (false);
}

int main()
{
	Book a("C++", 30000, 500), b("C++2", 30000, 500);
	if (a == 30000) cout << "price = 30000won" << endl;
	if (a == "C++") cout << "title = C++" << endl;
	if (a == b) cout << "a = b" << endl;

	return (0);
}