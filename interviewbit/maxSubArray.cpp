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
	int startIndex=0, endIndex=0;
	int currStartIndex=0;
	//int size = sizeof(A)/sizeof(*A);
	int size = 10;
	for (int i=0; i<10; i++) {
		if (sum + A[i] > 0)	{
			sum+=A[i];
			endIndex=i;
			startIndex=currStartIndex;
			} else {
			currStartIndex = i+1;
			sum=0;
		}
		ans = max(ans,sum);
	}
	cout<<startIndex<<","<<endIndex<<endl;
	return ans;
}


vector < int > max_subarray(vector < int > & A) {
    int len = A.size();
    long long max_sum = 0;
    long long cur_sum = 0;
    int startmax = -1;
    int endmax = -1;
    int start = 0;
    int end = 0;

    while (end < len) {
        if (A[end] >= 0) {
            cur_sum += (long long) A[end];
            if (cur_sum > max_sum) {
                max_sum = cur_sum;
                startmax = start;
                endmax = end + 1;
            } else if (cur_sum == max_sum) {
                if (end + 1 - start > endmax - startmax) {
                    startmax = start;
                    endmax = end + 1;
                }
            }
        } else {
            start = end + 1;
            cur_sum = 0;
        }

        end++;
    }

    vector < int > ans;
    ans.clear();

    if (startmax == -1 || endmax == -1)
        return ans;

    for (int i = startmax; i < endmax; ++i)
        ans.push_back(A[i]);
    return ans;

}
