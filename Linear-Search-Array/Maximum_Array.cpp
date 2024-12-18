#include<iostream>
#include <limit.h>
using namespace std;

int main()
{
    int arr[]= {2,43,5,67,8,9,45};
    int size =7;
    int maxi= INT_MIN;

    for( int i=0; i<size ; i++)
    {

        if( arr[i] >maxi )
        {

            maxi = arr[i];
        }
    }
    cout<<" Maximum Number Is: " << maxi << endl;
    return 0;
}
