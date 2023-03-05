#include <string>
class Solution {
public:
    int lengthOfLastWord(string s) {        
        int ans=0;
        int len=s.size();
        int i;
        for(i=len-1;i>=0;i--){
            if(s.at(i)==' '){
                continue;
            }            
            if(s.at(i)!=' '){                
                break;
            }
        }  
        for(;i>=0;i--){
            if(s.at(i)!=' '){
                ans++;
            }
            else{
                break;                
            }
        }                                         
        return ans;        
    }
};