/*
Q: What do you say to a suicidal person?
a: Hang in there.
*/

//https://www.hackerrank.com/contests/projecteuler/challenges/euler014/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
const int MAX = 5000000+7;
using namespace std;
int arr[MAX];
int sol[MAX];
int col_len(long long x) {
    // call_count++;
    if(x==1)
    {
        return 0;
    }
    else 
    {
        if(x<MAX)
        {
            if(arr[(int)(x)]!=0)
            {
                return (arr[(int)(x)]);
            }
        }
        int len = (((x%2==0)?col_len(x/2):col_len(x*3+1))+1);
        if(x<MAX)
        {
            // w_count++;
            arr[(int)(x)]=len;
        }
        return len;
    }
}
int main() {
    int t = 0;
    cin>>t;
    while(t--){
            int max = 0;
            int max_n = 1;
            int n;
            cin>>n;
        if(sol[n]){
            cout<<sol[n]<<endl;
        }
        else{
            for (int i = 2; i <= n; i++) {
//                System.out.println("calculating for : " + i);
                int l = col_len(i);
//                System.out.println("\n" + i + " -- " + l);
                if (max <= l) {
                    max = l;
                    max_n = i;
                }
                sol[i] = max_n;
            }
            cout<<(max_n)<<endl;
        }
    }
}
