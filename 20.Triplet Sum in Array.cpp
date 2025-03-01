#include<bits/stdc++.h>
using namespace std;
string isSubset(vector<int>& a, vector<int>& b) {
    unordered_map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }
    for (int num : b) {
        if (freq[num] > 0) {
            freq[num]--;
        } else {
            return "No";
        }
    }
    return "Yes";
}
int main() {
    vector<int> a1 = {11, 7, 1, 13, 21, 3, 7, 3};
    vector<int> b1 = {11, 3, 7, 1, 7};
    vector<int> a2 = {1, 2, 3, 4, 4, 5, 6};
    vector<int> b2 = {1, 2, 4};
    cout << isSubset(a1, b1) << endl;
    cout << isSubset(a2, b2) << endl; 
    return 0;
}
