/*Link: https://leetcode.com/problems/sqrtx/description/
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.*/

class Solution {
public:
    
    long long int mySqrt(int n) {
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }if(square<n){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
};
