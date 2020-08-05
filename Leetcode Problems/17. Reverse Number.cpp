// Given a 32-bit signed integer, reverse digits of an integer.

// Example 1:

// Input: 123
// Output: 321

// Example 2:

// Input: -123
// Output: -321

// Example 3:

// Input: 120
// Output: 21

// Note:
// Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
        bool neg = false;
        if(x==INT_MIN || x==INT_MAX)
            return 0;
        if(x<0)
        {
            neg = true;
            x=-x;
        }
        long rev_num=0;
        while(x>0){
            int curr_dgt = x%10;
            rev_num = rev_num*10 + curr_dgt;
            if(rev_num > INT_MAX)
                return 0;
            x/=10;
        }
        rev_num = (int) rev_num;        
        return (neg==true)?-rev_num:rev_num; 
    }
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        cout<<reverse(x)<<endl;
    }
}