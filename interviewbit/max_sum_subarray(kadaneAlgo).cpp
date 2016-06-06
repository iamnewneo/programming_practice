#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int max_sum_subarray(int A[]);
int main(){
	int A[] = {1,-3,2,-5,7,6,-1,-4,11,-23};
	int result = max_sum_subarray(A);
	cout << result;
	return 0;
}
int max_sum_subarray(int A[]){
	int sum=0, ans=0;
	int size = sizeof(A)/sizeof(*A);
	//cout<<sizeof(A)<<","<<sizeof(*A)<<","<<size<<endl;
	for (int i=0; i<10; i++) {
		if (sum + A[i] > 0)		
			sum+=A[i];	
		else
			sum=0;
		ans = max(ans,sum);
	}
	return ans;
}
