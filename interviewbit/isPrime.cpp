#include <iostream>
#include <cmath>
using namespace std;

//Ques: Check a number if its prime.
int isPrime(int A);
int main(){
	int num;
	cout<<"Enter number which you want to eheck for prime: "<<endl;
	cin>>num;
	int result = isPrime(num);
	if(result == 1) cout<<"True"<<endl;
	else cout<<"False"<<endl;
	return 0;
}
int isPrime(int A) {
	int upperLimit = (int)(sqrt(A));
	if (A ==1 || A==0) return 0;
	for (int i = 2; i <= upperLimit; i++) {
		if (i < A && A % i == 0) return 0;
	}
	return 1;
}

