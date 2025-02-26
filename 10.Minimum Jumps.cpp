#include<bits/stdc++.h>
using namespace std;
int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n == 1) return 0;
    if (arr[0] == 0) return -1;
    int jumps = 0;     
    int farthest = 0;   
    int currentEnd = 0; 
    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]);
        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;
            if (currentEnd >= n - 1) {
                break;
            }
        }
    }
    return (currentEnd >= n - 1) ? jumps : -1;
}
int main() {
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << "Minimum jumps to reach the end: " << minJumps(arr) << endl;
    return 0;
}
