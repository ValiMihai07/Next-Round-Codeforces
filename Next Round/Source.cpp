#include <iostream>
using namespace std;

int main()
{
	int n;
	int k;
	int part[50];
	int num = 0;
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> part[ i ];
	}

	if ( part[k-1] > 0 )
	{
		for (int j = 0; j < n; j++)
		{
			if (part[j] >= part[k])
				num++;
		}
		cout << num;

	}
	else
		cout << 0;

	return 0;
}