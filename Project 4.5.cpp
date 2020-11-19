// Lab_04_5.cpp
// < Кузів Назар >
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 6


#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y <= sqrt(2 * x * R - pow(x, 2)) && (y >= 0)) ||
			(y <= 0 && y >= -R && x <= 0 && x >= -R && y > -1 * pow((x + R), 2) - 2 * y * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << "---------------------------------" << endl;
	cout << "|" << setw(6) << "x" << "    |"
		<< setw(7) << "y" << "      |" << endl;
	cout << "---------------------------------" << endl;
	
	for (int i = 0; i < 10; i++)
	{
		x = -2. * R  * rand() / RAND_MAX + 2*R;
		y = -2. * R  * rand() / RAND_MAX + 2*R;

		if ((y <= sqrt(2 * x * R - pow(x, 2)) && (y >= 0)) ||
			(y <= 0 && y >= -R && x <= 0 && x >= -R && y > -1 * pow((x + R), 2) - 2 * y * R))

			cout << setw(9) << setprecision(4) << x << "  |"
			<< setw(11) << setprecision(4) << y << "  |  " << "yes" << " | " << endl;
		else
			cout << setw(9) << setprecision(4) << x << "  |"
			<< setw(11) << setprecision(4) << y << "  |  " << "no" << "  | " << endl;
	}
	return 0;
}