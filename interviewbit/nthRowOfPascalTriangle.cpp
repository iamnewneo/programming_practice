#include <iostream>
#include <vector>

// Ques: get nth row of a pascal triangle.
using namespace std;
vector<int> getRow(int A);
int main(){
	int row=5;
	vector <int> res = getRow(row);
	for (int i=0; i<res.size(); i++){
		cout<<res[i]<<endl;
	}
	return 0;
}

vector<int> getRow(int A) {
    if (A==0){
        vector <int> result(A);
    	result.push_back(1);
    	return result;
	}
	vector <int> result(A+1);
	result[0]=1;
	int height = A;
    for (int i=1; i<height+1; i++){
        result[i] = result[i-1]*(height+1-i)/(i);
    }
    return result;
}
