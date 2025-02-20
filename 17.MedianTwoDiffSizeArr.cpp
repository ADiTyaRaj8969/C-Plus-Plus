#include<bits/stdc++.h>
using namespace std;
double medianOf2(vector<int>& a, vector<int>& b) {
    vector<int> c(a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());
    int len = c.size();
    if (len % 2 == 0) 
        return (c[len / 2] + c[len / 2 - 1]) / 2.0;
      else 
        return c[len / 2];
}
int main() {
    vector<int> a = { -5, 3, 6, 12, 15 };
    vector<int> b = { -12, -10, -6, -3, 4, 10 };
    cout << medianOf2(a, b) << endl;
    return 0;
}