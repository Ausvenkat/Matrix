#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],second[10][10],mul[10][10];
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
            mul[i][j]=0;    
    for(int k=0;k<n;k++){    
            mul[i][j]+=first[i][k]*second[k][j];    
        }       
    }    
}    
    for(int i=0;i<m;i++){    
        for(int j=0;j<n;j++){    
            cout<<mul[i][j]<<" ";    
        }    
        cout<<"\n";    
    }    
    return 0;  
}    
