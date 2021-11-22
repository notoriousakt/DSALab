#include<iostream>
using namespace std;
int main()
{
    int arr[100],k,i;
    cout<<"ENTER 10 RANDOM NUMBERS";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search";
    cin>>k;
    for(i=0;i<10;i++)
    {
        if(arr[i]==k)
        {
            cout<<"the number"<< k<<" is at index"<< i;
        }
    }
}