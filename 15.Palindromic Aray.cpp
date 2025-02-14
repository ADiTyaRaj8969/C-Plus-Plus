#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
bool allPalindromes(const vector<int>& arr) {
    for (int num : arr) {
        if (!isPalindrome(num)) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<int> arr = {111, 222, 333, 444, 555};
    if (allPalindromes(arr)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
