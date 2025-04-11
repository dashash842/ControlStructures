#include<iostream>
using namespace std;

//#define FACTORIAL
//#define POWER
#define ASCII
//#define FIBONACHI
//#define SIMPLE_NUMBER
//#define PREDEL




void main()
{
	//setlocale(LC_ALL, "Russian");

	/*for (;;)
	{
		cout << "Hello FOR";
	}
	*/

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/

#ifdef FACTORIAL
	int n;
	cout << "¬ведите количество итераций:"; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;
	int n;
	cout << "¬ведите основание числа:"; cin >> a;
	cout << "¬ведите степень числа:"; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER


#ifdef ASCII
	for (int i = 216; i < 256; i++)
	{
		//if (i % 16 == 0)cout << endl;
		if (i & 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef PREDEL
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		//bool perfect = true;     //пердположим что число совершенное,
								   //но это нужно проверить:
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)sum += j;
		}
		//if (sum == i)perfect = true;
		if (sum == i)cout << i << "\t";
	}
#endif // PREDEL

	
}