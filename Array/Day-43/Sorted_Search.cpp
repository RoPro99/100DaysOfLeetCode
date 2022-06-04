int low = 0, high = nums.size() - 1;
while (low < high) {
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;

    if (nums[mid] >= nums[low]) { //check left is sorted or not
//if left part part is sorted tyhen check target is present or not in left part
        if (target >= nums[low] && target < nums[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    //else right part is sorted
    else {
        //again check our target is present in right part or not
        if (target > nums[mid] && target <= nums[high]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}
return nums[low] == target ? low : -1;