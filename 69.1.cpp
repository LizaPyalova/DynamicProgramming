#include <iostream>

using namespace std;

int Func(int* arr, int n) {
	int sum = arr[0];
	for (int i = 0; i<n;) {
		if (i + 2 == n) {
			sum += arr[i + 2];
			return sum;
		}
		if (i + 1 == n) {
			sum += arr[i + 1];
			return sum;
		}
		if (i + 3 < n && i + 2 < n) {
			if (arr[i + 2] > arr[i + 3]) {
				if (i + 3 != n) {
					sum += arr[i + 2];
					i = i + 2;
				}
				else {
					sum += arr[i + 3];
					i = i + 3;
				}
		}
			else {
				if(i+4)
				sum += arr[i + 2];
				i = i + 2;
			}
		}
	}

}


int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];


}