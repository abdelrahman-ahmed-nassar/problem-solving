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
  int a, b;
  cin >> a >> b;

  bool isExist = true;

  if (abs(a - b) > 1)
  {
    isExist = false;
  }

  if (a == 0 && b == 0)
  {
    isExist = false;
  }

  cout << (isExist ? "YES" : "NO");
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

/*E. Interval Sweep
time limit per test1 second
memory limit per test256 megabytes
Given two numbers a
 and b
. You have to answer with "YES" if there is a non-empty interval consisting of numbers from l
 to r
 (l,l+1,l+2,...,r
) with a odd numbers and b even numbers, or "NO" otherwise.

Input
Only one line containing two numbers a
 and b
 (0≤a,b≤100
)the number of odd numbers and the number of even numbers in the interval respectively.

Output
Print "YES" or "NO" as described in the statement.

Examples
InputCopy
2 3
OutputCopy
YES
InputCopy
3 1
OutputCopy
NO
Note
Example 1 :

some valid intervales that contain 2
 odd numbers and 3
 even numbers can be

l=6,r=10
 contains numbers (6,7,8,9,10)
.

l=14,r=18
 contains numbers (14,15,16,17,18)
.


*/