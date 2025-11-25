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
  float x, y;
  cin >> x >> y;

  if (x > 0 && y > 0)
  {
    cout << "Q1";
  }
  else if (x < 0 && y > 0)
  {
    cout << "Q2";
  }
  else if (x < 0 && y < 0)
  {
    cout << "Q3";
  }
  else if (x > 0 && y < 0)
  {
    cout << "Q4";
  }
  else if (x == 0 && y != 0)
  {
    cout << "Eixo Y";
  }
  else if (y == 0 && x != 0)
  {
    cout << "Eixo X";
  }
  else
  {
    cout << "Origem";
  }
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

/*Q. Coordinates of a Point
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.

Input
Only one line containing two numbers X, Y ( - 1000 ≤ X, Y ≤ 1000).

Output
Print the answer to problem above.

Examples
InputCopy
4.5 -2.2
OutputCopy
Q4
InputCopy
0.1 0.1
OutputCopy
Q1

*/