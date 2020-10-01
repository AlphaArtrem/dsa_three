#include <iostream>

using namespace std;

int64_t gcd(int64_t a, int64_t b);

int main(){
    int64_t a, b;
    cout<<"Enter the numbers for which you want to calculate GCD :"<<endl;
    cin>>a>>b;

    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<gcd(a, b);

    return 0;
}

int64_t gcd(int64_t a, int64_t b){
    if(a == 0 || a == b){
        return b;
    }else if(b == 0){
        return a;
    }
    else{
        if(a > b){
            return gcd(b, a % b);
        }else{
            return gcd(a, b % a);
        }
    }
}