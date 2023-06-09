class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            mini = min(nums[i],mini);
        }
        return mini;
    }
};

 

// Optmized Binary search
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int s = 0; 
//         int e = nums.size() -1;
//         while(s < e){
//             int m= s+ (e - s)/2;
//             if(nums[m]>nums[e]) s = m+1;
//             else if(nums[m] < nums[e]) e =m;
//             else e--;
//         }
//         return nums[s];
//     }
// };