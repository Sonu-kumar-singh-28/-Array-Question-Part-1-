#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    cout<<" Enter the size of the array:";
    cin>>size;

    vector<int> arr(size);
    vector<int> brr(size);
    vector<int>ans;

    arr.resize(size);

    for( int i=0; i<arr.size(); i++)
    {
        cout<<" enter the elemnet of the array:";
        cin>>arr[i];
    }
    
    int sum;
    cout<<" Enter the sum of the element :";
    cin>>sum;


    for( int i=0; i<arr.size(); i++)
    {
      for( int j=0; j<brr.size(); j++)
      {
        if( arr[i]+arr[j] == sum)
        {
          cout<<"pair found :" << "(" << arr[i] <<" ," << arr[j] << ")" << sum<< endl;
        }
      }
      cout<< endl;
    }

    return 0;
}
