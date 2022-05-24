#include<simplecpp>

bool rep(int x, int arr[], int i)
{
  for (int k = 0; k < i; k++)
  {
    if (x == arr[k])return true;
  }
  return false;
}

main_program{
  int k; cin >> k;
  repeat(k)
  {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
      if (rep(arr[i], arr, i))continue;
      else cout << arr[i] << " ";
    }
    cout << endl;
  }

}