//reversing an array
//two pointer approch
void reverseArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
      
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
//   https://leetcode.com/problems/reverse-string/

//------------------//---------------------//
//pair sum

bool twoSumSorted(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start < end) {
        int sum = arr[start] + arr[end];

        if(sum == target) return true;
        else if(sum < target) start++;
        else end--;
    }
    return false;
}

//    https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

//------------------//---------------------//
//removing duplicates and returning unique no

int removeDuplicates(vector<int>& nums) {
         int i = 0;
    for(int j = 1; j < nums.size(); j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
    }
//            https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//------------------//---------------------//
//put all 0 at end

void moveZeroes(vector<int>& nums) {
    int i = 0;  // slow pointer
    
    // Step 1: Move all non-zero elements to the front
    for(int j = 0; j < nums.size(); j++) {
        if(nums[j] != 0) {
            nums[i] = nums[j];
            i++;
        }
    }
    
    // Step 2: Fill the rest with zeros
    while(i < nums.size()) {
        nums[i] = 0;
        i++;
    }
}
//       https://leetcode.com/problems/move-zeroes/
//------------------//---------------------//

