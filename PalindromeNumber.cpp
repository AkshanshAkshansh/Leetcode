class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        
        if(num<0){
            return false;
        }

        int d;
        long long rev=0;
        while(num!=0){
            d=num%10;
            rev=(rev*10) + d;
            num=num/10;
        }        
        if(rev==x){
            return true;
        } else {
            return false;
        }
    }
};