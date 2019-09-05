#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],sum=0;
  cin>>m>>n;
  bool flag=true;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>first[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i+j==2){
             sum+=first[i][j];
            }
        }
    }
    cout<<sum;
  
    return 0;  
}    
