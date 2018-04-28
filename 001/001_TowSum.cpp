class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	    int i, j;
	    vector<int> tmp(2);
	    for (i = 0; i < nums.size();i++){
		    for (j = i+1; j < nums.size(); j++){
			    if (nums[i] + nums[j] == target){
				    tmp[0] = i;
				    tmp[1] = j;
				    return tmp;
			    }
		    }
	    }
     }
};