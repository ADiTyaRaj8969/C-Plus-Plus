/*Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N.
Find the number(between 1 to N), that is not present in the given array.*/
#include<iostream>
using namespace std;

int FindMissing(int arr[], int n)
{
    for(int i = 1; i<=n; i++)
    {
        int flag = 0;
        for(int j = 0; j<n-1; j++)
        {
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int n = 3;
    int arr[] = {1,2,4,5,6};
    int ans = FindMissing(arr, n);
    cout << ans << endl;
    return 0;
}