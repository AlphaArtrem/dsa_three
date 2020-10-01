#include <iostream>
#include <string>

using namespace std;

string addStrings(string large, string small);

int main(){
    int n;
    cout<<"Enter the postion of fibonnaci number (n) to calculate : ";
    cin>>n;

     if(n < 0){
            cout<<"n can't be less than 0";
        }else if(n <= 2){
            cout<<n - 1;
        }else{
            string secondLast = "0";
            string last = "1";
            string fibonnaciNumber = addStrings(last, secondLast);
            for(int i = 3; i < n; i++){
                secondLast = last;
                last = fibonnaciNumber;
                fibonnaciNumber = addStrings(last, secondLast);
            }
            cout<<fibonnaciNumber;
        }
        
    return 0;
}

string addStrings(string large, string small){
    string res = "";

    int64_t long_len = large.length() - 1;
    int64_t short_len = small.length() - 1;
    int digit_sum, carry = 0;

    for(; short_len >= 0; short_len--, long_len--){
        // Adding two individual digits from our number staring from the end
        // The carry is added if our last sum was more than 10 on first iteration it's 0
        digit_sum = large[long_len] - '0' + small[short_len] - '0' + carry;
    
        //If the sum is more than 10 for current digits get the once place to append and other as carry    
        if(digit_sum > 9){
            carry = digit_sum / 10;
            digit_sum %= 10; 
        }else{
            carry = 0;
        }

        res = to_string(digit_sum) + res;
    }

    long_len = large.length() - 1;
    short_len = small.length() - 1;

    // If the numbers are of uneven length make sure to add carry till the end
    for(long_len = long_len - short_len - 1; long_len >= 0; long_len--){
        digit_sum = large[long_len] - '0' + carry;

        if(digit_sum > 9){
            carry = digit_sum / 10;
            digit_sum %= 10; 
        }else{
            carry = 0;
        }

        res = to_string(digit_sum) + res;
    }

    if(carry > 0){
        res = to_string(carry) + res;
    }
    
    return res;
}