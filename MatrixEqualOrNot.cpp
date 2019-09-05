#include<iostream>
using namespace std;
int main(){
  int m,n,first[10][10],second[10][10];
  cin>>m>>n;
  bool flag=true;
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
            if(first[i][j]!=second[i][j]){
                flag=false;
            }
        }
    }
    if(flag){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
  
    return 0;  
}    
