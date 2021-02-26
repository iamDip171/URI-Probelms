#include<iostream>
using namespace std ;
int main()
{
	int i,n;
	while(1){
		cin >> n;
		if(n==0) break;
		for(i=1; i<=n-1; i++){
			cout << i << " ";
		}
		cout << n << endl;
	}
}
