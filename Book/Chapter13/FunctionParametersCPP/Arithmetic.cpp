#include "Arithmetic.h"

bool arithmetic (int a, int *b)
{
	if (!b)
	{
		return false;
	}

	*b = *b + a;
	++a;
	*b = a * *b;

	return true;
}