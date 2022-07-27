#include <iostream>
#include <cmath>
using namespace std;

long float radius();
int main() {
	cout << "Schwarzschild radius of the object is(Nesnenin Schwarzschild yaricapi):" << radius() << " m";
}
long float radius() {
	long float m;
	cout << "Enter the mass of the object for which you want to calculate the Schwarzschild radius(Schwarzschild yaricapini hesaplamak istediginiz nesnenin kutlesini girin):" << endl;
	cin >> m;
	long float G = 6.673848 * pow(10, -11);
	long float c = 299792458;
	long float r = (2 * G * m) / (c*c);
	return r;
}
