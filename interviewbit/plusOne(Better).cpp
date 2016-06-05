#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int> &A);
int main(){
	vector <int> A = {0,0,0,0,0,0};
	vector <int> result;
	result = plusOne(A);
	for (int i=0; i<result.size(); i++){
		cout<<result[i]<<endl;
	}
	return 0;
}
vector <int> plusOne(vector<int> &A) {
	int carry =1;
	vector <int> result;
	//cout<<A.size()<<endl;
	//cout<<A.back()<<A.size()<<A[A.size()-1]<<endl;
	int size = A.size();
	for (int i=0; i<size; i++){
		if(A.front()==0 && A.size()>1){
			A.erase(A.begin());
		} 
		else if(A.front()>0 || A.size() ==1){
			break;
		}
	}
//	for (int i=0; i<A.size(); i++){
//		cout<<A[i]<<",";
//	}
//	cout<<A.size()<<endl;
	for (int i=A.size()-1; i>=0; i--){
		if(A[i]+carry>=10){
			A[i]=(A[i]+carry)%10;
			result.insert(result.begin(),A[i]);
			carry=1;
			if(A.front() == 0){
				result.insert(result.begin(),carry);
			}
		}
		else{
			A[i]+=carry;
			result.insert(result.begin(),A[i]);
			carry=0;
			//break;
		}
	}
	return result;
}
