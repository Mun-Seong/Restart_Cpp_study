/**
Defining the Point class
mem var		: double x, y
mem func	: show()
constructor	: Point(int, int), Point()
**/
#include <iostream>
using namespace std;

class Point
{
private:
	double	x;
	double	y;
public:
	Point() : Point(0, 0) { }
	Point(double xx, double yy) { x = xx; y = yy; }
	void	show() { cout << '(' << x << ", " << y << ')' << endl; }
};

int	main()
{
	Point p1;
	Point p2(3.14, 1.25);

	p1.show();
	p2.show();

	return (0);
}