#include <iostream>
using namespace std;

class programming {
private:
	int variable;
public:
	void input_value() {
		cout << "give some input\n";
		cin >> variable;
	}

	void output_value() {
		cout << "variable entered is " << variable << "\n";
	}
};

int main() {
	programming object;
	object.input_value();
	object.output_value();

	return 0;
}
