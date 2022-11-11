/* Time Complexity : O(N) 
   Space Complexity : O(1)   */


class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i = 1;
        
          for (int  it: nums)
          {
              if (it > nums[i-1])
                nums[i++] = it;
          }
             
       return i;
    }
};
