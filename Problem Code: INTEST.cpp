//Write a single integer to output, denoting how many integers ti are divisible by k.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;

    int count=0;
    for (int i=0;i<=n-1;i++)
    {
        static int a;
        cin >> a;
        if (a%k==0)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}