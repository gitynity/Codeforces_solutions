//https://codeforces.com/contest/1138/problem/A


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a , b, n , x , y;
    cin>>a>>b>>n;
    

for (int i = 0; i * a <= n; i++) 
{ 
  
    // check if it is satisfying the equation 
    if ((n - (i * a)) % b == 0) { 
        x = i; 
        y = (n - (i * a)) / b;
        cout<<"Yes\n";
        return 0;
    }
}
cout<<"No\n";

    
    return 0;
}
