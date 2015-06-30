#include <iostream>
#include <string>

using namespace std;

class calc {
public:
	float add(float a, float b) {
		return a + b;
	}

	float subtract(float a, float b) {
		return a - b;
	}

	float multiply(float a, float b) {
		return a*b;
	}

	float divide(float a, float b) {
		return a/b;
	}
};

int main() {
	calc object;
	string str;
	float x, y;
	cout << "Enter the operation you want\n";
	cin >> str;
	cout << "Enter the operands\n";
	cin >> x;
	cin >> y;
	if(str == "add") {
		cout << object.add(x,y) << endl;
	}else if(str == "subtract") {
		cout << object.subtract(x,y) << endl;
	}else if(str == "multiply") {
		cout << object.multiply(x,y) << endl;
	}else if(str == "divide") {
		cout << object.divide(x,y) << endl;
	}else {
		cout << "Wrong Operation" << endl;
	}

	return 0;
}