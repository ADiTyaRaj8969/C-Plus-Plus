#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

double find_mean(vector<int> &v)
{
    double sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum / v.size();
}

double find_median(vector<int> &v)
{
    int n = v.size();
    sort(v.begin(), v.end());

    return (n % 2) ? v[n / 2] : (v[n / 2] + v[n / 2 - 1]) / 2.0;
}

int find_mode(vector<int> &v)
{
    vector<int> mod(v.size());
    sort(v.begin(), v.end());
    int mode = v[0];
    int max_count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        int count = 0;
        for (int j = i + 1; j < v.size(); j++) // TC = (N-1)/2N
        {
            if (v[j] == v[i])
            {
                count++;
                
            }
        }
        if (count > max_count)
        {
            max_count = count;
            mode = v[i];
        }
    }
    return mode;
}

void solve()
{
    cout << "enter elements: " << endl;
    vector<int> v = input_vector();
    // cout << find_median(v) << "\n";
    double freq = find_mode(v);
    cout << freq << "\n";
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}