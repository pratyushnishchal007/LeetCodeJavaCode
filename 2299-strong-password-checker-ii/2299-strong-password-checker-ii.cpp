class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool upper=false;
        bool lower=false;
        bool special=false;
        bool digit=false;
        int len=password.length();
        if(len<8){
            return false;
        } 
            if(password[0]>='A' && password[0]<='Z'){
                upper=true;
            }
            if(password[0]>='a' && password[0]<='z'){
                lower=true;
            }
            if(password[0]>='0' && password[0]<='9'){
                digit=true;
            }
            if(password[0]=='!' || password[0]=='@' || password[0]=='#' || password[0]=='$' || password[0]=='%' || password[0]=='^' || password[0]=='&' ||                      password[0]=='*' || password[0]=='(' || password[0]==')' || password[0]=='-' || password[0]=='+'){
                special=true;
            }
        for(int i=1;i<len;i++){
            if(password[i]==password[i-1]){
                return 0;
            }
            if(password[i]>='A' && password[i]<='Z'){
                upper=true;
            }
            if(password[i]>='a' && password[i]<='z'){
                lower=true;
            }
            if(password[i]>='0' && password[i]<='9'){
                digit=true;
            }
            if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' ||                      password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+'){
                special=true;
            }
        }
        return (upper & lower & digit & special);
    }
};