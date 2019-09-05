#include<iostream>
using namespace std;
int main(){
    int r,c,a[10][10],sum=0;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
