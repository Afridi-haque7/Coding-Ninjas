/*
	Code : Staircase using Dp
	A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. 
	Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.
	
	Time complexity of your code should be O(n).
	Since the answer can be pretty large print the answer % mod(10^9 +7)
	
	Sample input 2:
	2
	5
	10
	
	Sample output 2:
	13
	274
*/


#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main(){
    // write your code here
    int T;
    cin >> T;
    while(T--)
    {
        
        int n;
        cin >> n;
        long long dp[n+1];
        
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i = 3; i <= n; i++)
        {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            dp[i] = dp[i] % MOD;
        }
        
        cout << dp[n] << "\n";
    }
    return 0;
}
