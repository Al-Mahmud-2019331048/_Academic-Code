#include<bits/stdc++.h>
using namespace std;

stack<int>st;

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
                st.push(n);
                break;
            case 2:
                if(!st.empty())
                    st.pop();
                break;
            case 3:
                if(!st.empty())
                   printf("%lld\n",st.top());
                else
                   printf("Empty!\n");
        }

    }
    
    return 0;
}
