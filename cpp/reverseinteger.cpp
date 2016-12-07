class Solution {
public:
    long int reverse(int x) {
        long int rem=0;
        long int f=abs(x);
        while(f>0)
        {
            rem = rem*10 + f%10;
            f/=10;
            if(rem>=2147483647)
                return 0;
        }
        if(x>0)
        return rem;
        else
        return -1*rem;
    }
};
