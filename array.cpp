 //-----------------//---------------//
 //finding min and max in array

int maxVal = arr[0];
int minVal = arr[0];

for (int i = 0; i < arr.size(); i++) {
    int x = arr[i];
    maxVal = max(maxVal, x);
    minVal = min(minVal, x);
}




 //-------------------------//--------------------------------//
 //finding duplicates
 
 bool containsDuplicate(vector<int>& nums) {
        int count =1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        if(count>1){
            return true;
        }
        else{
            return false;
        }
        
    }
    //---------------------//-------------------------//
//  reducing complexity
//https://leetcode.com/problems/contains-duplicate/
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
       }
       return false;
    }
     //---------------------//-------------------------//
//⭐ TWO-POINTERS — GENERAL RULE

// There are two types of two-pointer patterns:

// ✅ TYPE 1: Opposite Direction (start = 0, end = n-1)

// Used for:

// Pair sum (2-sum on sorted array)

// Container With Most Water

// Check if string is palindrome

// Reverse an array

// Trapping rain water (advanced)

// Minimize difference

// Two-sum in sorted array
// where NOT to use two pointers:

// Don’t use two pointers if the array is unsorted and sorting is not allowed.

// Don’t use two pointers when there is no clear rule to move left and right pointers.

// Don’t use two pointers for problems that require checking every pair (O(n²)).

// Don’t use two pointers when original index positions matter and sorting will break logic.

// Don’t use two pointers for DP, backtracking, or hashing-based problems.
 //---------------------//-------------------------//
 //sorted array
 bool isSorted(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] < arr[i-1]) {
            return false; 
        }
    }
    return true;
}
 //---------------------//-------------------------//
