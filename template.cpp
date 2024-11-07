#include <bits/stdc++.h>
using namespace std;

#define MOD 10000000007

int mod_multiplication(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

class Exponent{
public:

    int fastExponentIterative(int a,int b){
        int res = 1;
        while(b>0){
            if(b&1)
                res=mod_multiplication(res,a);
            a=mod_multiplication(a,a);
            b=b>>1;
        }
        return res;
    }

    long long fastExponentRecurrsive(double a,int b){
        if(b==1) return a;
        long long res = fastExponentRecurrsive(a,b/2);
        if(b&1)
            return a*res*res;
        return res*res;
    }
};

class EuclidsAlgorithm{
public:
    int GCD(int a,int b){
        if(b==0) return a;
        if(a==0) return b;

        return GCD(b,a%b);
    }
    int GCD_List(vector<int> nums){
        int res = 0;
        for(int num:nums){
            res = __gcd(res,num);
        }
        return res;
    }

    int LCM(int a,int b){
        return (a/__gcd(a,b))*b;
    }

    int LCM_List(vector<int> nums){
        int res = 1;
        for(int num:nums){
            res=LCM(res,num);
        }
        return res;
    }

};


class Prime{
    public:

        int seiveOfEratosthenes(int num){
            vector<bool> isPrime(num+1,true);

            isPrime[0]=isPrime[1]=false;

            for(int i = 2;i*i<=num;i++){
                if(!isPrime[i]) continue;

                for(int j = i*i;j<=num;j+=i){
                    isPrime[j]=false;
                }
            }

        }

};
