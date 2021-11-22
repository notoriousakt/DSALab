#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the no. of rows and columns";
    cin>>a>>b;
    int m1[a][b],m2[a][b],m3[a][b],i,j;
    cout<<"ENTER m1 MATRIX";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"ENTER m2 MATRIX";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>m2[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    } 
    cout<<"RESULT AFTER ADDITION IS";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<" "<<m3[i][j];
        }
    }
}