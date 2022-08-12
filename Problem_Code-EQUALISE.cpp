#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr1[], int l, int r, int x)
{
    if (r >= l) {
      //mid=low+(high-low)/2 will handle larger integer value 
      //Which will prevent integer overflow 
        int mid = l + (r - l) / 2;
        if (arr1[mid] == x)
            return mid;
 
       
        if (arr1[mid] > x)
            return binarySearch(arr1, l, mid - 1, x);
 
        return binarySearch(arr1, mid + 1, r, x);
    }
 //If element is not found
    return -1;
}

int main(){
  
  int t;
  cin>>t;
  
  while(t--){
    int a,b;
    cin>>a>>b;
    
    if(a==b)
      cout<<"YES"<<"\n";
      
    if(a<b){
      int arr1[5];
      for(int i=0,x=1;i<5,x<6;i++,x++){
        arr1[i]=a*pow(2,x);
      }
      int n = sizeof(arr1) / sizeof(arr1[0]);
      int result = binarySearch(arr1, 0, 4, b);
      (result == -1)
        ? cout << "NO"<<"\n"
        : cout << "YES" <<"\n";
    }
    //Here i will not sort array because it is already
    //accepting values in ascending order
    if(a>b){
      int arr2[5];
      for(int i=0,x=1;i<5,x<6;i++,x++){
        arr2[i]=b*pow(2,x);
      }
      int p = sizeof(arr2) / sizeof(arr2[0]);
      int result = binarySearch(arr2, 0, 4, a);
      (result == -1)
        ? cout << "NO"<<"\n"
        : cout << "YES" <<"\n";
    }
    
  }
  return 0;
}