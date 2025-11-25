#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};


void solve()
{
  
}


int main()
{
#ifndef ONLINE_JUDGE
  freopen("1-in.txt", "r", stdin), freopen("2-out.txt", "w", stdout);

#endif
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int T = 1;
  // cin >> T;

  while (T--)
  {
    solve();
  }
}




/*Z. Hard Compare
time limit per test1 second
memory limit per test256 megabytes
Given 4 numbers A,B,C
 and D
. If AB
 > CD
 print "YES" otherwise, print "NO".

Input
Only one line containing 4 numbers A,B,C
 and D
 (1≤A,C≤107)
 , (1≤B,D≤1012)

Output
Print "YES" or "NO" according to the problem above.

Examples
InputCopy
3 2 5 4
OutputCopy
NO
InputCopy
5 2 4 2
OutputCopy
YES
InputCopy
5 2 5 2
OutputCopy
NO
Note
First Example :

32
 = 9 and 54
 = 625 then 9 < 625 so the answer is NO.

Second Example :

52
 = 25 and 42
 = 16 then 25 > 16 so the answer is YES.

Third Example :

52
 = 25 and 52
 = 25 then 25 = 25 so the answer is NO.


*/