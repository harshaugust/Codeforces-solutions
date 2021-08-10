
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <stack>
#include <iomanip>
using namespace std;

#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()
#define ll long long int
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define plii pair<pair<ll, int>, int>
#define piii pair<pii, int>
#define viii vector<pair<pii, int>>
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define mp make_pair
#define ms(x, v) memset(x, v, sizeof x)
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;
 int n,m,i,a[100],b[100],k,x;
int main(){
    cin>>n>>m;
 for(i=0;i<n;i++)
 {
   cin>>a[i]>>b[i];
   k+=a[i];
   x+=b[i];
 }
  if(m<k || m>x)
  {
  cout<<"NO"; 
  return 0;
  }
  cout<<"YES"<<endl;
  for(i=0;i<n;i++)
  {
   cout<<min(b[i],m-k+a[i])<<" ";////
   m-=min(b[i],m-k+a[i]);
   k-=a[i];
  }
}

