#include<iostream>
using namespace std;

// function use   

int as( int a)
{
    a++;
    cout<<endl;
    return a;
}

int main()
{
    int a = 16;

    int ap = as(a);

    cout<<" The Number Is :"<< a << endl <<" The Increment Of The Number Is: "<<ap << endl;

    return 0;
}