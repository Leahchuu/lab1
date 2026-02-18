#include <iostream>
using namespace std;
int main () {
  int n, sumX, sumY, sumZ;
  cin >> n;
  for (int i=0; i<n; i++) {
    int x, y, z;
		cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}
	if (sumX==0 && sumY==0 && sumZ==0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
