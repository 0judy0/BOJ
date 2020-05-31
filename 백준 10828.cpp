#include <iostream>
#include <string>
#define MAXSIZE 10000
using namespace std;

int all_value[MAXSIZE];
int push_array[MAXSIZE];
string instruction[MAXSIZE];
int i = -1;

int push_X(int n1)
{
	i++;
	all_value[i] = n1;
	return 0;
}

int pop()
{
	if (i == -1)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << all_value[i] << endl;
		i--;
		if (i <= -1)
		{
			i = -1;
		}
	}
	return 0;
}

int size()
{
	cout << i + 1 << endl;
	return 0;
}

int empty()
{
	if (i == -1)
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
	return 0;
}

int top()
{
	if (i == -1)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << all_value[i] << endl;
	}
	return 0;
}

int main()
{
	int re_num;
	//int push_num;


	cin >> re_num;

	for (int i = 0; i < re_num; i++)
	{
		cin >> instruction[i];
		if (instruction[i].compare("push") == 0)
		{
			cin >> push_array[i];
		}
	}

	for (int j = 0; j < re_num; j++)
	{
		if (instruction[j].compare("push") == 0)
		{
			//cin >> push_num;
			push_X(push_array[j]);
		}

		else if (instruction[j].compare("pop") == 0)
		{
			pop();
		}

		else if (instruction[j].compare("size") == 0)
		{
			size();
		}

		else if (instruction[j].compare("empty") == 0)
		{
			empty();
		}

		else if (instruction[j].compare("top") == 0)
		{
			top();
		}
	}
	return 0;
}