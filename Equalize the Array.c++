# Hackerrank-solution
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main(){
    int count,max,i,j;
    int arr[100],n;
    max=0;
    
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n-1;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        if(count>max){
            max=count;
        }
            
        }
        
    }
    cout<<n-max;
    
}
