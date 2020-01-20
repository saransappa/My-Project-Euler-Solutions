#include <bits/stdc++.h>
using namespace std;

// Function to check whether a number is palindromic  
bool check_pal(int x){
	string k=to_string(x);
	int i=0;
	int j=(k.size())-1;
	while(i<=j){
		if(k[i]!=k[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main(){
    vector<int> v ;
    
    //bruteforcing all the pairs of 3 digit numbers
	for(int i=999;i>=100;i--){     
		for(int j=999;j>=100;j--){
	       // checking whether i*j is a palindromic number          
			if(check_pal(i*j)){
                // pushing the number into a vector if it is palindromic
                v.push_back(i*j);
			}
		}
	}
	//sorting the vector in ascending order
	sort(v.begin(),v.end());
	//Printing the required largest palindromic number 
	cout<<v[v.size()-1]<<endl;
	return 0;
}