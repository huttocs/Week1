
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;


int main() {
	// To make a seed we use srand(). 
	// Only do this once in the entire program.  It is 
	// usually put in main in the first few lines

	// It's common to make a seed variable
	unsigned seed;
	seed = time(NULL);
	srand(seed);

	// To make a random number is rand()
	// Use modulus to change the range of possible numbers

	string choice;
	// tolower(ch) and toupper(ch) will convert a char to either uppercase
	// or lowercase
	
	// loop to convert to lowercase
	//for (int i = 0; i < choice.length(); i++) {
	//	choice[i] = tolower(choice[i]);
	//}

	cout << "Gimme a numba " << endl;
	getline(cin, choice);
	std::stringstream stuff(choice);
	int num = 0;
	stuff >> num;
	
	cout << num*2 << endl;

	//cout << choice << endl;
	/*
	for (int i = 0; i < 10; i++) {
	
		cout << rand()%10 + 1 << endl;
	
	}
	*/


	

}