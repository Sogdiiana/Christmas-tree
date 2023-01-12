#include <iostream>
using namespace std;
int main()
{
	int u, space, j;

	for (u = 1; u < 10; u = u + 2)
	{
		for (int i = 1; i <= u; i = i++)
		{
			cout << "      ";
			for (space = 1; space <= (10 - i); space++)
			{
				cout << " ";
			}
			for (j = 1; j <= i; j++)
			{
				cout << "* ";
			}
			cout << endl;

		}
	}

	return 0;
}