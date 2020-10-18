#include<bits\stdc++.h>
using namespace std;

int noOfBooks(int a[],int l,int h,int t){
	int res = l-1;
	if(l>0){
		 t = t + a[l-1];
	}
	while(l<=h){
		int mid = l + (h-l)/2;
		if(a[mid] == t){
			res = mid;
			break;
		}
		else if(a[mid]>t){
			h = mid-1;
		}
		else if(a[mid]<t){
			res = mid;
			l = mid+1;
		}
	}
	return res;
}

int main(){
	int n,t;
	cin>>n>>t;
	
	int temp = 0,a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i] += temp;
		temp = a[i];
	}

	int books = -1;
	for(int i =0 ;i<n;i++){
		int b = noOfBooks(a,i,n-1,t) - i +1 ;
		
		
		
		if(b>books){
			books = b;
		}
		
	}
	
	cout<<books;
	
	
	
}
