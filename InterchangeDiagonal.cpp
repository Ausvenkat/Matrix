#include<iostream>
using namespace std;
int main(){
    int r,c,a[10][10],swap;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0,j=0,k=r-1;j<c;i++,j++,k--){
        swap=a[j][i];
        a[j][i]=a[j][k];
        a[j][k]=swap;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
