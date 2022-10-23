#include <bits/stdc++.h>
using namespace std;
#define setp  fixed<<setprecision(10)

// Screat data structure set
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T>
using xtset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//xtset(name).order_of_key(element)---element se chhote kitne elements pade hai set me
//*xtset(name).find_by_order(x)---element x kis index pe hai batayega


#define l_b(v, k)   lower_bound(v.begin(), v.end(), k)// it gives pointer
#define u_b(v, k)   upper_bound(v.begin(), v.end(), k)// it gives pointer



// binary_search(a, a+n, x) x is present or not
int Me[N];
// BinarySearch--- check is condition ki monotonic me reque point kara hai jaha se  T to F or F to T ho rha hai
//code for first true (FFFFFFFFFFFTTTTTTTTTTTTTTTTTTTT)
// ll low= 0, high= 0, ans=0;
//        while(high>=low){
//             ll mid= (high+ low)/2;
//             if(cheak(mid)){
//               high= mid-1;
//               ans= mid;
//             }
//             else{
//               low= mid+1;
//             }
//        }

use binary search when min or max (in monotonic...function)


//     // merge sort
// void merge(int l, int r, int mid){
//   int l_sz = mid -l +1;
//   int L[l_sz + 1];
//   int r_sz = r - mid;
//   int R[r_sz + 1];
//   for(int i=0; i<l_sz; i++){
//      L[i]= Me[i+l];
//   }
//   for(int i=0; i<r_sz; i++){
//     R[i]= Me[i + mid + 1];
//   }
//   L[l_sz]= R[r_sz] = INT_MAX;
//   int l_i =0;
//   int r_i=0;
//   for(int i=l; i<=r; i++){
//     if(L[l_i]<= R[r_i]){
//   Me[i]= L[l_i];
//   l_i++;
//   }else{
//     Me[i] = R[r_i];
//     r_i++;
//   }

//   }}
// void mergeSort(int l, int r){
//   if(l==r) return;
//   int mid = (l+r)/2;
//   mergeSort(l, mid);
//   mergeSort(mid+1, r);
//   merge(l, r, mid);}
// void printBinary(int num){
//   for(int i=10; i>=0; i--){
//     cout<<((num>>i)&1);
//   }
//   cout<<endl;}



// NUMBER THEORY FORMULAS
 /* ith bit set of number a -- (a|(1<<i))
*   ith bit unset of number a --(a &(~(1<<i)))
*   ith bit toggle of number a --(a^ (1<<i))
*   clear LSB upto ith bit  (a & (~((1<<(i+1))-1)))
*   clear MSB upto ith bit  (a & ((1<<(i+1))-1))            */
#define setcount(a)  __builtin_popcount(a)
#define llsetcount(a)  __builtin_popcountll(a) //a=(1ll<<35)
/*  uppercase to lowercase cout<< char('C'| ' ')<<nl //yehh bus 5th bit set kardeta hai
*   lowercase to uppercase cout<< char('c'&'_')<<nl //yehh bus 5th bit unset kardeta hai
*   1<<n = 2 ki power n
*   (i&1)--true for odd number and false for even number
*    n>>1 --gives n/2
*    n<<1-- gives n*2
*    power of 2 is n or not-- (n & (n-1))is true then its not power of 2
*     XOR OPERATOR--  
      x^0==0
      x^x==0
*    has associative nature[ x^ y^ z == y^ x^ z ==z^x^ y   ]  
* 1<< i will give this type of numbers 1000                     niche 1 digit difference
* (1<<i)- 1    will give this type of numbers 111     
* a*b= GCD* LCD
* GCD(a, b) = GCD(b, a%b) when b!=0 ----->EUCLID FORMULA
* minimum fraction of a/b = (a/GCD(a, b))/(b/GCD(a, b))
* GCD OF a, b , c = GCD OF (d, c)  where d is GCD of(a, b) */     


Basics
// is_sorted --> algorithem for sorted or not array                                                                  */

//mergeSort(0, n-1); //input array with name (Me) without declaring it;
    
//******m.count(x) // gives m.fs=x is present or not note...

// declaration vec[n][m]--->>> vector<vector<int>>a(n , vector<int> (m , 0));
/* ********* FOR DIV 2 QUESTION 1 ALWAYS OBSERVATION OF TESTCASE WILL GIVE THE ANSWER IMMEDIATELY*/


    

for when the problem requires input/output via file(s).
    /* int main(int argc, char **argv){
    freopen("input.txt", "r", stdin);   
     freopen("output.txt", "w", stdout);      
      ......code..........
     }*/



FOR-->>>>DEBUG
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "<< x<< nl;
#else 
#define debug(x)
#endif
/*
int main ke andar
 freopen("Error.txt", "w", stderr); 
 */




for prime ---->(sieve algorithm)

/*
-----------------------------------
    const int N= 1e7+ 10;
   vector<bool> isprime(N, 1);
   --------------------------------
    isprime[0]= isprime[1]= false;
     for(int i=2; i<N; i++){
      if(isprime[i]==true){
        for(int j= 2*i; j<N; j+=i){
          isprime[j]= false;
        }
      }
     }
*/
  
 
 Comparator class
  
  /*
  struct Tuple
  {
    int wt;
    int v;
    string path;

    Tuple(int wt, int v, string path)
    {
      this->wt = wt;
      this->v = v;
      this->path = path;
    }
  };

  struct compo
  {
    bool operator()(Tuple const &t1, Tuple const t2)
    {
      if(t1.wt == t2.wt)
      {
        if(t1.path.size() == t2.path.size())
          return t1.path > t2.path;

        else
          return t1.path.size() > t2.path.size();
      }

      return t1.wt > t2.wt;
    }
  };
  
  priority_queue <Tuple, vector <Tuple>, compo> pq;
      pq.push(Tuple(0, src, to_string(src)));
  
  */
  
 Comparator Function
 /*
 
    bool compare(Tuple a, Tuple b){
        if(a.wt==b.wt)
          return a.path.size()<b.path.size();
          
          return a.wt<b.wt;
   }
   vector<Tuple>v;
   sort(v.begin(), v.end(), compare);
  */

 
