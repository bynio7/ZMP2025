#include <iostream>
#include <cmath>

using namespace std;

int zera(int n) {
	int liczba_zer = 0;
	int k;
	for(int i=1; i<=n; i++) {
		if(pow(5, i)>n) {
			k = i - 1;
		}
	}

	for(int i=1; i<=k; i++) {
		liczba_zer += n/pow(5, i);
	}
	return liczba_zer;
}

int main() {
	int n;
	cin >> n;
	cout << zera(n) << endl;
	return 0;
}
