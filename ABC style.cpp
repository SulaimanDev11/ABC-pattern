#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char ch1='F';
	for(int i=1;i<=6;i++){
		for(char ch='A';ch<=ch1;ch++){
			cout<<ch;
		}
	for(int sp=1;sp<=2*i-2;sp++){
			cout<<" ";
		}
	for(char ch=ch1;ch>='A';ch--){
		cout<<ch;
		}
		ch1--;
		cout<<endl;
	}
	
	return 0;
}
