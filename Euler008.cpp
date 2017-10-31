/*
What do you call a dog that does magic tricks?
A labracadabrador.
*/
/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler008
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,k;
        cin>>l>>k;
        string s;
        cin>>s;
        long long int arr[l];
        for(int j=0;j<l;j++)
        {
            arr[j]=(long long int)(s[j]-48);
        }
        long long int pm=0;
        for(int j=0;j+k<l;j++)
        {
            long long int pro=1;
            for(int r=0;r<k;r++)
            pro*=arr[r+j];
            if(pro>pm)
            pm=pro;
        }
        cout<<(pm)<<endl;
    }
    return 0;
}

