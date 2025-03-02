#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void KthMax(vector<int>&arr,int k){
        sort(arr.begin(),arr.end());
        int n  = arr.size();
        cout<<k<<" th maximum number in an Array:-"<<arr[n-k]<<endl;
    }
    void KthMin(vector<int>&arr,int k){
        sort(arr.begin(),arr.end());
        cout<<k<<" th minimum number in an Array:-"<<arr[k-1]<<endl;
    }
};
int main(){
    int n,k;
    cout<<"Enter the Size of Array:- ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cout<<"Enter the element on index "<<i<<" :-";
        cin>>arr[i];
    }
    cout<<"Enter the Kth number:- ";
    cin>>k;
    Solution obj;
    obj.KthMax(arr,k);
    obj.KthMin(arr,k);
    return 0 ;
}