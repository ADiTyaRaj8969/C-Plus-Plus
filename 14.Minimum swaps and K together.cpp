#include<bits/stdc++.h>
using namespace std;
int minSwapsToBringTogether(vector<int>& arr, int k) {
    int n = arr.size();
    int count_k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            count_k++;
        }
    }
    int current_count = 0;
    for (int i = 0; i < count_k; i++) {
        if (arr[i] <= k) {
            current_count++;
        }
    }
    int max_count = current_count;
    for (int i = count_k; i < n; i++) {
        if (arr[i] <= k) {
            current_count++;
        }
        if (arr[i - count_k] <= k) {
            current_count--;
        }
        max_count = max(max_count, current_count);
    }
    return count_k - max_count;
}
int main() {
    vector<int> arr = {2, 1, 5, 6, 3};
    int k = 3;
    cout << "Minimum swaps required: " << minSwapsToBringTogether(arr, k) << endl;
    return 0;
}
