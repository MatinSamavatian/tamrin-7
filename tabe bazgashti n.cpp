#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;


int fib(int, int, int, int, int);

int main()
{
	int n;
		cout << "enter the needed sentence in the sequence:" << endl;
		cin >> n;
		n = fib(n, 2, 1, 1, 1);
		cout << n << endl;

		system("pause<0");
}

int fib(int a, int b, int x, int y, int z)
{
	if ((b == 0) || (b == 1) || (a == 1) || (a == 0)) {
		return 1;
	}
	else {
		z = x + y;
		y = x;
		x = z;
		if (a == b) {
			return z;
		}
		fib(a, b + 1, x, y, z);
	}
}