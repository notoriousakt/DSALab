#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the rows and columns";
    cin>>a>>b;
    int arr[a][b],i,j,sum1=0,sum2=0;
    cout<<"Enter the elements in a matrix";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i==j)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=(b-1);j>=0;j--)
        {
            sum2=sum2+arr[i][j];
        }
    }
    cout<<" "<<sum1<<" "<<sum2<<endl;
    if(sum1>sum2)
    {
        cout<<"sum1 is greater than sum2";
    }
    else
    {
        cout<<"sum2 is greater than sum1";
    }
}