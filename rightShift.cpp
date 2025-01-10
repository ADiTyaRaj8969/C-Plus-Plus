//Given a vector of N integers, right rotate the array by one place.
#include<bits/stdc++.h>
using namespace std;
#define no_of_bits = 32
void vectorInput(vector<int> &v){
    int n=v.size();
    for(int i = 0; i < n; i++){
        cin >> v[i] ;
    }
    
}

// measure time in cpp chrome library
int circularRightShift(vector<int> &v, int n, int d)
{
    while (d--)

    {
        if(n&1){
            n = (n>>1) | (1<<(32 - 1));
        }
    }
    return n;
    
}
void vectorPrint(vector<int> &v){
    for(int x : v){
        cout << x << " ";
    }
    cout << endl;
    
}
int main(){
    int n,d;
    cin >> n;
    cin >> d;
    vector<int> v(n);
    vectorInput(v);
    int hehe = circularRightShift(v,1010, 3);
    cout << hehe;
    vectorPrint(v);
    return 0;
}