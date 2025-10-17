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
template <typename T = int>
using Pair = pair<T, T>;
vector<string> RET = {"NO", "YES"};

void solve()
{
  long long a;
  cin >> a;
  cout << (a) * (a + 1) / 2;
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

/*G. Summation from 1 to N
time limit per test0.25 seconds
memory limit per test256 megabytes
Given a number N
. Print the summation of the numbers that is between 1 and N
 (inclusive).

.∑i=1Ni
Input
Only one line containing a number N
 (1≤N≤109)

Output
Print the summation of the numbers that are between 1 and N
 (inclusive).

Examples
InputCopy
3
OutputCopy
6
InputCopy
10
OutputCopy
55
Note
First Example :

the numbers between 1 and 3 are 1,2,3 .

So the answer is: (1 + 2 + 3 = 6)

Second Example :

the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)


*/