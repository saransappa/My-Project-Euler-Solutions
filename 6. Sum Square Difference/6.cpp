#include <bits/stdc++.h>
using namespace std;

int sum_square(int a){
	int sum=0;
	for(int i=1;i<=a;i++){
		sum+=i;
	}
	return sum*sum;
}

int squares_sum(int a){
	int sum=0;
	for(int i=1;i<=a;i++){
		sum+=i*i;
	}
	return sum;
}

int main(){
	int ans = sum_square(100)-squares_sum(100);
	cout<<ans<<endl;
	return 0;
}
