#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#define MAXSIZE 100000
using namespace std;

int value[MAXSIZE];

int main()
{
	int num;
	int value_num;
	int j = 0;
	int plus = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> value_num;

		if (value_num == 0)
		{
			j--;
			plus -= value[j];
		}

		else if (value_num != 0)
		{
			value[j] = value_num;
			plus += value_num;
			j++;
		}
	}

	cout << plus << endl;

	return 0;
}