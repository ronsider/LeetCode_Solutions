#include <vector>
    bool canJump(std::vector<int>& nums) {
        int s{};
	for (int i=0;i<nums.size();i++)
	{
		s = (s>nums[i])?s:nums[i];
		
		if (i != nums.size()-1 && s == 0)
		{
			return false;
		}
		if (s >= 0 && i == nums.size() - 1)
		{
			return true;
		}
		s--;
				
	}
	return false;        
    }
