#include<bits/stdc++.h>
using namespace std;
void rotateByOne(vector<int>& arr) {
    if (arr.empty()) return; 
    int n = arr.size();
    int lastElement = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateByOne(arr);
    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
