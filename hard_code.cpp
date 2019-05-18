    /*          MODULAR EXPONENTIATION
    
   Modular exponentiation is done by obtaining the remainder 
   when a number x raised to the the power  number y 
   is divided by another number m  . So here is the code for
   the algorithm in the beautiful language of C++                          */
  
 
   
#include <iostream>
#define ll int64_t                             /* for large integer values */
using namespace std; 
 
/*function to calculate the modular exponentiation,
Time complexity of the functon is : O(log(exponent)) */

ll modpow(ll base, ll exponent, ll modulus)
{
    ll result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent = exponent >> 1;           /* equivalent to exponent = (exponent)/2  */
        base = (base * base) % modulus;
    }
    return result;
}

/* main() function  */

int main()
{   ios_base::sync_with_stdio(false);        /* for fast input/output */
    
    ll t;
    cout<<"Enter the no. of times you want to run the program :"<<endl;
    cin>>t;
    while(t--)                                /* for t number of test cases */
    {
    ll x, y ,mod;
    cout<<"Enter the value of base : "<<endl;
    cin>>x;
    cout<<"Enter the value of exponent: "<<endl;
    cin>>y;
    cout<<"Enter the modular value : "<<endl;
    cin>>mod;
    cout<<"Value of the modular exponentiation is :"<<endl;
    cout<<modpow(x, y , mod)<<endl;           /* calling the function modpow() */
    
    }
}
