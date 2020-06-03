#include <iostream>
#define MAXSIZE 1000000
using namespace std;

int innum[MAXSIZE];

int main()
{
	int count, rmv;
	int max_num = -1000001;
	int min_num = 1000001;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> innum[i];
	}
	
	for (int i = 0; i < count; i++)
	{
		if (max_num < innum[i])
		{
			max_num = innum[i];
		}
	}

	for (int i = 0; i < count; i++)
	{
		if (min_num > innum[i])
		{
			min_num = innum[i];
		}
	}
	cout << min_num << " " << max_num << endl;
	return 0;
}