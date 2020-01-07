#include <bits/stdc++.h>
using namespace std;

int fib(int a){
	if(a==0){
		return 1;
	}
	else if(a==1){
		return 2;
	}
	else{
		return fib(a-1)+fib(a-2);
	}
}

int main(){
	long long int sum=0;
	for(int i=0;fib(i)<4000000;i++){
		int k=fib(i);
		if(k%2==0){
			sum+=k;
		}
	}
	cout<<sum<<endl;
	return 0;
}
