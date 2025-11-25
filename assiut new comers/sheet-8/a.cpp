#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    char c = s[i];

    if (c == '?')
    {
      if (s[n - i - 1] == '?')
      {

        s[i] = 'a';
      }
      else
      {

        s[i] = s[n - i - 1];
      }
    }

    if (n % 2 != 0 && i == n / 2)
    {
      if (c == '?')
      {
        s[i] = 'a';
      }
    }
  }

  int is = true;

  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[n - 1 - i])
    {
      is = false;
    }
  }

  cout << (is ? s : "-1");
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

/*A. Palindromes Replace
time limit per test1 second
memory limit per test256 megabytes
As it is known Saeed loves palindrome too much. A palindrome is a string that reads the same forwards as backwards.

One day his best friend Mina gave him a string and told him that this string was a palindrome.

When Saeed arrived home he found that some letters are missing and replaced them with '?' letter and now he wonders if there is a way to replace all the '?' with lowercase letters so that the final string is a palindrome.

If there are multiple such strings, choose the lexicographically smallest one.

Input
The input consists of a single line containing the string S
 (1≤|S|≤100)
.

|S| means the length of the string.

It is guaranteed that S consists of lowercase letters ('a'–'z') and '?'.

Output
Output -1 if it is impossible to get a palindrome by replacing all the '?'.

Otherwise, print the lexicographically smallest palindrome string you can get after replacing all the '?' with lowercase letters.

Examples
InputCopy
a?z?
OutputCopy
azza
InputCopy
aba
OutputCopy
aba

*/