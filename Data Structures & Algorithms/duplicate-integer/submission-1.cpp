class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        /*
        store the number at index, loop through the array 
        starting at j = i + 1.
        We start are i + 1 because we don't want 
        nums[i] to be checked against n[j] (they would be the same number)
        Checks if currently stored num[i] == num[j]
        If true, return true, otherwise, return false when nested loop ends
        */

        for(int i = 0; i < nums.size(); i++)
        {
            int stored = nums[i];
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((nums[i] == nums[j]) == true)
                {
                   return true;
                }
            }
        }
        return false;
    }
};