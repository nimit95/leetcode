class Solution {
public:
    string convert(string s, int numRows) {
        int d=2*(numRows-1);
        vector<char> v;
        for(int i=1;i<=numRows;i++)
        {
            int temp=0;
            int a1=i,a2=d-i+2;
            if(i>1 && i<numRows)
            {
                temp=0;
                while(a1<=s.length() || a2<=s.length())
                {
                    temp++;
                    if(temp%2==1)
                    {
                        cout<<i+((temp+1)/2-1)*d;//<<"  "<<a2;
                        a1=i+((temp+1)/2)*d;
                        v.push_back(s[i+((temp+1)/2-1)*d-1]);
                    }
                    else{
                       // cout<<"hello";
                        cout<<d-i+2+((temp+1)/2-1)*d;
                        a2=d-i+2+((temp+1)/2)*d;
                        v.push_back(s[d-i+2+((temp+1)/2-1)*d-1]);
                    }
                }
                cout<<endl;
            }
            else{
                while(a1<=s.length())
                {
                    temp++;
                   cout<<i+(temp-1)*d;
                    v.push_back(s[i+(temp-1)*d-1]);
                    a1=i+temp*d;
                    if(d==0)
                        break;
                }

                cout<<endl;
            }
        }
        if(d==0)
            return s;
        return string(v.begin(),v.end()) ;
    }
};
