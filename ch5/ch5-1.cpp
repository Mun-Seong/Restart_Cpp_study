/**
Studing Call by reference

Defining The Circle class
mem var		: int radius
mem func	: show()

func		: increseBy(Circle a, Circle b) [plus Circle radiuse]
wrong func 
void increseBy(Circle a, Circle b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
**/
#include <iostream>
using namespace std;

class Circle
{
	int	radius;
public:
	Circle(int r) { setRadius(r); }
	int		getRadius() { return (radius); }
	void	setRadius(int r) { this->radius = r; }
	void	show() { cout << getRadius() << endl; }
};

void increseBy(Circle &a, Circle &b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}	

int main()
{
	Circle x(10), y(5);
	increseBy(x, y);
	x.show();
}