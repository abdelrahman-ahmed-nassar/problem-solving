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
  double x, p;
  cin >> x >> p;

  double value = p / (1 - x / 100);
  value = ceil(value * 100) / 100.0;
  cout << value << endl;
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

/*A. Winter Sale
time limit per test1 second
memory limit per test256 megabytes
The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of X%
 and its price P
 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

Input
Only one line containing two numbers X
 and P
 (1≤X≤99,1≤P≤4×104
) – the discount percentage, and the price of the T-shirt after the discount.

Output
Print the price of the T-shirt before the discount rounded up to two decimal places.

Examples
InputCopy
20 80
OutputCopy
100.00
InputCopy
15 20
OutputCopy
23.53

*/