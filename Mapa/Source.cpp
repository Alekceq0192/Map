#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

void two(int b, int a)
{
	int o = 0;
	int d = 0;
	if (b < 0)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		if (a > 0)
		{

			SetConsoleTextAttribute(h, 4);
			cout << "!Направо" << endl;
			cout << "Направление:Юг" << endl << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 4);
			cout << "!Налево" << endl;
			cout << "Направление:Юг" << endl << endl;
		}
		while (true)
		{
			Sleep(1500);
			if (d == b)
			{
				break;
			}
			if (b < 0)
			{
				o++;
				d--;
			}
			cout << o << ".Вперёд" << endl;
			cout << "Направление:Юг" << endl << endl;
		}
	}

	if (b > 0)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 3);

		if (a == 0)
		{
			return;
		}

		if (a < 0)
		{
			SetConsoleTextAttribute(h, 3);
			cout << "!Направо" << endl;
			cout << "Направление:Север" << endl << endl;
		}
		else
		{
			SetConsoleTextAttribute(h, 3);
			cout << "!Налево" << endl;
			cout << "Направление:Север" << endl << endl;
		}

		while (true)
		{
			Sleep(1500);
			if (d == b)
			{
				break;
			}
			if (b > 0)
			{
				o++;
				d++;
			}
			cout << o << ".Вперёд" << endl;
			cout << "Направление:Север" << endl << endl;
		}
	}
}

void one(int a)
{
	int o = 0;
	int c = 0;

	if (a == 0)
	{
		return;
	}

	if (a > 0)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 2);
		cout << "Сделать:" << endl;
		cout << "!Направо" << endl;

		while (true)
		{
			cout << "Направление:Восток" << endl << endl;
			Sleep(1500);

			if (c == a)
			{
				break;
			}
			if (a > 0)
			{
				o++;
				c++;
			}
			cout << o << ".Вперёд" << endl;
		}

	}

	if (a < 0)
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 6);

		cout << "Сделать:" << endl;
		cout << "!Налево" << endl;

		while (true)
		{
			cout << "Направление:Запад" << endl << endl;
			Sleep(1500);
			if (c == a)
			{
				break;
			}
			if (a < 0)
			{
				o++;
				c--;
			}
			cout << o << ".Вперёд" << endl;
		}
	}
}

void start(int a, int b)
{
	int sum;

	system("cls");
	Sleep(1500);
	cout << "Начальные координаты: (0,0)-Север" << endl;
	Sleep(1500);
	cout << "Цель: " << "(" << a << "," << b << ")" << endl;
	Sleep(1500);

	if (a > 0 || a < 0)
	{
		cout << endl;
		one(a);
	}
	if (b > 0 || b < 0)
	{
		two(b, a);
	}

	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 8);

	sum = a + b;
	cout << "Минимальное количество указаний: " << sum << endl;
	cout << "(Не считая повороты.)" << endl;

	Sleep(2000);
	system("Конец.mp4");
}

void coord()
{
	int a;
	int b;
	cout << "Добро пожаловать!" << endl;
	cout << "Задайте координаты:" << endl << endl;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;

	start(a, b);
}

void GG()
{
	int a;
	int i = 0;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	Sleep(2000);
	SetConsoleTextAttribute(h, 2);
	cout << "Восток - Зелёный. ";
	SetConsoleTextAttribute(h, 6);
	cout << "Запад - Жёлтый. ";
	SetConsoleTextAttribute(h, 3);
	cout << "Север - Голубой. ";
	SetConsoleTextAttribute(h, 4);
	cout << "Юг - Красный. " << endl;

	SetConsoleTextAttribute(h, 8);
	ifstream file("Примечание!.txt");
	string s;
	while (!file.eof())
	{
		s = " ";
		getline(file, s);
		Sleep(500);
		cout << s << endl;
	}
	cout << "Для продолжения введите любое число :";
	cin >> a;
	system("cls");

}


int main()
{
	setlocale(LC_ALL, "RUS");
	GG();
	coord();
}