#include <iostream>
using namespace std;

int main()
{
	double x;
	cin >> x;
	if (x < 0) {
		cout << "f(x) = 0" << endl;
	}
	else if ((x >= 0 && x < 1) || (x >= 2 && x < 3)) {
		cout << "f(x) = 1" << endl;
	}
	else if ((x >= 1 && x < 2) || (x >= 3 && x < 4)) {
		cout << "f(x) = -1" << endl;
	}
	
	return 0;
}