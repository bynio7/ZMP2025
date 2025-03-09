#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
/* flaga do boost::multiprecision jeżeli kompilacja kodu jej wymaga
   -lboost_system */

using namespace std;

int main() {
	boost::multiprecision::cpp_int x = boost::multiprecision::pow(boost::multiprecision::cpp_int(2), 70);
	int dlugosc = 1;
	cin >> x;
	cout << x << " ";
	while(x!=1){
		dlugosc++;
		if(x%2==0) {
			x = x/2;
		}
		else {
			x = 3*x + 1;
		}
		if(x!=1) {
			cout << x << " ";
		}
		else {
			cout << x;
		}
	}
	cout << ", " << dlugosc << "\n";
	return 0;
}
