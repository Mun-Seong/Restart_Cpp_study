/**
Defining The PointManager class
mem var		: Point *p, int size
mem func	: input(), show()
constructor	: PointManager(int n)
destructor	: !PoiintManager()
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
	void	setX(double xx)	{ x = xx; }
	void	setY(double yy)	{ y = yy; }
	void	showPoint()	{ cout << '(' << x << ", " << y << ')' << endl; }
};

class PointManager
{
private:
	Point	*p;
	int		size;
public:
	PointManager(int n) { p = new Point[n]; size = n; }
	~PointManager()	{ delete[] p; }
	void	input();
	void	show();
};

void PointManager::input()
{
	double xx, yy;
	for (int i=0;i<size;i++)
	{
		cout << "x(double) : ";
		cin >> xx;
		cout << "y(double) : ";
		cin >> yy;
		p[i].setX(xx);
		p[i].setY(yy);
	}
}

void PointManager::show()
{
	cout << "All Points" << endl;
	for(int i=0;i<size;i++)
		p[i].showPoint();
}

int	main()
{
	int	n;
	cout << "num of point : ";
	cin >> n;
	PointManager pm(n);
	pm.input();
	pm.show();

	return (0);
}

