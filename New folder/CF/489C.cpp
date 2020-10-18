#include<bits/stdc++.h>
using namespace std;

int ansMax[100];
int ansMin[100];

int main(){
	int m,s;
	cin>>m>>s;

	
	
	int sub = 9;
	 
	
	 
	if(s>m*9 || (s==0 && m>1) ){
		cout<<"-1 -1";
		return 0;
	}
	
	
	
	for(int i=0;i<m;i++){
		if(sub<=s){
			s -= sub;
			ansMin[m-1-i] =sub;
			ansMax[i] = sub;
			
			if(s==0 && i<m-1){
			ansMin[m-1-i] =sub-1;
			ansMin[0] = 1;
			break;
			}
		}
		else{
			sub--;
			i--;
		}
		
	}
	
	for(int i=0;i<m;i++){
		cout<<ansMin[i];
	}
	cout<<" ";
	
	for(int i=0;i<m;i++){
		cout<<ansMax[i];
	}
}
