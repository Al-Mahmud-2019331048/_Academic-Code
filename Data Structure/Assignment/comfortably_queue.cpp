#include<bits/stdc++.h>
using namespace std;

queue<long long int>qu;

int main()
{
    ios::sync_with_stdio(0);cin.tie(nullptr);
    long long int t;
    scanf("%lld",&t);
    
    for (int i = 0; i < t; ++i)
    {
        long long int n;
        int q;
        scanf("%d",&q);
        if(q==1)
            scanf("%lld",&n);
        switch(q){
            case 1:
                qu.push(n);
                break;
            case 2:
                if(!qu.empty())
                    qu.pop();
                break;
            case 3:
                if(!qu.empty())
                   printf("%lld\n",qu.front());
                else
                   printf("Empty!\n");
        }

    }
    
    return 0;
}
