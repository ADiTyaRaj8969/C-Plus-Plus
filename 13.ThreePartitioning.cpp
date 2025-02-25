#include<bits/stdc++.h>
using namespace std;
bool threeWayPartition(vector<int>& arr, int a, int b) {
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] < a) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] >= a && arr[mid] <= b) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return true;
}
int main() {
    vector<int> arr = {1, 2, 3, 3, 4};
    int a = 1, b = 2;
    bool result = threeWayPartition(arr, a, b);
    if (result) {
        cout << "Array after partitioning: ";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Partitioning failed!" << endl;
    }
    return 0;
}
