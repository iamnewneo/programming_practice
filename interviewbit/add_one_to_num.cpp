#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int> &A);
int main() {
	vector<int> A = {0};
	vector<int> result;
	result = plusOne(A);
	//cout << result;
	for (int i=0; i< result.size(); i++){
		cout<<result[i]<<endl;
	}
	return 0;
}

vector<int> plusOne(vector<int> &A) {
    int value=0;
    vector <int> result;
    //vector <int> new_result(A.size()+1);
	int size = A.size();
	int multiplier=pow(10,size-1);
	int rem=0;
	int temp;
	for(int i=0; i<size;i++){
		value+=A[i]*multiplier;
		//cout<<value<<endl;
		multiplier/=10;
	}
	value+=1;
	cout<<value<<endl;
	while(value!=0){
	    rem = value%10;
	    result.push_back(rem);
	    //cout<<rem<<endl;
	    value/=10;
	}
//	for (int i=0; i< result.size(); i++){
//		cout<<result[i]<<endl;
//	}
	std::reverse(result.begin(), result.end());
	return result;
}

