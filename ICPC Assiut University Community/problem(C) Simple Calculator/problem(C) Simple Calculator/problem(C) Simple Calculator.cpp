#include <iostream>


using namespace std;
int main() {

	long long x = 0, y = 0;
	cin >> x >> y;

	int add = x + y;
	long long multiply = x * y;
	int subtract = x - y;

	cout << x << " + " << y << " = " << add << endl;
	cout << x << " * " << y << " = " << multiply << endl;
	cout << x << " - " << y << " = " << subtract << endl;

	return 0;
}