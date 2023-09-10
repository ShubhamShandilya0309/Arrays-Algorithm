#include <bits/stdc++.h>
using namespace std;
vector<int> Intersection(vector<int> &a, vector<int> &b){
    vector<int>ans;
    int n=a.size(),m=b.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            while(a[i]<b[j]){
                i++;
            }
        }
        else if(a[i]>b[j]){
            while(a[i]>b[j]){
                j++;
            }
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    vector<int>a={1,1,2,3,4,5,6};
    vector<int>b={2,4,6,8,10};
    vector<int> c;
    c=Intersection(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 0;
}