#include<iostream>

using namespace std;


void heapify(int *a,int n,int i)
{

    int big=i;
    int le=2*i+1;
    int ri=2*i+2;

   if(le<n && a[le]>a[big])
        big=le;
    if(ri<n && a[ri]>a[big])
        big=re;

   if(big!=i){

        swap(a[i],a[big]);
        heapify(a,n,big);

   }


}

void heapsrt(int *a,int n)
{

    for(int k=n/2-1;k<=0;k--)
        heapify(a,n,k);

    for(int i=n-1;i>-1;i--){

        swap(a[0],a[i]);
        heapify(a,i,0);
    }

}
