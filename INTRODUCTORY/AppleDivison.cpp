#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll sum=0,ans=1e18;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(ll i=0;i<(1<<n);i++)
        {
            ll temp=0;
            for(ll j=0;j<n;j++)
            {
                if(i&(1<<j)) { temp+=arr[j]; }
            }
            temp=abs((sum-2*temp));
            ans=min(ans,temp);
        }
        cout<<ans;

    }
    return 0;
}
