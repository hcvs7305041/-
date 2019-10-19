
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 0 , xx[82] = { 0 };
	int k = 0 ,i = 0, j = 0;
	cin >> n;
	for (i = 2; i <= 9; i++) 
	{
		for (j = 1; j <= 9; j++) 
		{
			k = i*j;
			if (k / 10 == n || k % 10 == n)
			{
				xx[k] = 1;
			}
		}
	}
	for (i = 1; i <= 81; i++) 
	{
		if (xx[i] == 1)
		{
			cout << i << "  ";
		}
	}
	system("PAUSE");
	return 0;
}


