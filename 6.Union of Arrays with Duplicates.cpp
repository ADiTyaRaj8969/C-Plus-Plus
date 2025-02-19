#include<bits/stdc++.h>
using namespace std;
int findUnionCount(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    int unionCount = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            unionCount++;
            i++;
        } else if (a[i] > b[j]) {
            unionCount++;
            j++;
        } else {
            unionCount++;
            i++;
            j++;
        }
    }
    while (i < a.size()) {
        unionCount++;
        i++;
    }
    while (j < b.size()) {
        unionCount++;
        j++;
    }
    return unionCount;
}
int main() {
    vector<int> a = {85, 25, 1, 32, 54, 6};
    vector<int> b = {85, 2};
    int unionCount = findUnionCount(a, b);
    cout << "Number of elements in the union: " << unionCount << endl;

    return 0;
}
