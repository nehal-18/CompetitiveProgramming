#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	vector<int> currs= vector<int>({1,2,5,10,50,100});
	while(t--){
	    int n;
	    cin>>n;
	    
	    int c = currs.size();
	    int sum=n;
	    long long int ans=0;
	    for(int i=c-1;i>=0;i--){
	        ans+=sum/currs[i];
	        if (sum/currs[i]>0){
	            sum = sum%currs[i];
	        }
	    }
	    
	    cout<<ans<<endl;
	    
	}
	return 0;
}
