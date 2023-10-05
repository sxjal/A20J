//  http://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>

using namespace std;

int main(){

	vector<int> input;

	int n,k;
	cin>>n;
	k = 0;
	int result = 0;
	for(int i = 0 ; i < n ; i++)
	{
		 
		for(int j = 0 ; j<3 ; j++)
		{

		cin>>k;
		result +=k;

		}
	
	}

 result == 0 ? cout<<"YES\n" : cout<<"NO\n";

	
	return 0;
}
