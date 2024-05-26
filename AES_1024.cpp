#include<bits/stdc++.h>
using namespace std;

int KeyGenerator(int k,int e ,int choice){
    /*  k is some integar number
        e is some exponent value
        choice: 1 is for public key
                2 is for private key
    */ 
    int PrivateKey = 0, P = 53, Q = 59;
    int PublicKey = P*Q;
    if(choice == 1){
        return PublicKey;
    }
    int Phi_N = (P-1)*(Q-1);
    PrivateKey = (k*Phi_N + 1)/e;
    return PrivateKey;
}  

int main(){
    int PublicKey = KeyGenerator(2,3,1);
    int PrivateKey = KeyGenerator(2,3,2);
    //cout<<"Public Key: "<<PublicKey<<"\nPrivate Key: "<<PrivateKey<<endl;
    return 0;
}