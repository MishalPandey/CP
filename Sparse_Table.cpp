#include<bits/stdc++.h>
using namespace std;

const int MAX_N= 100005;
const int LOG= 17;
int a[MAX_N];
int m[MAX_N][LOG]; // m[i][j] is minimum among a[i...... i+ 2^j-1]
int bin_log[MAX_N]; 

             
int query(int L, int R){ //O(1)
  int length = R-L+1;
  int K= bin_log[length];
  
  return min(m[L][K], m[R- (1<<K)+1][K]);
}

int main(){
  //1) Read Line
  int n; cin>>n;
  bin_log[1]=0;
  for(int i=2; i<=n; i++){
    bin_log[i]= bin_log[i/2]+1;
  }
  /*
  bin_log[2]=1;   bin_log[7]=2;
  bin_log[3]=1;    bin_log[8]=3;
  bin_log[4]=2;    bin_log[9]=3;
  bin_log[5]=2;     bin_log[x]---> yeh basically 2^n< x ke liye n ki value de raha hai
  bin_log[6]=2;
  
  */
  for(int i=0; i<n; i++){
    cin>>a[i];
    m[i][0]= a[i];
  }
  
  
  
  // 2) preprocessing O(N* logN)
  for(int k=1; k<LOG; k++){
    for(int i=0; i+(1<<k)-1<n; i++){
      m[i][k]= min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
    }
    // yeh m[i][1]--> for every i    1= 2^0
      // m[i][2]-->for every i        2= 2^1
      // m[i][4]-->for every i         4= 2^2
       // m[i][8]-->for every i store kar rha hai     8= 2^3                                                   
  }
   //but here this type store kar rhe hai
    // m[i][k]-->for every i store kar rha hai  x= 2^k
  
  
  
  
  // 3) answer query
  int q; cin>>q;
  for(int i=0; i<q; i++){
    int L, R; cin>>L>>R;
    cout<<query(L, R)<<"\n";
  }
}
  
