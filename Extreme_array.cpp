#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 12,19,36,5,6,42,23,56,89};
    int size = 9;
    
    int start =0;
    int end = size-1;

    while(start <= end)
    {
        
     if( start == end)
     {
         cout << arr[start] <<" ";
     }

     else {
     cout<<  arr[start] <<" ";
     cout<< arr[end] << " ";
     }
      start++;
     end--;
   }

    return 0;
}