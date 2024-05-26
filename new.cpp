#include<iostream>
#include<math.h>

using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}
int func(int x[], int y[], int n){
    if(n<0){
        return 0;
    }
    int res=0;
    res=max(res,x[n]+func(x,y,n-1));
    res=max(res,y[n]+func(x,y,n-2));
    return res;
}
int main(){
    int x[]={5,3,4,6,3};
    int y[]={8,4,3,5,10};
    int n = sizeof(x)/sizeof(x[0]);
    printf("%d",func(x,y,n-1));
    return 0;
}