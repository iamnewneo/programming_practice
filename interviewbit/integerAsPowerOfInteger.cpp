#include <iostream>
#include <cmath>
using namespace std;

// Ques: Check if an integer can be represented as in power of two integers. x = A^B
bool isPower(float x);
int main(){
	float x;
	float y;
	cout<<"Enter value which you want to check"<<endl;
	cin>>x;
	int result = isPower(x);
	cout<<result<<endl;
	return 0;
}

bool isPower(float x){
	float y;
	if(x==0||x==2) return 0;
	if(x==1) return 1;
	for (int i=2; i<=sqrt(x); i++){
		y = log(x)/log(i);
		if (ceil(y) == y){
			cout<<"Log"<<i<<"base"<<x<<endl;
			return true;
		}
	}
	return false;
}
