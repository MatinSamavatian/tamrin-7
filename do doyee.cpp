#include<iostream>
#include<iostream>
#include<math.h>

using namespace std;



void searching(int a[], int, int, int);
int main()
{
	int s[10], a;
	cout << "please enter the ordered list:"<<endl;
	for (int i = 0; i < 10; i++) {
		cin >> s[i];
	}
	cout << "enter the needed number:"<<endl;
	cin >> a;
	searching(s, 9, 0, a);


	system("pause<0");
}

void searching(int a[], int max, int min, int x) 
{
	if (min == max) {
		if (a[max] != x) {
			cout << "not found!\n";
		}
		else {
			cout << "found!\n";
		}
		return;
	}
	else {
		int avg = (max + min) / 2;
		if (x == a[avg]) {
			cout << "found!" << endl;
			return;
		}
		else if (x > a[avg]) {
			min = avg + 1;
			searching(a, max, min, x);
		}
		else {
			max = avg - 1;
			searching(a, max, min, x);
		}
	}
}