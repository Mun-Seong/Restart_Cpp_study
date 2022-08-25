#include <iostream>
#include "exp.h"
using namespace std;

int main()
{
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a - base " << a.getBase() << "; exp " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
	return (0);
}

/** comfile command g++ exp.cpp main.cpp **/