#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    int a[n+1],b[n+1];
    a[0]=0,b[0]=0;
    
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }

    for(int i=1;i<=n;i++){
         cin>>b[i];
        if(b[i]<=abs(a[i]-a[i-1]))
          count++;
    }
    cout<<count<<"\n";
  }
	return 0;
}
