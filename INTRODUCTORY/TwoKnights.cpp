#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

int twoKnights(int n)
{
    if(n==1) { return 0; }
    //if(n==2) { return 6; }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            int left=((n-1-i)*n)+(n-1-j);
            //cout<<left<<' ';
            if(i+2<n)
            {
                if(j+1<n)  { left--; }
                if(j-1>=0) { left--; }
            }
            if(j-2>=0)
            {
                if(i+1<n)  { left--; }
            }
            if(j+2<n)
            {
                if(i+1<n)  { left--; }
            }
            //cout<<left<<endl;
            ans+=left;
        }
    }
    return ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    for(ll n=1;n<=t;n++)
    {
        //cout<<twoKnights(i)<<endl;
        cout<<(n*n*(n*n-1))/2 - 4*(n-1)*(n-2)<<endl;
    }
    return 0;
}