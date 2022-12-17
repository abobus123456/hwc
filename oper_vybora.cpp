#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cin >> x;
	if (x >= 5 && x <= 20) {
		cout << "Мы нашли " << x << " грибов" << endl;
	}
	else if (x % 10 == 1) {
		cout << "Мы нашли " << x << " гриб" << endl;
	}
	else if (x % 10 >= 2 && x % 10 <= 4) {
		cout << "Мы нашли " << x << " грибa" << endl;
	}
	else {
		cout << "Мы нашли " << x << " грибов" << endl;
	}
	
	return 0;
}