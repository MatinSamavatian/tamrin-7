#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;


void fib(int, int, int, int);

int main()
{

	cout << "1" << endl << "1" << endl;
	fib(2, 1, 1, 1);


	system("pause>0");
}

void fib(int s, int x, int y, int z)
{
	z = x + y;
	y = x;
	x = z;
	if (z > 1000)
	{

		return;


	}
	cout << z << endl;
	fib(s + 1, x, y, z);


}