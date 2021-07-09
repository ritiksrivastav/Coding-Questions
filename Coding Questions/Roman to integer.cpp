class Solution {
public:
    int rtoi(char s){
        switch(s){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return -1;
        }
    }
    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(rtoi(s[i])<rtoi(s[i+1])){
                sum+=rtoi(s[i+1])-rtoi(s[i]);
                i++;
                continue;
            }
            sum+=rtoi(s[i]);
        }
        return sum;
    }
};
