#include <vector>
    bool canJump(std::vector<int>& nums) 
    {
        int steps{0};
	for (int i=0;i<nums.size();i++)
	{
		steps = (steps>nums[i])?steps:nums[i];
		
		if (i != nums.size()-1 && steps == 0)
		{
			return false;
		}
		if (steps >= 0 && i == nums.size() - 1)
		{
			return true;
		}
		steps--;				
	}
	return false;        
    }
