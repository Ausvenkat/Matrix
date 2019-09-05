#include<iostream>
using namespace std;
int main(){
    int n,a[10][10],b;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
        }
    }
    cout<<b;
}
