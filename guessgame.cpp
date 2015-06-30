#include <iostream>
#include <stdlib.h> /* standard library for all mathematical functions in c & c++ */

using namespace std;

int main() {
	srand(time(NULL));
	int num = rand() % 10, trycount = 0, guess = -1;
	while(trycount < 8 && num != guess) {
		cout << "Please enter a guess\n";
		cin >> guess;
		trycount++;
	}
	if(num == guess) {
		cout << "You Failed. Game Over.\n";
	} else {
		cout << "Great dude.\n";
	}

	return 0;
}