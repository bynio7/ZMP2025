#include <iostream>

using namespace std;

int NWD(int k, int n) {
	for(int i=2; i<=n; i++){
		if(k%i==0 && n%i==0){
			return i;
		}
	}
	return 1;
}

int Euler(int n) {
	int moc=0;
        for(int i=1; i<=n; i++){
                if(NWD(i, n)==1) {
                        moc++;
                }
        }
	return moc;
}

int main() {
	int n;
	cin >> n;
	cout << Euler(n) << endl;
	return 0;
}
