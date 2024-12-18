#include<iostream>
using namespace std;

int main()
{
    int arr[]= { 1,0,0,0,1,1,1,0,0,0,1,1,1,1,0};
    int size = 15;
    
    int numzero =0;
    int numone =0;

    for( int i=0; i<size; i++)
    {
        if( arr[i] ==0)
        {
            numzero++;
        }

        if( arr[i] == 1)
        {
            numone++;
        }
    }
    cout<<"The Numzero Of The Array Is: " << numzero << endl;
    cout<<" The Numone Of The Array Is: " << numone << endl;

    return 0;
}