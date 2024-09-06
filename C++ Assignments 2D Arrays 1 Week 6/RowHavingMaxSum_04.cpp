#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the row number : ";
    cin >> n;
    cout << "Enter the column number : ";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Given Matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int mx=INT_MIN,sum=0,x=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum+=arr[i][j];
            if(mx<sum)
            {
                mx=sum;
                x=i;
            }
        }
        sum=0;
    }
   cout<<"Row number "<<x<<" has the maximum sum";
   return 0;
}