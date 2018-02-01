// "Piggybacking on merge sort to count inversions"
// macsi - merge and count split inversions

#include <bits/stdc++.h>

using namespace std;

int combine(vector <int> &arr, int a, int b)
{
  int arrFrameSize = b-a+1;
  vector<int> aux(arrFrameSize);
  int i = a;
  int j = (a+b)/2+1;
  int lastLeft = j-1;
  int si = 0;
  for( int x = 0; x < arrFrameSize; x++ )
  {
    if( i > lastLeft )
    {
      aux[x] = arr[j];
      j++;
    }
    else
    {
      if( j > b )
      {
        aux[x] = arr[i];
        i++;
      }
      else
      {
        if( (arr[i] <= arr[j]) )
        {
          aux[x] = arr[i];
          i++;
        }
        else
        {
          aux[x] = arr[j];
          si += lastLeft-i+1;
          j++;
        }
      }
    }
  }

  int copyBack = a;
  for( int i = 0; i < arrFrameSize; i++ )
  {
    arr[copyBack] = aux[i];
    copyBack++;
  }
  return si;
}

int macsi(vector <int> &arr, int a, int b)
{
    if( a >= b )
      return 0;
    int x = macsi(arr, a, (a+b)/2);
    int y = macsi(arr, (a+b)/2+1, b);
    int z = combine(arr, a, b);
    return x+y+z;
}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        unsigned int result = macsi(arr, 0, n-1);
        cout << result << endl;
    }
    return 0;
}

