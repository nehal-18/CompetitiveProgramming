#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
using namespace std;
using namespace boost::multiprecision;

int main() {
	SPEED;
	int t;
	cin>>t;

	while(t--){
	  static int n,a,b;
	  double x,y;
	  cin>>n>>x>>y>>a>>b;
	  double r1=a/x;
	  double r2=b/y;
	 
	  
	  if(r2>r1){
	    cout<<"DIESEL"<<"\n";
	  }
	  else if(r2<r1){
	    cout<<"PETROL"<<"\n";
	  }
	  else{
	    cout<<"ANY"<<"\n";
	    }
	 }
	  return 0;
}
	 
