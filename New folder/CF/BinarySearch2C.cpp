#include<bits/stdc++.h>
using namespace std;

int n,x,y;

bool good(int m){
	return (m/x) + (m/y) >=n;
}
int main(){
	cin>>n>>x>>y;
	
	int l = 0;
	int h = n*max(x,y);
	
	int res=-1;
	n--;
	
	while(l<=h){
		int m = l+ (h-l)/2;
		
		if(good(m)){
			res = m;
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	
	cout<<res+min(x,y);
	
	
}
