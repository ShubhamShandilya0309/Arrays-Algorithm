#include <iostream>
using namespace std;
int mooreVotingAlgo(int arr[],int n){
    int el=arr[0],cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=arr[i];
            cnt=1;
        }
        else if(arr[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
    return (cnt1>n/2) ? el : -1;
}
int main() {
    int arr[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int majorityElement=mooreVotingAlgo(arr,16);
    cout<<majorityElement<<" comes more then n/2 times in the array."<<endl;
    return 0;
}