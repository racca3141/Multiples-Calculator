// Emerson Racca
// September 29, 2021
// Exam 1 - Multiples Calculator

/*
Allow the user to type in an integer and then output to the screen twelve multiples.  For example, if the user types in 3 the output should look like this:

For a = 3
The multiples are:  3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36
a. Be sure to use an appropriate looping structure to do this.
b. Implement the run again routine so the user can type in another integer and get new results.
c.  Turn in a single source ( .cpp ) file.
*/

#include <iostream>
using namespace std;

void dispMultiples(int v);

int main(void) {
	int a;
	char runAgain;

	cout << "Multiples Calculator\n";
	cout << "Type in an integer (a) and this app outputs twelve multiples.\n\n";

	do {
		cout << "Enter an integer: ";
		do {
			cin >> a;
			if (a == 0) // Not sure if this was required but 0 doesn't make sense as a valid entry.
				cout << "Enter an integer other than 0: ";
		} while (a == 0);

		cout << "\nFor a = " << a << endl;
		cout << "The multiples are:  ";
		
		dispMultiples(a); // Not sure if a function was also a requirement.

		cout << endl << endl << endl;

		cout << "Do you want to go again (y or n)? ";
		cin >> runAgain;
		cout << endl;
	
	} while (runAgain == 'y');
	
	return 0;
};

void dispMultiples(int v) {
	for (int i = 1; i <= 12; i++) {
		cout << i * v;
		if (i != 12)
			cout << ", ";
	}
}