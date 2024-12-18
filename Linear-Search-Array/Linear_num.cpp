#include<iostream>
using namespace std;


int main()
{
    // values are only for 0 and 1

    int arr[] = {0,1,0,0,1,1,1,1,0,0,1,0,0,1,0,1};
    int size = 15;

    int numzero =0;
    int numone =0;

    for( int i=0; i<size; i++)
    {
        if( arr[i]== 0)
        {
            numzero++;
        }
        if( arr[i]==1)
        {
            numone++;
        }

    }
    cout<<" Number OF Zeros :" << numzero << endl;
    cout<< " Num,ber Of Ones: " << numone << endl;

}