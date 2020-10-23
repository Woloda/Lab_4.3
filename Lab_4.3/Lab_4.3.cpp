// Lab_4.3.cpp
// Дорожовець Володимир 
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами. 
// Варіант 0.6 
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, F, x;
	double xp, xk, dx;

	cout << "a = ";  cin >> a;
	cout << endl;
	cout << "b = ";  cin >> b;
	cout << endl;
	cout << "c = ";  cin >> c;
	cout << endl;

	cout << "xp = ";  cin >> xp;
	cout << endl;
	cout << "xk = ";  cin >> xk;
	cout << endl;
	cout << "dx = ";  cin >> dx;
	cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(14) << " F " << "           |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (c < 0 && b != 0)
			F = a * x * x + b * b * x;
		else
			if (c > 0 && b == 0)
				F = (x + a) / (x + c);
			else
				if ((!(c < 0 && b != 0) && !(c > 0 && b == 0)))
					F = x / c;
				else;

		cout << "|" << setw(15) << setprecision(3)
			<< F << "          |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}
