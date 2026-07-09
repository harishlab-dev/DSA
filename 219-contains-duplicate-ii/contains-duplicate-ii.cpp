// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int, int> seen;
//         for (int i = 0; i < nums.size(); i++) {
//             if(seen.count(nums[i]) && i - seen[nums[i]] <= k) {
//                 return true;
//             }
//             seen[nums[i]] = i;
//         }
//         return false;
//     }
// };



// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_set<int> w;
//         for (int i=0; i<nums. size(); i++){
//             if(i>k){
//                 w.erase(nums[i-k-1]);
//             }
//             if(w.count(nums[i]))return true;
//             w.insert (nums[i]);
//         }
//         return false;
//     }
// };



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        int n = nums.size();

        for(int i = 0; i < n; i++) {

            for(int j = i + 1; j < n && j <= i + k; j++) {

                if(nums[i] == nums[j])
                    return true;
            }
        }

        return false;
    }
};