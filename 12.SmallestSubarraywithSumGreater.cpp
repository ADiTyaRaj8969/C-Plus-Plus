#include<bits/stdc++.h>
using namespace std;
int smallestSubarrayWithSum(vector<int>& arr, int x) {
    int n = arr.size();
    int minLength = INT_MAX;
    int currentSum = 0;
    int start = 0;
    for (int end = 0; end < n; end++) {
        currentSum += arr[end];
        while (currentSum > x) {
            minLength = min(minLength, end - start + 1);
            currentSum -= arr[start];
            start++;
        }
    }
    return (minLength == INT_MAX) ? 0 : minLength;
}
int main() {
    vector<int> arr1 = {1, 4, 45, 6, 0, 19};
    int x1 = 51;
    cout << "Smallest subarray length: " << smallestSubarrayWithSum(arr1, x1) << endl;
    vector<int> arr2 = {1, 10, 5, 2, 7};
    int x2 = 100;
    cout << "Smallest subarray length: " << smallestSubarrayWithSum(arr2, x2) << endl;
    return 0;
}
