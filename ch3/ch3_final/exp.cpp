#include "exp.h"

int	fast_pow(int e, int b)
{
	if (e == 1)
		return (b);
	if (e == 0)
		return (1);
	int t = fast_pow(e / 2, b);
	if (e % 2 == 1)
		return (b * t * t);
	else
		return (t * t);
}

int	Exp::getValue()
{
	return (fast_pow(this->exp, this->base));
}

bool Exp::equals(Exp b)
{
	return (this->getValue() == b.getValue());
}
