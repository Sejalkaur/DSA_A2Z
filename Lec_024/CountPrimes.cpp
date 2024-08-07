/*Link: https://leetcode.com/problems/count-primes/submissions/1330751371/
Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.*/

class Solution {
public:
 
    int countPrimes(int n){
        int cnt=0;
        vector<bool> prime(n+1, true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return cnt;
    }
   
};
