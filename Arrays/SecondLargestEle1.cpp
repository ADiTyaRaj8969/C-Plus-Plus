#include<iostream>
#include<climits> // Include for INT_MAX
using namespace std;

int SecondLargest(int arr[], int size)
{
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1 ; i < size ; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] < largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int SecondSmallest(int arr[], int size)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < size; i++) // Loop should start from 1
    {
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] > smallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest; // Return should be outside the loop
}

int main(){
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int secondLargest = SecondLargest(arr, n);
    int secondSmallest = SecondSmallest(arr, n);

    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Smallest: " << secondSmallest << endl;

    return 0;
}
