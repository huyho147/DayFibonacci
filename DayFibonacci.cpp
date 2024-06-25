#include <iostream>
using namespace std;
int main()
{
	cout << "Day Fibonacci!!!\n";
	int x1 = 0, x2 = 1;
	int i = 0;
	while (i<=20)
	{	
		cout << x1 << "|";
		int tong = x1 + x2;
		x1 = x2;
		x2 = tong;
		i++;
	}
}