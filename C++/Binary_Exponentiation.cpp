#include<bits/stdc++.h>
using namespace std;
//Recursive function 
long long binary_exponentiation(long long a, long long b){
    if(b==0){
        return 1;
    }
    long long result = binary_exponentiation(a,b/2);
    long long ans;
    if(b%2==0){
        ans = result*result;
    }
    else{
        ans = result*result*a;
    }
    return ans;
}
//Driver code
int main(){
    cout<<binary_exponentiation(3,10)<<endl;
    return 0;
}