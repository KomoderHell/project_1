#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<< "working\n"
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>k;

	for(int i=0;i<k;i++){
		int x,y;
		int start=-1,end=n;
		cin>>x>>y;
		int l=0,h=n-1;
		while(l<=h){
			int m = l + (h-l)/2;

			if(a[m]==y){
				l = m+1;
			}
			else if (a[m]>y){
				h = m-1;
				end =m;
			}
			else if(a[m]<y){
				l = m+1;
			}
		}
		l=0;h=n-1;
		while(l<=h){
			int m = l + (h-l)/2;

			if(a[m]==x){
				h = m-1;
			}
			else if (a[m]>x){
				h = m-1;
			}
			else if(a[m]<x){
				l = m+1;
				start = m;
			}
		}

		cout<<end-start-1<<" ";
	}
}
