#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision; 

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

void printPermutations(string str,int l ,int r,set<string> &vec)
{
    if(l==r) 
    {
        vec.insert(str);
        return; 
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(str[l],str[i]);
            printPermutations(str,l+1,r,vec);
            swap(str[l],str[i]);
        }
        return;
    }
}

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
        set<string> vec;
        printPermutations(str,0,str.size()-1,vec);
        cout<<vec.size()<<endl;
        for(auto itr:vec)
        {
            cout<<itr<<endl;
        }
    }
    return 0;
}