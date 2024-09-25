#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>> a>>b>>c;
    a>b&& a>c?a:c;
    cout<<a;
    return 0;
}