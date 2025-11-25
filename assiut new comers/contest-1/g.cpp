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
  long long e, m, b;
  cin >> e >> m >> b;

  // eq1 = 2e 1b
  // eq2 = 1e 1b 1m

  // 1 2 3
  long long eq1 = 0, eq2 = 0;

  // b is smaller
  if (e >= b && m >= b)
  {
    cout << b;
    return;
  }

  // b is small the e
  if (e > b && b > m)
  {
    // use the eq 2
    eq2 += m;
    b -= m;
    e -= m;

    // use eq1
    if (e / 2 > b)
    {
      eq1 += b;
    }
    else
    {
      eq1 += (e / 2);
    }

    cout << eq1 + eq2;
    return;
  }

  // b is small than m
  if (m > b && b > e)
  {
    cout << e;
    return;
  }

  // b is larger
  if (e < b && m < b)
  {
    // use the eq 2
    if (e > m)
    {
      eq2 += m;
      b -= m;
      e -= m;
    }
    else
    {
      eq2 += e;
      cout << eq2;
      return;
    }

    // use eq 1
    if (e > 0)
    {
      eq1 += e / 2;
    }
    cout << eq1 + eq2;
    return;
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

/*G. Katryoshka
time limit per test1 second
memory limit per test256 megabytes
The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤1018
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

Examples
InputCopy
1 2 3
OutputCopy
1
InputCopy
0 11 2
OutputCopy
0
InputCopy
90 24 89
OutputCopy
57

*/