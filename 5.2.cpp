#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double S(const double x, const double eps, int n, double s); //Прототип
double A(const double x, const int n, double a); //Прототип
int main()
{

	double xp, xk, x, dx, eps, a = 0, R = 0, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "arth(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		double sum = S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << 0.5 * log((1 + x) / (1 - x)) << " |"
			<< setw(10) << setprecision(5) << sum << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}

double S(const double x, const double eps, int n, double s) //Сума
{
	n = 0;
	double a = x;
	s = a;
	do {
		n++;
			a = A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}
double A(const double x, const int n, double a) //Метод рекурсії
{
	double R = ((2 * n - 1) * x * x) / (2 * n + 1); // вираз залежить від умови завдання варіанту
	a *= R;
	return a;
}