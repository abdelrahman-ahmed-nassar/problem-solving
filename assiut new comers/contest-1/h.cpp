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
  long double n, k, a;
  cin >> n >> k >> a;

  long double result = (n * k) / a;
  float fractPart = result - (long long int)result;

  if (fractPart > 0)
  {
    cout << "double";
    return;
  }

  if (result >= -2147483648 && result <= 2147483647)
  {
    cout << "int";
    return;
  }

  cout << "long long";
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

/*H. Data Type Guessing
time limit per test1 second
memory limit per test256 megabytes
Given three numbers n
, k
 and a
. Identify whether the data type of n×ka
 is int, long long or double.

Input
Only one line containing three numbers n
, k
 and a
 (1≤a,k,n≤2147483647
).

Output
Print "int", "long long" or "double" (without quotes) as described in the statement.

Examples
InputCopy
3 6 9
OutputCopy
int
InputCopy
100000 200000 4
OutputCopy
long long
Note
double is when a number has a floating-point.

int Range: [−2147483648,2147483647
].

long long can hold values of a bigger range than that of int.


*/