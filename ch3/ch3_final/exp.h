#ifndef EXP_H
#define EXP_H

class	Exp
{
	int	exp; 
	int	base;
public:
	Exp(int b, int e)	{ base = b; exp = e; }
	Exp(int b) : Exp(b, 1)	{ }
	Exp() : Exp(1) { }
	int getExp()	{ return (this-> exp); }
	int getBase()	{ return (this->base); }
	int getValue();
	bool equals(Exp b);
};

#endif
