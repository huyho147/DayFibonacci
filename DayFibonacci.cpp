#include <iostream>
using namespace std;
int main()
{
	cout << "Day Fibonacci!!!\n";
	int x1 = 1, x2 = 1;
	for(int i = 0; i < 20; i++)
	{	
		cout << x1 << "|";
		int tong = x1 + x2;
		x1 = x2;
		x2 = tong;
	}
}