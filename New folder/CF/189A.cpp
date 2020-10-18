#include<bits/stdc++.h>
using namespace std;
 
int t[4001][4];
 
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
 
int dp(int wt[], int n, int m){
//	cout<<n<<" "<<m<<endl;
	
	if(n==0){
//	cout<<1<<endl;
		return 0;
	}
	if(m==0){
//	cout<<2<<endl;
		return -4000;
	}
	if(t[n][m] != -1){
//	cout<<3<<" "<<t[n][m]<<endl;
		return t[n][m];
	}
	if(wt[m-1]<=n){
		return t[n][m] = max(dp(wt,n-wt[m-1],m) + 1,dp(wt,n,m-1));
	}
	else{
		return t[n][m] = dp(wt,n,m-1);
	}
}
 
int main(){
	int n,wt[3];
	memset(t,-1,sizeof(t));
	cin>>n>>wt[0]>>wt[1]>>wt[2];
	
	int ans = dp(wt,n,3);
	
	cout<<ans;
}
