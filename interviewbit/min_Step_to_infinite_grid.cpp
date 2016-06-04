#include <iostream>
#include <vector>
using namespace std;
int coverPoints(vector<int> &X, vector<int> &Y);
int main(){
	vector<int> A= {4, 8, -7, -5, -13, 9, -7, 8 };
	vector<int> B= { 4, -15, -10, -3, -13, 12, 8, -8};
	int result;
	result =  coverPoints(A,B);
	cout<<result;
	return 0;
}
int coverPoints(vector<int> &X, vector<int> &Y) {
	int a,b;
	int step=0;
	for(int i=0; i<X.size(); i++){
		if(i+1 < X.size()){
		a=X[i+1];
		b=Y[i+1];
		}
		else{
			return step;
		}
		while(X[i] !=a || Y[i] != b){
			int dist_x = a - X[i];
			int dist_y = b - Y[i];
			if (dist_x > 0 && dist_y >0){
				X[i]++;
				Y[i]++;
				step++;
			}
			else if (dist_x < 0 && dist_y <0) {
				X[i]--;
				Y[i]--;
				step++;
			}
			else if (dist_x > 0 && dist_y <0) {
				X[i]++;
				Y[i]--;
				step++;
			}
			else if (dist_x < 0 && dist_y >0) {
				X[i]--;
				Y[i]++;
				step++;
			}
			else if (dist_x < 0 && dist_y==0) {
				X[i]--;
				step++;
			}
			else if (dist_x == 0 && dist_y < 0) {
				Y[i]--;
				step++;
			}
			else if (dist_x > 0 && dist_y == 0) {
				X[i]++;
				step++;
			}
			else if (dist_x == 0 && dist_y > 0) {
				Y[i]++;
				step++;
			}
		}
	}
	return step;
}
