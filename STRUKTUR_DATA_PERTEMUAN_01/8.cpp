#include<iostream>
using namespace std;
int main(){
	int A=5,B=4;
	while((A&B)==0){
		cout<<"--B = "<<--B<<endl;
		cout<<"(B&A) = "<<(B&A)<<endl;
	}
}
