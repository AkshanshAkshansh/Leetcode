class Solution {
public:
    bool isMatching(char a, char b){
        if(a=='(' && b==')'){
            return true;
        }
        else if(a=='{' && b=='}'){
            return true;
        }
        else if(a=='[' && b==']'){
            return true;
        }
        return false;
    }

    bool isValid(string s) {
    
    stack<char> stk;
    char temp;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk.push(s[i]);
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            if(stk.empty()){
                return false;
            }
            else{
                temp = stk.top();
                if(!isMatching(temp,s[i])){
                    return false;
                }
                stk.pop();
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    else{
        return false;   
    }
    }
};