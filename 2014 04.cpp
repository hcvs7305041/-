// ConsoleApplication1.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	int x = 1, a = 0;;
	string s;
	char i = 0, j = 0;
	cin >> s;
	a = s.length();
	for (i = 0; i < s.length() / 2; i++) 
	{
		//cout << i << endl;
		//system("PAUSE");
		if(s.at(i) != s.at((a-1)-i))
		{
			x = 0;
			break;
		}
	}
	if (x == 1) {
		cout << "迴文";
	}
	else
	{
		cout << "不是迴文";
	}
	system("PAUSE");
	return 0;
}


