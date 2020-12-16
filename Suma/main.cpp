#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num = 0;
	int current = 0;

	while (cin >> num)
	{
		current += num;
		cout << current << endl;
	}

	return 0;
}