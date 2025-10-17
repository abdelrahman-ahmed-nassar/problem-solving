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
  long long a, b, k;
  cin >> a >> b >> k;

  int aByK = a % k == 0;
  int bByK = b % k == 0;

  if (aByK && bByK)
  {
    cout << "Both";
  }
  else if (aByK)
  {
    cout << "Memo";
  }
  else if (bByK)
  {
    cout << "Momo";
  }
  else
  {
    cout << "No One";
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

/*B. Memo and Momo
time limit per test1 second
memory limit per test256 megabytes
Memo and Momo are playing a game. Memo will choose a positive number a
, and Momo will choose a positive number b
.

Your task is to tell them who will win according to the following rules:

If both a
 and b
 are divisible by k
, both of them win and you should print "Both".
If a
 is divisible by k
 but b
 isn't, Memo wins and you should print "Memo".
If b
 is divisible by k
 but a
 isn't, Momo wins and you should print "Momo".
If both a
 and b
 are not divisible by k
, no one wins and you should print "No One".
Input
Only one line containing three positive numbers a
, b
 and k
 (1≤a,b,k≤1018
).

Output
Print the answer as described in the statement.

Examples
InputCopy
15 7 3
OutputCopy
Memo
InputCopy
22 10 2
OutputCopy
Both

*/