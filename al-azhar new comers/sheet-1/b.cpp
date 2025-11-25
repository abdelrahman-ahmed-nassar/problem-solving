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
  int n;
  ll l;
  char c;
  float f;
  double d;
  cin >> n >> l >> c >> f >> d;
  cout << n << endl
       << l << endl
       << c << endl
       << f << endl
       << d;
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

/*B. Basic Data Types
time limit per test1 second
memory limit per test256 megabytes
The following lines show some C++ data types, their format specifiers and their most common bit widths:

int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value
Reading

To read a data type, use the following syntax:

   cin >> VariableName;

For example, to read a character followed by a double:

  char ch;
  double d;
  cin >> ch >> d;

Printing

To print a data type, use the following syntax:

cout << VariableName;

For example, to print a character followed by a double:
char ch = 'd';
double d = 234.432;
cout << ch << " "<< d;

Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.

Example
InputCopy
3 12345678912345 a 334.23 14049.30493
OutputCopy
3
12345678912345
a
334.23
14049.3

*/