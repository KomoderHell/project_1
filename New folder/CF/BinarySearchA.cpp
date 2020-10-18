#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<k;i++){
		int x;
		bool f=false;
		cin>>x;
		int l=0,h=n-1;
		while(l<=h){
			int m = l + (h-l)/2;
			
			if(a[m]==x){
				f=true;
				break;
			}
			else if (a[m]>x){
				h = m-1;
			}
			else if(a[m]<x){
				l = m+1;
			}
		}
		if(f){
			cout<<"YES\n";
		}	
		else{
			cout<<"NO\n";
		}
	}
}
