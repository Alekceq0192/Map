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
			cout << "!�������" << endl;
			cout << "�����������:��" << endl << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 4);
			cout << "!������" << endl;
			cout << "�����������:��" << endl << endl;
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
			cout << o << ".�����" << endl;
			cout << "�����������:��" << endl << endl;
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
			cout << "!�������" << endl;
			cout << "�����������:�����" << endl << endl;
		}
		else
		{
			SetConsoleTextAttribute(h, 3);
			cout << "!������" << endl;
			cout << "�����������:�����" << endl << endl;
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
			cout << o << ".�����" << endl;
			cout << "�����������:�����" << endl << endl;
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
		cout << "�������:" << endl;
		cout << "!�������" << endl;

		while (true)
		{
			cout << "�����������:������" << endl << endl;
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
			cout << o << ".�����" << endl;
		}

	}

	if (a < 0)
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 6);

		cout << "�������:" << endl;
		cout << "!������" << endl;

		while (true)
		{
			cout << "�����������:�����" << endl << endl;
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
			cout << o << ".�����" << endl;
		}
	}
}

void start(int a, int b)
{
	int sum;

	system("cls");
	Sleep(1500);
	cout << "��������� ����������: (0,0)-�����" << endl;
	Sleep(1500);
	cout << "����: " << "(" << a << "," << b << ")" << endl;
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
	cout << "����������� ���������� ��������: " << sum << endl;
	cout << "(�� ������ ��������.)" << endl;

	Sleep(2000);
	system("�����.mp4");
}

void coord()
{
	int a;
	int b;
	cout << "����� ����������!" << endl;
	cout << "������� ����������:" << endl << endl;
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
	cout << "������ - ������. ";
	SetConsoleTextAttribute(h, 6);
	cout << "����� - Ƹ����. ";
	SetConsoleTextAttribute(h, 3);
	cout << "����� - �������. ";
	SetConsoleTextAttribute(h, 4);
	cout << "�� - �������. " << endl;

	SetConsoleTextAttribute(h, 8);
	ifstream file("����������!.txt");
	string s;
	while (!file.eof())
	{
		s = " ";
		getline(file, s);
		Sleep(500);
		cout << s << endl;
	}
	cout << "��� ����������� ������� ����� ����� :";
	cin >> a;
	system("cls");

}


int main()
{
	setlocale(LC_ALL, "RUS");
	GG();
	coord();
}