//https://codeforces.com/contest/1138/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int count = 1;
	vector<int> store;
	for(auto i = 1;i<n;i++)
	{
		if(a[i]!=a[i-1])
		{
			store.push_back(count);
			count = 1;
		}
		else
			count++;
			
	}
	store.push_back(count);
	/*for(auto i:store)
	cout<<i;
	cout<<endl;
	*/
	int ans = 0 , s = store.size();
	for(auto i = 0;i<s-1;i++)
	{
		int temp = 2*min(store[i] , store[i+1]);
	//	cout<<temp<<endl;
		ans = max(temp , ans);
	}
	cout<<ans;
	return 0;
}
