#include <iostream>
using namespace std;

int recursive(int n)
{
  // Base case
  if (n == 0 || n == 1)
    return 1;

  // Recursive call
  return n * recursive(n - 1);
}

int main()
{
  cout << "Enter any number: ";
  int n;
  cin >> n;

  int ans = recursive(n);
  cout << "Factorial of " << n << " is: " << ans << endl;

  // Calculate S-series: sum of 1! + 2! + ... + n!
  int sum = 0;
  for (int i = 1; i <= n; ++i)
  {
    sum += recursive(i);
  }

  cout << "Sum of series 1! + 2! + ... + " << n << "! is: " << sum << endl;

  return 0;
}
