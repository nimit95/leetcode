class Solution {
public:
    double myPow(double x, long int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n<0)
            return pow(1/x,n*-1); 
        else if(n%2==1)
            return x*pow(x,n-1) ;
        
        else{
            double y = pow(x, n/2);
            return y*y;
        }
        
    }
};
