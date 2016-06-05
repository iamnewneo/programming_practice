#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int> &A);
int main(){
	vector <int> A = {0,0,0,0,0,0,1,2,3,4,5,9};
	vector <int> result;
	result = plusOne(A);
	for (int i=0; i<result.size(); i++){
		cout<<result[i]<<",";
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
	std::reverse(A.begin(),A.end());
	for (int i=0; i<A.size(); i++){
		if(A[i]+carry>=10){
			A[i]=(A[i]+carry)%10;
			result.push_back(A[i]);
			//result.insert(result.begin(),A[i]);
			carry=1;
			if(A.back() == 0){
				result.push_back(1);
				//result.insert(result.begin(),carry);
			}
		}
		else{
			A[i]+=carry;
			result.push_back(A[i]);
			//result.insert(result.begin(),A[i]);
			carry=0;
		}
	}
	std::reverse(result.begin(),result.end());
	return result;
}
