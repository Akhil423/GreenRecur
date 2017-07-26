#include<iostream>

using namespace std;

int a[5];

void mergeit(int *a,int lo,int mi,int up)
{

    int i,j,k;
    int n1,n2;
    n1=mi-lo+1;
    n2=up-m;

    int l[n1],u[n2];

    for(i=0;i<n1;i++)
    l[i]=a[i];
    for(j=0;j<n2;j++)
    u[j]=a[j];

    i=0,j=0,k=lo;

    while(i<n1 && j<n2){

    if(l[i]<=u[i]){

        a[k]=l[i];
        i++;
    }
    else{

        a[k]=u[j];
        j++;
    }
    k++;

    }

    while(i<n1){

    a[k]=l[i];
    i++;
    k++;
    }


    while(j<n2){

    a[k]=u[j];
    j++;
    k++;
    }

}
void fundiv(int *a,int lo,int up){

    if(lo<up){

        int mid=lo+(up-lo)/2;

        fundiv(a,lo,mid);
        fundiv(a,mid+1,up);

        mergeit(a,lo,mid,up);

    }

}
