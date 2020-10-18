#include<bits/stdc++.h>
using namespace std;

long long f[1000000003];
long long N=1000000002;
long long M = 1000000007;

int main(){
	f[0]=0;f[1]=1;
	for(long long i=2;i<=N;i++){
		f[i]=(f[i-1]+f[i-2])%M;
	}
	long long t,n,m;
	cin>>t;
	long long b[t];
	for(long long i=0;i<t;i++){
		cin>>n>>m;
		b[i]=f[m+2]-f[n+2];
	}
	
	for(long long i=0;i<t;i++){
		cout<<b[i]<<endl;
	}
	
	
}
