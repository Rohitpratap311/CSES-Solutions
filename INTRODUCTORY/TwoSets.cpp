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
        ll sum=(n*(n+1))/2;
        if((sum%2==0)&&n>2)
        {
            vector<ll> vec1;
            vector<ll> vec2;
            ll msum=sum/2;
            while(n)
            {
                if(msum-n>=0)
                {
                    vec1.push_back(n);
                    msum-=n;
                }
                else
                {
                    vec2.push_back(n);
                }
                n--;
            }
            cout<<"YES"<<endl<<vec1.size()<<endl;
            for(auto i:vec1) { cout<<i<<' '; }
            cout<<endl<<vec2.size()<<endl;
            for(auto i:vec2) { cout<<i<<' '; }
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}