#include<iostream>
#include<conio.h>
using namespace std;

#define Escape     27
#define Enter      13
#define UpArrow    72
#define DownArrow  80
#define LeftArrow  75
#define RightArrow 77

//#define SHOOTER_IF
//#define SHOOTER

void main()
{
	setlocale(LC_ALL, "");
	

#ifdef SHOOTER_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else if (key == Escape)
		{
			cout << "Выход" << endl;
		}
		else
		{
			if (key != -32)cout << "Error" << endl;
		}

	} while (key != Escape);
#endif // SHOOTER_IF

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w':    cout << "Вперед" << endl; break;

		case DownArrow:
		case 's':
		case 'S':    cout << "Назад" << endl; break;

		case LeftArrow:
		case 'A':
		case 'a':    cout << "Влево" << endl; break;

		case RightArrow:
		case 'D':;
		case 'd':    cout << "Вправо" << endl; break;

		case ' ':    cout << "Прыжок" << endl; break;
		case  Enter: cout << "Огонь" << endl; break;
		case Escape:
		case -32:break;
		default:     cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER

	int number;
	cout << "Введите введите шестизначный номер билета:"; cin >> number;
	int sum_1 = 0;
	int sum_2 = 0;

	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
	if (sum_1 == sum_2)
		cout << "Вы счастливчик! ;-)" << endl;
	else
		cout << "Увы, в этот раз удача не на вашей стороне ;-(" << endl;

}