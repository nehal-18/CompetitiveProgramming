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

//method 2 easy:

#include <iostream>
using namespace std;

void CountNote(int n){
  int note=0;
  while(n>=1){
    if(n>=100){
       note=note+(n/100);
       n=n%100;
    }
    if(n>=50){
       note=note+(n/50);
       n=n%50;
    }
    if(n>=10){
       note=note+(n/10);
       n=n%10;
    }
    if(n>=5){
       note=note+(n/5);
       n=n%5;
    }
    if(n>=2){
	     note=note+(n/2);
       n=n%2;
    }
    if(n>=1){
       note=note+n;
       n=0;
    }
    }
	 cout<<note<<"\n";
	}

int main() {
	int t;
	cin>>t;
	while(t--){
	  static int n;
	  cin>>n;
	  CountNote(n);
	}
	return 0;
