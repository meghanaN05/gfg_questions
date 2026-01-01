class Solution {
  public:
    int rev(int n){
        string s=to_string(n);
        reverse(s.begin(),s.end());
        return stoi(s);
    }
   int findpow(double a,long long b){
        if(b==0) return 1;
        double temp=findpow(a,b/2);
        temp*=temp;
        if(b%2==1) temp*=a;
        return temp;
    }
    int reverseExponentiation(int n) {
        int x=rev(n);
        return findpow(n,x);
        
    }
};