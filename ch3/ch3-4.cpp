/**
Defining the Rect class
mem var		: width, height, area
mem func	: computeArea(), getter, setter
constructor	: Rect(int, int)
**/
#include <iostream>
using namespace std;

class Rect
{
private:
	int	width;
	int	height;
	int	area;
public:
	Rect(int w, int h)	{ width = w; height = h; }
	void	computeArea() { this->area = width * height; }
	int		getWidth()	{ return (width); }
	int		getHeight()	{ return (height); }
	int		getArea()	{ return (area); }
};

int main()
{
	Rect r1(3, 4);
	Rect r2(5, 6);

	r1.computeArea();
	r2.computeArea();

	cout << "r1 info\nwidth : " << r1.getWidth() << "\nheight : " << r1.getHeight()
	<< "\nArea : " << r1.getArea() << endl;
	cout << "r2 info\nwidth : " << r2.getWidth() << "\nheight : " << r2.getHeight()
	<< "\nArea : " << r2.getArea() << endl;
}