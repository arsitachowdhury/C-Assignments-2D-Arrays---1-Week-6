#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter row : ";
    cin>>m;
    cout<<"Enter cols : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }     
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;    
    }
    int x1,y1,x2,y2;
    cout<<"Enter 1st coordinate : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd coordinate : "; 
    cin>>x2>>y2;
    int sum=0;
    for (int i = x1; i <= x2; i++)
    {
      for (int j = y1; j <= y2; j++)
      {
         sum+=arr[i][j];
      }
    }
    cout<<"Sum is : "<<sum;
    return 0;
}