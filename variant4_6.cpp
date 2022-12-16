#include <iostream>
#include "Func.hpp"

int main()
{
	int const n = 100;
	int swapped;
	int p = 0;
	int absol = 0;
	int count_min = 0;
	int a[n][n];
	int n1, n2;
	int min = 1000000;
	int m = 1;
	std::cout << "Enter a number from 1 to 100 twice" << std::endl;
	std::cin >> n1 >> n2;
	int m_m[n]={};
	std::cout << "Enter the matrix values separated by a space" << std::endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			std::cin >> a[i][j];
			m *= a[i][j];
			if (min > a[i][j]) min = a[i][j];
			if (Prime(a[i][j])) absol += 1;
		}
		m_m[i] += m;
		m = 1;
		std::cout<< "; Multiplication = " << m_m[i] << "\t";
		std::cout << std::endl;
	}
	std::cout << "Array" << std::endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			std::cout << a[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "\n";
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (min == a[i][j]) count_min +=1;
		}
	}
	if (count_min >= 2 and absol >= 2)
	{
		for (int k = m_m[i]; k < n1; k *= m)
		{
			for (int i = 0; i < (n2 - 1); i++)
			{
				for (int j = 0; j < n2 - i - 1; j++)
				{
					if (k > (k += m))
					{
						swapped = k;
						k = (k += m);
						(k += m) = swapped;
					}
				}
			}
		}
		std::cout << std::endl << "Sorted array" << std::endl;
		for (int i = 0; i < n1; i++)
		{
			for (int j = 0; j < n2; j++)
			{
				std::cout << a[i][j] << "  ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}