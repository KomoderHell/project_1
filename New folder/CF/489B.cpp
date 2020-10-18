#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,count =0,i=0,j=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>m;
	int b[m];
	for(i=0;i<m;i++){
		cin>>b[i];
	}
	i=0;
	j=0;
	sort(b,b+m);
	while(i<n || j<m){
		if(a[i]==b[j] || a[i]-b[j]==1 ||a[i]-b[j]==-1){
			count++;
			i++;
			j++;
		}
		else{
			if(a[i]<b[j]){
				i++;
			}
			else{
				j++;
			}
		}
	}
	cout<<count;
	
	
}
