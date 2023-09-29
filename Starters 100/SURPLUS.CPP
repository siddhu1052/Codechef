#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i,j;
	    int a1,a2,b1,b2;
	    cin>>a1>>a2>>b1>>b2;
	    int x=a1-a2;
	    int y=b1-b2;
	    if(x+y<0){
	        cout<<"YES";
	    }else cout<<"NO";
	    cout<<endl;
	}
	return 0;
}