#include <iostream>
using namespace std;

int main() {
  int n1,m1,n2,m2;
  cout<<"enter number  of rows and colof 1st matrix";
  cin>>n1>>m1;
  cout<<"enter number  of rows and colof 2nd matrix";
  cin>>n2>>m2;
  if(m1==n2){
    cout<<"input 1st matrix rowise";
    int a1[n1][m1];
    int a2[n2][m2];
    int a3[n1][m2];

    for(int i=0;i<n1;i++){
      for(int j=0;j<m1;j++){
        cin>>a1[i][j];
      }
    }
    cout<<"input 2ndst matrix rowise";

    for(int i=0;i<n2;i++){
      for(int j=0;j<m2;j++){
        cin>>a2[i][j];
      }
    }
    
    for(int i=0;i<n1;i++){
      for(int j=0;j<m2;j++){
        a3[i][j]=0;
        
      }
    }
    for(int i=0;i<n1;i++){
      for(int j=0;j<m2;j++){
        for(int k=0;k<n2;k++){
          a3[i][j]+=a1[i][k]*a2[k][j];
        }

      }
    }
    for(int i=0;i<n1;i++){
      for(int j=0;j<m2;j++){
        cout<<a3[i][j]<<" ";
      }
      cout<<"\n";
    }

  }
  else{
    cout<<"Multiplication not possible";
  }
 

}