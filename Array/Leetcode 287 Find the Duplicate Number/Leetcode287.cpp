class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int fast = nums[0];
        int slow = nums[0];
        while (1) {
        

                slow = nums[slow];
                fast = nums[nums[fast]];
            if(slow==fast){
                break;
            }
        }
            slow = nums[0];
        while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow ;
    }
    };
    