/**
Studing Call by reference

Defining The Accumulator class
mem var		: int val
mem func	: get(), constructor, add()

ex) acc(10); acc.add(5).add(6).add(7); acc.get() // 28
**/
#include <iostream>
using namespace std;

class Accumulator
{
	int val;
public:
	Accumulator(int val) { this->val = val; } 
	Accumulator& add(int n);
	int get() { return (val); }
};

Accumulator& Accumulator::add(int n)
{
	this->val += n;
	return (*this);
}

int	main()
{
	Accumulator acc(10);
	acc.add(5).add(6).add(7);
	cout << acc.get() << endl;
}