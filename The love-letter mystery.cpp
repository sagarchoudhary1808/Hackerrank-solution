# Hackerrank-solution
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--){
        string str;
        cin>>str;
        int s=0;
        for(int i=0;i<str.length()/2;i++){
            s+=abs(str[i]-str[str.length()-i-1]);
        }
        cout<<s<<endl;
   }
   return 0;
}
