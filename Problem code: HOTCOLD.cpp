#include <iostream>
#include <stdio.h>
#define sp ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
   int t;
   scanf("%d",&t);
   while(t>=1){
       static int c;
       scanf("%d",&c);
       if(c>=0 &&c<=40){
       string result=(c>20)?"HOT":"COLD";
       cout<<result<<"\n";
       }
       t--;
   }
	return 0;
}
