#include<iostream>
using namespace std;


int printarray(int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
        cout << "The Element Of The Array Is: " << arr[i]  << endl;
    }
    cout<<endl;
}

inc( int arr[], int size)
{
    arr[0]= arr[3]+10;
    printarray(arr , size);
}

int main()
{
    int arr[]={2,4,5,7,8};
    int size =5;

    inc( arr, size);

    printarray(arr, size);
}