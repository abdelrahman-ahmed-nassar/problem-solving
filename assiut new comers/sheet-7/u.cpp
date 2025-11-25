#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

long long CalcMaxValueSum(int arr[][2], int n, int w, int c, long long currentSum, long long currentWeight)
{
  if (c >= n)
  {
    return currentSum;
  }

  if (currentWeight + arr[c][0] <= w)
  {
    currentWeight += arr[c][0];
    currentSum += arr[c][1];
  }
  if (currentWeight > w)
  {
    return currentSum;
  }

  return CalcMaxValueSum(arr, n, w, c + 1, currentSum, currentWeight);
}

void solve()
{
  int n, w;
  cin >> n >> w;

  int arr[n][2];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }

  // sort by weight [weight, value] (bubble) (large -> small)

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j][1] < arr[j + 1][1])
      {
        int tempW = arr[j][0];
        int tempV = arr[j][1];

        arr[j][0] = arr[j + 1][0];
        arr[j][1] = arr[j + 1][1];

        arr[j + 1][0] = tempW;
        arr[j + 1][1] = tempV;
      }
    }
  }

  cout << CalcMaxValueSum(arr, n, w, 0, 0, 0);
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

/*U. Knapsack
time limit per test2 seconds
memory limit per test256 megabytes
There are N
 items numbered from 1 to N
. The ith
 item has a weight of wi
 and a value of vi
.

You have to choose some items out of the N
 items and carry them home in a knapsack. The capacity of the knapsack is W
 which donate the maximum weight that can be carried inside the knapsack. In other words, W
 means the total summation of all weights of items that can be carried in the knapsack.

Print maximum possible sum of values of items that you can take home.

Note: Solve this problem using recursion.

Input
First line contains two numbers N
 and W
 (1≤N≤20,1≤W≤100)
 number of items and the capacity of the knapsack.

Next N
 lines will contain two numbers wi
 and vi
 (1≤wi≤50,1≤vi≤1000)

Output
Print maximum possible sum of values of items that you can take home.

Examples
InputCopy
3 8
3 30
4 50
5 60
OutputCopy
90
InputCopy
6 15
6 5
5 6
6 4
6 6
3 5
7 2
OutputCopy
17

*/