#include <iostream>
#include <vector>

// Ques: Print pascal triangle upto nth row
using namespace std;
vector<vector< int > >  getRow(int A);
int main(){
	int row;
	cout<<"Enter the number of rows you want: "<<endl;
	cin>>row;
	vector<vector< int > > res = getRow(row);
	cout<<"Below is the pascal triangle"<<endl;
	for (int i=0; i<res.size(); i++){
		for (int j=0; j<res[i].size(); j++)
			cout<<res[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

vector<vector< int > >  getRow(int A) {
    if (A<=0){
        vector<vector< int > > result;
        result.resize(1);
    	result[0].push_back(1);
    	return result;
	}
	vector <int> row(1);
	vector<vector< int > > result;
	row[0]=1;
    result.push_back(row);
	int height = A;
	int temp;
	for (int j=1; j< height; j++){
		A = j;
	    for (int i=1; i<A+1; i++){
		temp = row.back()*(A+1-i)/(i);
		row.push_back(temp);
	    }
	    result.push_back(row);
	    row.resize(1);
	    
	}
    return result;
}
