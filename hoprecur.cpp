#include<iostream>

using namespace std;

int fun(int n,int l,int k){

if(n==0)
return 0;
if(n==1)
return 1;
if(n==2)
return 1;

return fun(n-l,l,k)+fun(n-k,l,k);

}
