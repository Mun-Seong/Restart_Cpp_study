/**
Defining the Point class
mem var		: double x, y
mem func	: showPoint(), getter, setter
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
	double	getX()	{ return (x); }
	double	getY()	{ return (y); }
	void	setX(double xx)	{ x = xx; }
	void	setY(double yy)	{ y = yy; }
	void	showPoint()	{ cout << '(' << x << ", " << y << ')' << endl; }
};

int	main()
{
	Point p1;
	Point p2(3.14, 1.25);

	p1.showPoint();
	p2.showPoint();

	p1.setX(4.13);
	p1.setY(5.21);

	p1.showPoint();
	p2.showPoint();

	return (0);
}