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




/*H. Two numbers
time limit per test1 second
memory limit per test256 megabytes
Given 2 numbers A
 and B
. Print floor, ceil and round of A/B

Note:

Floor: Is a mathematical function that takes a real number X
 and its output is the greatest integer less than or equal to X
.
Ceil: Is a mathematical function that takes a real number X
 and its output is the smallest integer larger than or equal to X
.
Round: Is a mathematical function that takes a real number X
 and its output is the closest integer to that number X
.

For more clarification visit the links in the notes below.

Input
Only one line containing two numbers A
 and B
 (1≤A,B≤103)

Output
Print 3 lines that contain the following in the same order:

"floor A
 / B
 = Floor result" without quotes.
"ceil A
 / B
 = Ceil result" without quotes.
"round A
 / B
 = Round result" without quotes.
Examples
InputCopy
10 3
OutputCopy
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
InputCopy
10 4
OutputCopy
floor 10 / 4 = 2
ceil 10 / 4 = 3
round 10 / 4 = 3
InputCopy
10 6
OutputCopy
floor 10 / 6 = 1
ceil 10 / 6 = 2
round 10 / 6 = 2
Note
Links:

For Rounding method visit: https://www.mathsisfun.com/numbers/rounding-methods.html.
For Flooring and Ceiling method visit: https://www.mathsisfun.com/sets/function-floor-ceiling.html.

*/