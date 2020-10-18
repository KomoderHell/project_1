#include<bits/stdc++.h>
using namespace std;

struct date{
	int d1;
	int d2;
};

bool compare(struct date date1,struct date date2){
	if(date1.d1<date2.d1){
		return true;
	}
	else if(date1.d1 == date2.d1){
		return date1.d2<date2.d2;
	}
	else{
		return false;
	}
}

int main(){
	int n;
	cin>>n;
	
	int best =-1;
	struct date a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].d1>>a[i].d2;
	}
	sort(a,a+n,compare);
	
	for(int i=0;i<n;i++){
		if(best<=a[i].d2){
			best = a[i].d2;
		}
		else{
			best = a[i].d1;
		}
	}
	
	cout<<best;
	
	
	
	
}
