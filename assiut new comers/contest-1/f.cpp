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

  cout << (a ^ b);
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

/*F. Adding Bits
time limit per test1 second
memory limit per test256 megabytes
Peter Parker had worked hard throughout his digital logic course, but when he was asked to implement a 32
 bit adder for a machine, he made a mistake in the design part. After tracing the design for half an hour, he found his flaw!! He was doing bitwise addition, but the carry bit is always zero.

4=00000000000000000000000000000100

+

6=00000000000000000000000000000110

=

2=00000000000000000000000000000010

Now, he has to write an efficient program that would take 2
 unsigned 32
 bit decimal numbers as input, and reproduce the output by adding them in the same way as his circuit does.

Input
Only One line containing two decimal numbers A
 and B
 (0≤A,B≤109
).

Output
Print the value after adding A
 and B
 in Peter Parker's way.

Examples
InputCopy
4 6
OutputCopy
2
InputCopy
6 9
OutputCopy
15

*/