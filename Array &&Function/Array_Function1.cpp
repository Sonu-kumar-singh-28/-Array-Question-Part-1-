#include<iostream>
using namespace std;



int printarr( int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
        cout<< arr[i] << endl;

    }
    cout<< endl;
}

inc( int arr[], int size )
{
    arr[0]=  arr[0]+10;
    
    printarr( arr,size);
}

int main()
{
    int arr[]= {2,5,3,7,8};
    int size = 5;

    inc( arr,size);

     printarr( arr , size);

}