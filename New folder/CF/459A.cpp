#include <bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2,d;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2 && y1!=y2){
		d=abs(y2-y1);
		cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
	}
	else if(x1!=x2 && y1==y2){
		d=abs(x2-x1);
		cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;
	}
	else{
		if((x1-x2)==(y1-y2) || (x1-x2)==(y2-y1)){
			cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
	
			
		}
		else{
			cout<<-1;
		}
	}
}
