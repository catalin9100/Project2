#include <iostream>
#include <math.h>

using namespace std;

//Let x be a vector with n integer elements.
//Form another vector y with the even elements of the given vector and display the two vectors.
void main() {
	int x[10], y[10], n, i, k = 0;
	cout << "Dimension: ";
	cin >> n;
	cout << "Elements of the vector: " << endl;
	for (i = 1; i <= n; i++) {
		cout << "x[" << i << "]=";
		cin >> x[i];
	}
	cout << "New vector: " << endl;
	for (i = 1; i <= n; i++)
		if (x[i] % 2 == 0) {
			k++;
			y[k] = x[i];
			cout << "y[" << k << "]=" << y[k] << endl;
		}
	cout << "Initial vector: " << endl;
	for (i = 1; i <= n; i++)
		cout << "x[" << i << "]=" << x[i] << endl;
}