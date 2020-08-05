// Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

// Example 1:

// Input: 121
// Output: true

// Example 2:

// Input: -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// Example 3:

// Input: 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.



#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
        long rev=0;
        int k=x;
        while(x>0){
            int curr = x%10;
            rev = rev*10 + curr;
            x/=10;
        }
        if(rev==k) return true;
        else return false;
    }
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<isPalindrome(n)<<endl;
    }
}