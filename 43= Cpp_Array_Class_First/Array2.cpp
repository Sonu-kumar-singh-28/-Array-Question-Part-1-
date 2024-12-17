#include<iostream>
using namespace std;

int main()
{
    int arr[10];
  
  // taking inpuut in array 

  for( int i=0; i<10; i++)
  {
     cout<<" Enter The Input elment Of The Array:" ;
    cin>> arr[i];  
  }
  // for printing the array 

  for( int i=0; i<10; i++)
  {
     cout<< endl;
    cout << " input Elements Are : "<< arr[i]<< endl;
  }
  return 0;
}