#include<iostream>
using namespace std;

int reverse(int arr[],int start, int end)
{
    for(start =0;start <= end/2;start++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}
void printarr(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<" the original array is "<<endl;
    printarr(arr,n);

    reverse(arr,0,n-1);

    cout<<"the reverse array is";
    printarr(arr,n);

    return 0;
}