//linear search
#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n,int size)
{
    for(int i = 0; i<size; i++)
    {
        if(arr[i]== n){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1,2,5,3,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int missing = LinearSearch(arr, n, size);
    cout << missing << endl;

    return 0;
}