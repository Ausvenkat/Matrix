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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i<j){
                cout<<" ";
            }
      else{
    cout<<a[i][j]<<" ";
      }
     }
    cout<<"\n";
   }
    return 0;
}
