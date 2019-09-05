#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],scalar[10][10],num;
  cin>>m>>n;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>first[i][j];
        }
    }
    cin>>num;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scalar[i][j]=num*first[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<scalar[i][j]<<' ';
        }
    }
    
    return 0;
}
