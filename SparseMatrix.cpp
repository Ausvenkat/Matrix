#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int m, n,a[10][10];
    cin>>m>>n;
    int zeros = 0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 0)
            {
                zeros++;
            }
        }
    }
 
    if(zeros > (m*n)/2)
    {
        cout<<"The matrix is a sparse matrix";
    }
    else
    {
        cout<<"The matrix is not a sparse matrix";
    }
 
}
