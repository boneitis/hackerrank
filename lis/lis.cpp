// GeeksforGeeks Sol

#include <bits/stdc++.h>

using namespace std;

// Binary Search
int CeilIndex( vector<int> &arr, int l, int r, int key )
{
  while( r-l > 1 )
  {
    int m = l + (r-l)/2;
    if( arr[m] >= key )
      r = m;
    else
      l = m;
  }
  return r;
}

int longestIncreasingSubsequence(vector <int> arr)
{
  if( arr.size() == 0 )
    return 0;
  vector<int> tail(arr.size(), 0);
  int length = 1;

  tail[0] = arr[0];
  for( int i = 1; i < arr.size(); i++ )
  {
    // Case 1 - arr[i] smaller than all last-value of candidate lists
      // insert into tail[0] the lowest value found thus far from arr
    if( arr[i] < tail[0] )
      tail[0] = arr[i];
    // Case 2 - arr[i] larger than all last-value of candidate lists
      // append arr[i] to tail
    else if( arr[i] > tail[length-1])
      tail[length++] = arr[i];
    // Case 3 - arr[i] neither largest nor smallest
      // overwrite in tail the smallest value that is larger than arr[i] with arr[i]
    else
      tail[CeilIndex(tail, -1, length-1, arr[i])] = arr[i];
  }
  return length;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = longestIncreasingSubsequence(arr);
    cout << result << endl;
    return 0;
}

