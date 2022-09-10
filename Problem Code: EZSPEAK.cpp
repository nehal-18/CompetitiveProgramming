/*
Problem Code:EZSPEAK
*/
#include <cstdio>
#include <iostream>
#include "Pre-Processors.h"

using namespace std;

void check(){
    int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		string s;
		cin >> s;
		
		bool flag = 0;
		int ct = 0;
		for(int i=0; i<n; i++){
			if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
				ct=0;
			}
			else{
				ct++;
			}
			if(ct==4){
				flag=1;
				break;
			}
		}
		
		if(flag) cout << "NO" << "\n";
		else cout << "YES" << "\n";
	}
}

int main(){
    sp
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
    check();
}