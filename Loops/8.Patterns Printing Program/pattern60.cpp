/*
*********
 *******
  *****
   ***
    *
    *
   ***
  *****
 *******
*********

*/

#include<iostream> 
using namespace std;
 
int main() {
    int n =5;
    
    //upper part
    for(int i=1; i<=n;i++) {
    	for(int j=1; j<i;j++)
    	    cout<<" ";
	    for(int k=1; k<=n-i+1; k++)
	        cout<<"*"; 
	    for(int l=n-i;l>=1;l--)
	        cout<<"*";
	    cout<<endl;
    }
    
    //lower part
    for(int i=1; i<=n; i++) {
    	for(int j=1; j<=n-i; j++)
    	    cout<<" ";
    	for(int k=1; k<=i; k++)
    	    cout<<"*"; 
    	for(int l=i-1;l>=1;l--)
    	    cout<<"*";
    	cout<<endl;
    }

    return 0;
 }
