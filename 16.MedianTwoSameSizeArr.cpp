#include<bits/stdc++.h>
using namespace std;
int findMedian(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 == 1) {
        return arr[n / 2];
    } else {
        int mid1 = arr[(n / 2) - 1];
        int mid2 = arr[n / 2];
        return floor((mid1 + mid2) / 2);
    }
}
int main() {
    vector<int> arr1 = {90, 100, 78, 89, 67};
    vector<int> arr2 = {56, 67, 30, 79};
    cout << "Median of arr1: " << findMedian(arr1) << endl; 
    cout << "Median of arr2: " << findMedian(arr2) << endl; 
    return 0;
}
