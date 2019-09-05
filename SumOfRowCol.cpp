#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],sum=0;
  cin>>m>>n;
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>first[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             sum+=first[i][j];
        }
        cout<<sum;
        sum=0;
    }
    sum=0;
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            sum+=first[i][j];
        }
        cout<<sum;
        sum=0;
    } 
    return 0;  
}    
