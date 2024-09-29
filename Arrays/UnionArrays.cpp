/* Given two sorted arrays, arr1, and arr2 of size n and m. 
Find the union of two sorted arrays.*/
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i = 0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: st)
    {
        temp.push_back(it);
    }
    return temp;
}

int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> unionArray = sortedArray(arr1, arr2);

    // Print the union of the arrays
    cout << "Union of the two sorted arrays is: ";
    for (auto &it : unionArray) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}