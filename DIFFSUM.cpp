/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/DIFFSUM/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	if(a>b)
	  cout<<(a-b);
	else
	  cout<<(a+b);
	return 0;
}
