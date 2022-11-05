#include<simplecpp>

int main()
{
  int n;
  cin >> n;
  int a = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (a >= 26)
        a = a % 26;

      cout << char(a + 65) << " ";
      a += 1;
    }
    cout << endl;
  }
}
