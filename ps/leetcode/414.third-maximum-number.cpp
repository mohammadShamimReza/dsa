/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */
#include <vector>
#include <set>
#include <iterator> // Required for std::begin and std::end

using namespace std;
// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> anotherNums={};
        set<int> mySet(begin(nums), end(nums));
       for (int s : mySet) {
        anotherNums.push_back(s);
    }

        if(anotherNums.size() < 3){
            return anotherNums.back();
        }else{
            return anotherNums[anotherNums.size() - 3];
        }
    }
};
//\\ @lc code=end

