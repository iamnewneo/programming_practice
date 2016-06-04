#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<int> spiralOrder(const vector<vector<int> > &A);
int main(){
	std::vector<std::vector<int> > A ( 1, std::vector< int >( 1,1 ) );
	vector<int> result;
	result = spiralOrder(A);
	for(int j=0;j<result.size();j++)
		cout << result[j]<<endl;
	return 0;
	
}
vector<int> spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
    int T=0, L=0;
    int B=A.size() -1 , R = A[0].size() -1 ;
    int dir =0;
    int i;
    while(T<=B && L<=R){
        if(dir == 0){
            for (i=L; i<= R; i++){
            	//cout << A[T][i]<<endl;
                result.push_back(A[T][i]);
            }
                T++;
                dir = 1;
        }
        else if (dir == 1){
            for (i=T; i<=B; i++){
            	//cout << A[i][R]<<endl;
                result.push_back(A[i][R]);
            }
            R--;
            dir =2;
        }
        else if(dir ==2){
            for(i=R;i>=L;i--){
            	//cout <<A[B][i]<<endl;
                result.push_back(A[B][i]);
            }
            B--;
            dir =3;
        }
        else if(dir==3){
            for(i=B; i>=T;i--){
            	//cout <<A[i][L]<<endl;
                result.push_back(A[i][L]);
            }
            L++;
            dir=0;
        }
    }
	return result;

}

