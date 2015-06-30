#include <iostream>
using namespace std;

int main() {
	int arr[10], i;
	cout << "enter all the elements\n";
	for(i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	cout << "Here are all the elements in the array\n";
	for(i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	return 0;
}