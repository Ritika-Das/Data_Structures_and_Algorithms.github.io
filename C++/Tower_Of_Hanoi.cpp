// Tower Of Hanoi Problem
// Recursion

#include<bits/stdc++.h>
using namespace std;


void TOH(int n,int A,int B,int C){

    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<"\n";
        TOH(n-1,B,A,C);
    }
}

int main(){

    int n,a = 1,b = 2,c = 3;
    cin>>n;
    TOH(n,a,b,c);
    return 0;
}