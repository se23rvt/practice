#include<iostream>
#include<math.h>

using namespace std;

void find(int arr[], int n){
    int whocares = INT_MIN; 
    for(int i=n-1;i>=0;i--){
        if(arr[i]>whocares){
            whocares = arr[i];
            printf("%d ", arr[i]);
        }
    }
}
int main(void){
    int arr[]={10,4,6,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    find(arr,n);
    return 0;
}