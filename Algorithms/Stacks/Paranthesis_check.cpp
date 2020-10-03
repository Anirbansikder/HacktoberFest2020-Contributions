#include<bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define p pair
#define ld long double
#define rep(start,end,i) for(ll i=start;i<end;i++)
#define repb(start,end,i) for(ll i=start-1;i>=end;i--)
#define mp make_pair
#define popc __builtin_popcount()
#define lb lower_bound
#define ub upper_bound
using namespace std;

void solve(){
    ll test=1;
    //cin>>test;
    while(test--)
    {
        printf("Enter The String Consisting Of '(' or ')' You Want To Check : \n");
        string s;
        cin>>s;
        stack <char> st;
        bool flag = true;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(s[i]);
            else
            {
                if(st.empty())
                {
                    flag = false;
                    break;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(!st.empty())
            flag = false;
        if(flag)
            printf("You Entered A Valid String !");
        else
            printf("Oh No , That's Not Valid !");
    }
    return;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}