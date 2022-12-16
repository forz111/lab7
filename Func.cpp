#include "Func.hpp"
#include <cmath>

bool Prime(int x)
{
	if (x < 2)
	{
		return false;
	}
	for (int n = 2; n <= sqrt(x) / 2; n++)
	{
		if (x % n == 0)
		{
			return false;
		}
	}
	return true;
}
