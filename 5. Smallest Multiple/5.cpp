#include <bits/stdc++.h>
using namespace std;

// Author : Saran
// function to check whether a number is divisible by all numbers from 1 to 20
bool check(int x){
    for(int i=1;i<=20;i++){
        if(x%i!=0){
            return false;
        }
    }
    return true;
}

int main(){
    
    // Bruteforcing all the numbers from 21 until we get the required number
    for(int i=21;;i++){
        // function to check a number 
        if(check(i)){
            cout<<i<<endl;
            return 0;
        }
    }
	return 0;
}