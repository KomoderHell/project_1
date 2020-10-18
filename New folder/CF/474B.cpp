#include<bits/stdc++.h>
using namespace std;
int search(int a[],int r,int l,int temp){
	int mid = (l+r)/2;
	if(l==r){
		return mid;
	}
	else if(a[mid]>=temp){
		return search(a,r,mid,temp);
	}
	else if(a[mid]<temp){
		return search(a,mid+1,l,temp);
	}
}
int main(){
	int n,m,sum=0,temp;
	string ans =" ";
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>temp;
		sum+=temp;
		a[i]=sum;
	}
	cin>>m;
	int b[m];
	for(int i = 0;i<m;i++){
		cin>>temp;
		b[i] = search(a,0,n-1,temp);
	}
	for(int i = 0;i<m;i++){
		cout<<b[i] +1<<endl;
	}
}
