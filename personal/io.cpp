#include <iostream>
using namespace std;

//int main() {
//	int i;
//	cout << "You better enter some value";
//	cin >> i;
//	cout << "The value you entered is " << i << endl;
//	cout << "Guess what, its square is : " << i*i <<endl;
//	return 0;
//}

// String Input
int main() {
	string quote;
	cout << "Enter a beautiful quote: " <<endl;
	getline(cin, quote);
	cout << "That was indeed a beautiful quote. "<< endl;
	return 0;
}
