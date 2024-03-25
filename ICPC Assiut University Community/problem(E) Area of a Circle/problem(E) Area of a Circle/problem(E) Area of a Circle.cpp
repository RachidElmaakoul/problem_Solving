#include <iostream>
#include <iomanip>


using namespace std;
int main() {

	double R;
	cin >> R;
	double  IP = 3.141592653;
	double Area = IP * (R * R);

	cout << fixed << setprecision(9) << Area;

	return 0;
}