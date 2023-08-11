#include <bits/stdc++.h>
using namespace std;
//DNF Algorihtm : Dutch National Flag
int main() {
    vector<int>arr={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=arr.size();
    int low=0;
    int high=n-1;
    int mid=low;//could be taken as 0 also.
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }//It takes all 0's behind low index.
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }//It takes all 2's after high index.
        else{
            mid++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}