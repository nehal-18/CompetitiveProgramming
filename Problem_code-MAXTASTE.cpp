#include <iostream>
#include <stdio.h>
#define sp ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
   int t;
   scanf("%d",&t);
   while(t>=1){
       static int a,b,c,d,max_sum;
       cin>>a>>b>>c>>d;
       int max_of_first=(a>=b)? a:b;
       int max_of_second=(c>=d)? c:d;
       max_sum=max_of_first+max_of_second;
       cout<<max_sum<<"\n";
       t--;
   }
	return 0;
}

