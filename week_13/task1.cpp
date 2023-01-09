#include <iostream>
using namespace std;

int sumEven(int arr[], int size) {
	if (size == 0) {
		return 0;
	}
	if (arr[size - 1] % 2 == 0) {
		return arr[size - 1] + sumEven(arr, size - 1);
	}
	else {
		return sumEven(arr, size - 1);
	}
}

int main() {
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	cout << sumEven(arr, 6) << endl;
	return 0;
}