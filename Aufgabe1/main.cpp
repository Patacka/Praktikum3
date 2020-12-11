#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int zahl1, zahl2, zahl3, zahl4, zahl5, zahl6;


	cout << "Bitte 6 ganze Zahlen zwichen 1 und 79 eingeben: ";
	cin >> zahl1 >> zahl2 >> zahl3 >> zahl4 >> zahl5 >> zahl6;

	if (zahl1 < 0 || zahl1 > 79)
	{
		cout << "Unguelitge 1.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl1; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;

	if (zahl2 < 0 || zahl2 > 79)
	{
		cout << "Unguelitge 2.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl2; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;

	if (zahl3 < 0 || zahl3 > 79)
	{
		cout << "Unguelitge 3.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl3; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;

	if (zahl4 < 0 || zahl4 > 79)
	{
		cout << "Unguelitge 4.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl4; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;

	if (zahl5 < 0 || zahl5 > 79)
	{
		cout << "Unguelitge 5.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl5; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;

	if (zahl6 < 0 || zahl6 > 79)
	{
		cout << "Unguelitge 6.Zahl" << endl;
	}
	else
	{
		for (int counter{ 1 }; counter <= zahl6; ++counter)
		{
			cout << "*";
		}
	}
	cout << endl;
}