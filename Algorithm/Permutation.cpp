#include<bits/stdc++.h>
using namespace std;
#define sz 1000

bool vis[sz];
vector<int>order;

//O(n!*n)

void permutation(int n){

	//printing permutation (total n! orders)
	if(order.size()==n){
		for(auto x: order)
			cout<<x<<" ";
		cout<<endl;
	}

	for (int i = 1; i <= n; ++i)
	{
		if(vis[i]) continue;
		order.push_back(i);
		vis[i]=1;
		permutation(n);    //backtracking
		order.pop_back();
		vis[i]=0;
	}
}


int main(){
	int n;
	cin>>n;

	permutation(n);
}