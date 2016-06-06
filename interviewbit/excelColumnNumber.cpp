#include<iostream>
#include<cmath>
using namespace std;
int titleToNumber(string A);
//Ques: Convert Excel column name to column number
int main(){
	string excelCol;
	cout<<"Enter the excel column number"<<endl;
	cin>>excelCol;
	int result = titleToNumber(excelCol);
	cout<<"Column number is "<<result<<endl;
	return 0;
}

int titleToNumber(string A) {
    int sum=0;
    int len = A.length();
    for (int i=0; i<A.length(); i++){
        sum += (int(A[i]) - 64)*pow(26,len-1);
        len--;
    }
    return sum;

}
