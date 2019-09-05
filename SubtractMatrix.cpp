#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],second[10][10],sum[10][10];
  cin>>m>>n;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>first[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>second[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=first[i][j]-second[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j];
        }
    }
    
    return 0;
}
