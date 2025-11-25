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
  // Input boundaries of the intervals
  long long l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;

  // Find the intersection boundaries
  long long l = max(l1, l2);
  long long r = min(r1, r2);

  // Check if the intersection exists
  if (l <= r)
  {
    cout << l << " " << r << endl;
  }
  else
  {
    cout << -1 << endl;
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

/*X. Two intervals
time limit per test1 second
memory limit per test256 megabytes
Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

Input
Only one line contains two intervals [l1,r1]
, [l2,r2]
 where (1≤l1,l2,r1,r2≤109)
, (l1≤r1,l2≤r2)
.

It's guaranteed that l1≤r1
 and l2≤r2
.

Output
If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

Examples
InputCopy
1 15 5 27
OutputCopy
5 15
InputCopy
2 5 6 12
OutputCopy
-1
Note
First Example :


Second Example :



*/