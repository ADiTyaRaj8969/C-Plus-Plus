#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(const vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
int main() {
    vector<int> arr1 = {2, 3, -8, 7, -1, 2, 3};
    vector<int> arr2 = {-2, -4};
    vector<int> arr3 = {5, 4, 1, 7, 8};
    cout << "Maximum subarray sum (example 1): " << maxSubarraySum(arr1) << endl;
    cout << "Maximum subarray sum (example 2): " << maxSubarraySum(arr2) << endl;
    cout << "Maximum subarray sum (example 3): " << maxSubarraySum(arr3) << endl;
    return 0;
}
