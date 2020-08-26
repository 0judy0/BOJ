#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int change = 0;

char Change(char bef, char aft)
{
	if (bef != aft)
	{
		change++;
	}

	return 0;
}

int main()
{
	int num;
	int right = 0, left = 0, a = 0;
	string bracket;
	string answer;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> bracket;
		if (bracket[0] == ')')
		{
			answer = "NO";
		}

		else if (bracket[0] == '(')
		{
			right++;
			for (int j = 1; j < bracket.length(); j++)
			{
				if (bracket[j] == '(')
				{
					if (right < left)
						a++;
					else
						right++;
				}

				else if (bracket[j] == ')')
				{
					left++;
				}

				Change(bracket[j - 1], bracket[j]);
			}

			if (a == 0 && right == left && change % 2 == 1)
			{
				answer = "YES";
			}

			else
			{
				answer = "NO";
			}

			right = 0;
			left = 0;
			change = 0;
			a = 0;
		}
		cout << answer << endl;
	}

	return 0;
}