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
  long long a, b, c;
  long long d;

  cin >> a >> b >> c >> d;

  int can = 0;

  if (a + b - c == d)
    can = 1;
  if (a + b * c == d)
    can = 1;
  if (a - b + c == d)
    can = 1;
  if (a - b * c == d)
    can = 1;
  if (a * b + c == d)
    can = 1;
  if (a * b - c == d)
    can = 1;

  if (can)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
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

/*D. Ali Baba and Puzzles
time limit per test1 second
memory limit per test256 megabytes
One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.

a◻b◻c=d
Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a, b, c and d (−109≤a,b,c≤109),(−1018≤d≤1018).

Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples
InputCopy
3 4 5 23
OutputCopy
YES
InputCopy
9 5 3 7
OutputCopy
YES
InputCopy
1 2 3 1
OutputCopy
NO

*/