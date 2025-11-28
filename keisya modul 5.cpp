#include <iostream>
using namespace std;

int main() {
	int n; //jumlah baris
	cout << "Masukkan Jumlah Baris Segitiga Pascal: ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		// spasi agar berbentuk segitiga
		for (int s = 0; s < n - i; s++) {
			cout << " ";
		}

		int val = 1;
		for (int j = 0; j <= i; j++) {
			cout << val << " ";

			// rumus pascal
			val = val * (i - j) / (j + 1);
		}
		cout << endl;
	}

	return 0;
}