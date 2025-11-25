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
  int a, b, d;
  char s, q;
  cin >> a >> s >> b >> q >> d;

  int ans;
  bool isCorrect = false;

  if (s == '+')
    if (a + b == d)
    {
      isCorrect = true;
    }
    else
    {
      ans = a + b;
    }

  if (s == '-')
    if (a - b == d)
    {
      isCorrect = true;
    }
    else
    {
      ans = a - b;
    }

  if (s == '*')
    if (a * b == d)
    {
      isCorrect = true;
    }
    else
    {
      ans = a * b;
    }

  if (isCorrect)
  {
    cout << "Yes";
  }
  else
  {
    cout << ans;
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

/*W. Mathematical Expression
time limit per test0.25 seconds
memory limit per test256 MB
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 105 ≤ C ≤ 105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples
InputCopy
5 + 10 = 15
OutputCopy
Yes
InputCopy
3 - 1 = 2
OutputCopy
Yes
InputCopy
2 * 10 = 19
OutputCopy
20

*/