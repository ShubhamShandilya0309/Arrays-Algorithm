#include <bits/stdc++.h>
using namespace std;
//Maximum Subarray Sum
int kedaneAlgorithm(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,sum);
        sum+=arr[i];
        if(sum<0) sum=0;
    }
    return maxi;
}
//It returns the value of maximum subarray sum
// for printing sequence
// take two variables one as start
// another as end for index and when sum =0 initialise start
// and after checking maxi initialise end. 
int main() {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int maxSum=kedaneAlgorithm(arr,8);
    cout<<maxSum<<" is the Maximum Subarray sum."<<endl;
    return 0;
}