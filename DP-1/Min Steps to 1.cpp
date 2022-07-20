/*
	Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1.
	You can perform any one of the following 3 steps:
	
	1.) Subtract 1 from it. (n = n - ­1) ,
	2.) If n is divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
	3.) If n is divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ). 
	
	Sample Input 2 :
	7
	
	Sample Output 2 :
	3

	Explanation of Sample Output 2 :
	For n = 7
	Step 1 :  n = 7 ­- 1 = 6
	Step 2 : n = 6  / 3 = 2 
	Step 3 : n = 2 / 2 = 1 
	
*/

#include <bits/stdc++.h>
using namespace std;

int countMinStepsToOne(int n){
	if( n == 1)
        return 0;
    
    int dp[n+1];
    
    for(int i = 0; i < n+1; i++){
        dp[i] = -1;
    }
  
    dp[1] = 0;
    
    for(int i = 2; i <= n; i++){
        int sol1 = dp[i-1];
        int sol2 = INT_MAX;
        int sol3 = INT_MAX;
        
        if(i%2 == 0 ){
            sol2 = dp[i/2];
        }
        
        if(i%3 == 0){
            sol3 = dp[i/3];
        }
        
        dp[i] = min(sol1, min(sol2, sol3))+1 ;
    }
        
    return dp[n];
}


int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}
