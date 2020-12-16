#include <iostream>
using namespace std;

int NWD(int a, int b);

#pragma region  FIRST_SOLUTION
int main()
{
	int t; //Liczba testow
	int a = 0, b = 0; //Liczby potrzebne do obliczenia najwiekszego wspolnego dzielnika
	
	cout << "Podaj ilosc testow: ";
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << NWD(a, b);
	}
	
	return 0;
}

int NWD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	return a;
}
#pragma endregion

#pragma region SECOND_SOLUTION
int main()
{
	int t; //Liczba testow
	int a = 0, b = 0; //Liczby potrzebne do obliczenia najwiekszego wspolnego dzielnika

	cout << "Podaj ilosc testow: ";
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> a >> b;
		cout << NWD(a, b);
	}

	return 0;
}

int NWD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	return a;
}
#pragma endregion
