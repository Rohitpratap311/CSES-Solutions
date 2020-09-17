#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision; 

using namespace std;

//#Rohitpratap311
//#Keep Calm And Stay Happy

typedef long long ll;
typedef long double ld;

bool col[8];
bool dia1[16];
bool dia2[16];


void Nqueens(string board[8],int r,int &ans)
{
    if(r==8) { ans++; return; }
    for(int c=0;c<8;c++)
    {
        if(board[r][c]=='.')
        {
            if(!col[c] && !dia1[r-c+7] && !dia2[r+c])
            {
                col[c]=true;
                dia1[r-c+7]=true;
                dia2[r+c]=true;
                Nqueens(board,r+1,ans);
                col[c]=false;
                dia1[r-c+7]=false;
                dia2[r+c]=false;
                
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;
    string board[8];
    for(int i=0;i<n;i++)
    {
        cin>>board[i];
    }
    int ans=0;
    Nqueens(board,0,ans);
    cout<<ans;
    return 0;
}