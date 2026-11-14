/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cal1=0;
        int recall1=0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if(nums[i] == 1){
                cal1++;
            }else{
                if( cal1 > recall1){
                    recall1 = cal1;
                    cal1 = 0;
                }
            }
        }
         
        return max(recall1, cal1);
        
    }
};
// @lc code=end

