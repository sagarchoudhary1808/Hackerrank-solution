# Hackerrank-solution
#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> myset;
  string s;
  cin >> s;
  string ans = "NO";

  
  int arr[26] = {};
  int n = s.length();

  for (int i = 0; i < n; i++) {
    
    arr[s[i] - 'a']++;
  }

  
  for (int i = -1; i < 26; i++) {
    
    if (i >= 0 and arr[i] == 0)
      continue;


    if (i >= 0)
      arr[i]--;

    
    set<int> myset;

    
    for (int j = 0; j < 26; j++) {
      if (arr[j])
        myset.insert(arr[j]);
    }

    
    if (myset.size() == 1)
      ans = "YES";

    
    if (i >= 0)
      arr[i]++;
  }
  cout << ans << endl;
  return 0;
}
