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
        string str;
        cin>>str;
        int arr[26]={0};
        int n=str.size();
        for(int i=0;i<n;i++) { arr[str[i]-'A']++; }
        int even=0,odd=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
            {
                if(arr[i]%2==0) even++;
                else odd++;
            }
        }
        if((n%2==0)&&(odd>0)) { cout<<"NO SOLUTION"; return 0;}
        if((n%2!=0)&&(odd!=1)){ cout<<"NO SOLUTION"; return 0;}
        char ans[n];
        int i=0,j=n-1;
        for(int x=0;x<26;x++)
        {
            if(arr[x]>0)
            {
                if(arr[x]%2!=0)
                {
                    ans[n/2]='A'+x;
                    arr[x]--;
                }
                while(arr[x]!=0)
                {
                    ans[i]='A'+x; i++;
                    ans[j]='A'+x; j--;
                    arr[x]-=2;
                }
            }
        }
        for(int x=0;x<n;x++) { cout<<ans[x]; }
    }
    return 0;
}