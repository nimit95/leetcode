class Solution {
public:
    int romanToInt(string s) {
        int a[26];
        int num=0;
        for(int i=0;i<26;i++)
            a[i]=0;
        a[2]=100;a[8]=1;a[21]=5;a[23]=10;a[11]=50;a[3]=500;a[12]=1000;
        for(int i=0;i<s.length();i++)
        {
            if(i==s.length()-1)
                num=num+a[(int)s[i]-65];
            else if(a[(int)s[i]-65]>=a[(int)s[i+1]-65]){

                num=num+a[(int)s[i]-65];
                cout<<(int)s[i]-65<<"   ";
            }
            else{
                num=num - a[(int)s[i]-65];
            }
        }
        return num;
    }
};
