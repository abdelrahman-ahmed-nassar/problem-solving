#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
	long long n;
	cin >> n;

	string s = to_string(n);

	// 4 , 7
	bool isLucky = true;
	bool isAlmostLucky = false;

	// is lucky ?

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '7' && s[i] != '4')
		{
			isLucky = false;
		}
	}

	// is divisible by 4
	if (n % 4 == 0 || n % 7 == 0)
		isAlmostLucky = true;

	cout << (isLucky || isAlmostLucky ? "YES" : "NO");
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

/*J. Lucky Division
time limit per test2 seconds
memory limit per test256 megabytes
Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples
InputCopy
47
OutputCopy
YES
InputCopy
16
OutputCopy
YES
InputCopy
78
OutputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

*/