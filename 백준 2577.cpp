#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define MAXSIZE 9
using namespace std;

int main()
{
	int A, B, C, num, re_num;
	int value_array[MAXSIZE];
	int ten1 = 10;
	int ten2 = 1;
	int value_renum = 0;

	cin >> A >> B >> C;

	num = A * B * C;

	if (num % 10000000 == num)
		re_num = 7;
	else if (num % 100000000 == num)
		re_num = 8;
	else
		re_num = 9;

	for (int i = 0; i < re_num; i++)
	{
		value_array[i] = (num % ten1) / ten2;
		ten1 = ten1 * 10;
		ten2 = ten2 * 10;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < re_num; j++)
		{
			if (i == value_array[j])
			{
				value_renum = value_renum + 1;
			}
		}
		cout << value_renum << endl;
		value_renum = 0;
	}


	return 0;
}