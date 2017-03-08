#include <bits/stdc++.h>
using namespace std;
long long int calc(long long int n){
	if(n==1) return 2;
	long long int m=n;
	long long int x1,x0,x1p,x0p,ans;
	x1p=0;
	x0p=1;
	while(n>1){
		x1 = (x1p + x0p)%1000000007;
		x0 = (x1p)%1000000007;
		n--;
		x1p=x1;
		x0p=x0;
	}
	ans=(x1+x0)%1000000007;

	x1p=1;
	x0p=0;
	while(m>1){
		x1 = (x1p + x0p)%1000000007;
		x0 = (x1p)%1000000007;
		m--;
		x1p=x1;
		x0p=x0;
	}
	ans =(ans + x1 + x0) % 1000000007;
	return ans;
}
int main(){
	int t;
	scanf("%d",&t);
	long long int n,ans;
	while(t--){
		
		cin>>n;
		cout<<calc(n)<<endl;

		
	}
	return 0;

}
