#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//MY FIRST PROGRAM IN CPP
	//JAVA WAS SLOW :(
	//#Rohitpratap311
	long n;
	cin >> n;
	if(n==1) cout<<"1";
	else if(n<4)  cout<<"NO SOLUTION";
	else if(n==4) cout<<"2 4 1 3";
	else
    {
    for(long i=1;i<n+1;i=i+2)
	{
	cout<<i<<" ";
	}
	for(long i=2;i<n+1;i=i+2)
	{
	cout<<i<<" ";
	}
    }
	return 0;

}