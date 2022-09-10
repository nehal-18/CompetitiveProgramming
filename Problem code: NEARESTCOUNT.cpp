#include <bits/stdc++.h>
#include <cmath>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
  
int main() {
  SPEED;
	int t;
	cin>>t;
	while(t--){
	  static int x,y;
	  cin>>x>>y;
	  int diff=abs(x-y);
	  int z=(int) diff/2+diff%2;
	   cout<<z<<"\n";
}
return 0;
}