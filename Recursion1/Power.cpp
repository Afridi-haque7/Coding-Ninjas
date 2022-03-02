/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.

Sample Input 1 :
3 4
Sample Output 1 :
81
*/

#include<iostream>
#include "Solution.h"
using namespace std;

int power(int x, int n) {
    if(n == 0){
        return 1;
    }
    
    int ans = power(x, n/2);
    
    if(n%2 == 0){
        return ans*ans;
    }
    else{
        return x*ans*ans;
    }

}

int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}

