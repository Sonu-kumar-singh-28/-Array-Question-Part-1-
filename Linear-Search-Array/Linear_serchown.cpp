#include<iostream>
using namespace std;
bool find  ( int arr[],int size , int key)
{
    for( int i=0; i<size; i++)
    {
        if( arr[i] == key)
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = 6;

    cout << "Enter the key to find: " << endl;
    int key;

    cin >> key;

    if(find(arr, size, key)) // Correct order of arguments
    {
        cout << "Found" << endl;
    }
    else 
    {
        cout << "Not Found!" << endl;
    }

    return 0;
}
