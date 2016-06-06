#include <iostream>
#include <vector>

//Ques: You are given a read only array of n integers from 1 to n.
//Each integer appears exactly once except A which appears twice and B which is missing.
//Return A and B.


using namespace std;
vector<int> repeatedNumber(const vector<int> &A);
int main(){
	int n;
	cout<< "Enter Number of elements and then star entering numbers"<<endl;
	cin>>n;
	vector <int> A;
	int value;
	for(int i=0; i<n;i++){
		cin>>value;
		A.push_back(value);
	}
	vector <int> result = repeatedNumber(A);
	for (int i=0; i<result.size(); i++)
		cout<<result[i]<<endl;
	return 0;
}

vector<int> repeatedNumber(const vector<int> &A) {
    vector <int> result;
    long int sumSquare = 0;
    long int sum=0;
    long int size = A.size();
    for (long int i=0;i <size; i++){
       sum+=A[i];
       sumSquare += A[i]*A[i];
    }
    long int naturalNumSum = size*(size+1)/2;
    long int naturalNumSum2 = size*(size+1)*(2*size+1)/6;
    long int a,b;
    long int z = (sumSquare - naturalNumSum2)/(sum - naturalNumSum);
    long int x = sum - naturalNumSum;
    a = (z + x) /2;
    b = z - a;
    result.push_back(a);
    result.push_back(b);
    return result;
}
