// Link - Leetcode => https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Approach - 1 => Using 2 for loop  =>  TC = O(n^2), SC = O(1)
        /*for(int i=0; i<nums.size()-1; i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] == nums[j])
                    return nums[i];
            }                
        }
        return -1;*/
            
        // Approach - 2 => Using Sorting  =>  TC = O(nlogn), SC = O(1)
        /*sort(nums.begin(), nums.end());
        int ans = -1;
        
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i] == nums[i+1])
                ans = nums[i];
        }
        return ans;*/
        
        // Approach - 3 => Using Marking  =>  TC = O(n), SC = O(1)
        /*int ans = -1;
        for(int i=0; i<nums.size(); i++) {
            int idx = abs(nums[i]);
            // Already visited
            if(nums[idx] < 0)
                return idx;
            // mark visited
            nums[idx] *= -1;
        }
        return -1;*/
        
        // Approach - 4 => Using Marking  =>  TC = O(n), SC = O(1)
        /*while(nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        return nums[0];*/
        
        // Approach - 5 => Using Hashing  =>  TC = O(n), SC = O(n)
        vector<bool> temp(nums.size(), false);
        for(int i=0; i<nums.size(); i++) {
            if(temp[nums[i]])
                return nums[i];
            temp[nums[i]] = true;
        }
        return -1;
     
        // Approach - 5 => Using Map  =>  TC = O(n), SC = O(n)
        /*map<int, int> m;
        
        for(auto i= 0; i<nums.size(); ++i)
        ++m[nums[i]];
        
        for(auto i : m) {
            if(i.second > 1)
                return i.first;
        }
        return -1;*/
        
        // Approach - 6 => Using Binary Search  =>  TC = O(n), SC = O()
        /*int low = 1, high = nums.size() - 1;
        
        while(low <=  high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;
            // cnt number less than equal to mid
            for(int ele : nums) {
                if(ele <= mid)
                    ++cnt;
            }
            // binary search on left
            if(cnt <= mid)
                low = mid + 1;
            else
            // binary search on right
                high = mid - 1;            
        }
        return low;*/
    }
};