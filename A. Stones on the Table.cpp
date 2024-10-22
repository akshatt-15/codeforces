#include <iostream>
#include<string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 int n;
 cin>>n;
 string s;
 cin>>s;
 int r=0;
 int g=0;
 int b=0;
 for(int i=1;i<n;i++){
 	if(s[i-1]==s[i])
 	if(s[i]=='R')++r;
 	else if(s[i]=='G'){
 		++g;
 	}
 	else if(s[i]=='B')
 	++b;
 }
 cout<<r+g+b;
  	return 0;
}
