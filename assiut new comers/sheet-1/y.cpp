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
  long long A, B, C, D;
  cin >> A >> B >> C >> D;

  // Compute modulo of each value early
  A %= 100;
  B %= 100;
  C %= 100;
  D %= 100;

  // Compute the product modulo 100 step-by-step
  long long result = A;
  result = (result * B) % 100;
  result = (result * C) % 100;
  result = (result * D) % 100;

  // Print the last two digits with leading zero if necessary
  cout << setfill('0') << setw(2) << result << endl;
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

/*Y. The last 2 digits
time limit per test1 second
memory limit per test256 megabytes
Given 4 numbers A
, B
, C
 and D
. Print the last 2 digits from their Multiplication.

Input
Only one line containing four numbers A
, B
, C
 and D
 (2≤A,B,C,D≤109)
.

Output
Print the last 2 digits from their Multiplication.

Examples
InputCopy
5 7 2 4
OutputCopy
80
InputCopy
3 9 9 9
OutputCopy
87
Note
First Example :

the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

Second Example :

the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.


*/