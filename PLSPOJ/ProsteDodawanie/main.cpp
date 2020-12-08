#include <iostream>
using namespace std;

int main()
{
	int t = 0; //Number of tests
	int sumNum = 0; //How many numbers will be sum.
	int nums = 0; //Numbers which will be sum.
	int sum = 0; //Sum of numbers

	//How many tests will be input
	cin >> t; //2 testy

	for (int i = 0; i < t; i++)
	{
		cin >> sumNum; //5 liczb do zsumowania
		for (int j = 0; j < sumNum; j++)
		{
			cin >> nums; //Liczby podane przez uzytkownika
			sum = sum + nums;
		}
		cout << sum << endl;
		sum = 0;
	}

	return 0;
}