#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& price) {
    int n = price.size();
    vector<int> profit(n, 0);
    int max_price = price[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        max_price = max(max_price, price[i]);
        profit[i] = max(profit[i + 1], max_price - price[i]);
    }
    int res = 0;
    int min_price = price[0];
    for (int i = 1; i < n; i++) {
        min_price = min(min_price, price[i]);
        res = max(res, profit[i] + (price[i] - min_price));
    }
    return res;
}
int main() {
    vector<int> price = {2, 30, 15, 10, 8, 25, 80};
    cout << maxProfit(price);
    return 0;
}