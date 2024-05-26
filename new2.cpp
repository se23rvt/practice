#include<iostream>
#include<math.h>

using namespace std;

unsigned int bingo(const unsigned int n, const unsigned int d){
    return n &(d-1);
}

int main(){
    const unsigned int n= 18;
    const unsigned int s=3;
    const unsigned int d=10<<s;
    unsigned int m;
    m=bingo(n, d);
    printf("%d\n", m);
    return 0;
}