class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*
        There is definitely a better solution to this that is not a brute force approach
        Brute Force:
        A for loop that starts at index 0 and has another one nested inside that starts at 1
        Using the nested loop, loop through the array until you hit length, checking if outer loop + inner = target 
        */
 
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }
    }
};

