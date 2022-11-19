#include <bits/stdc++.h>
using namespace std;
int fact(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main() {
	// your code goes here
	int t;
	int sum=0;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int a[n];
	   for(int i=0 ; i < n ; i++){
	       cin>>a[i]; 
	   }
	   for(int i=0; i< n ; i++){
	       sum+=fact(a[i]);
	   }
	   cout<<sum<<endl;

	}
	return 0;
}