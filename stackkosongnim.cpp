#include<iostream>
#define n 10
using namespace std;
int main(){
	int S[n], top, x;
	top=-1;
	cin>>x;
	while(x!=136){
		if(x>100){
			if(top<n-1){
				S[++top]=x;}
			else
				cout<<"Stack Penuh";
		}
		
		else{
			if(top>-1){
				x=S[top--];
				cout<<x;
				}
			else
				cout<<"Stack Kosong";
		}
			cin>>x;
			
	}
}
