class Solution {
public:
    int myAtoi(string str) {
        long res=0;
        int sign=1;
        bool start=false;
        for (int i=0; i<str.length(); i++){
            if (str[i]=='-'||str[i]=='+'){
                start=true;
                if (str[i]=='-'){
                    sign=-1;
                }
                i++;
            }
            if (str[i]==' '&& !start){
                continue;
            }
            if (str[i]<'0' || str[i]>'9'){
                 
                break;}
            else{
                start=true;
                res=res*10+(str[i]-'0');
                if (res*sign>INT_MAX)
                    return INT_MAX;
                else if (res*sign<INT_MIN)
                    return INT_MIN;
                if (str[i+1]<'0'||str[i+1]>'9') break;
            }
        }
        return res*sign;
    }
};

