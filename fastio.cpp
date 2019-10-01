#include<iostream>
using namespace std;

int main(){
         //add these lines for fast input
	//by default sychronization is true
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k,t;
	int count =0;

	cin>>n>>k;

	for(int i=0;i<n;i++){
		cin>>t;
		if(t%k == 0)
			count++;
	}
	cout<<count<<"\n";
return 0;
}
