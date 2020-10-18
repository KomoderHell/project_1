#include<bits/stdc++.h>
using namespace std;

long long n,w,b;

bool good(long long m){
	return (m/w)*(m/b) >=n;
}
int main(){
	cin>>w>>b>>n;
	
	long long l = 0;
	long long h = 1;
	while(!good(h)) h*=2;
	long long res=-1;
	
	while(l<=h){
		long long m = l+ (h-l)/2;
		
		if(good(m)){
			res = m;
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	
	cout<<res;
	
	
}
