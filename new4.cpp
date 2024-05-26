#include<iostream>
#include<math.h>

using namespace std;
int laz(int x){
    int i=1;
    while(i*i<=x){
        i++;
    }
    return i-1;

}
int main(void){
    printf("%d\n",laz(16));
    return 0;
}