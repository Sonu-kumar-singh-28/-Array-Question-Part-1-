#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    // Input The Element

    for( int i=0; i<5; i++)
    {
        cout<<" Enter The Element Of The Array:";
        cin>>arr[i];
    }

    // double of the array 
    cout<< " Be Patient :";
    cout << endl;
    for( int i=0; i<5; i++)
    {
        cout<< " the Double Of  The Element Is: " <<  2*arr[i] << endl;
    }

 return 0;
}