
    int search(int* nums, int numsSize, int target) {
	int low = 0, high = numsSize - 1;
	while (low < high) {
		int m = (low + high)/2;
		if (target > nums[high])
			if (nums[m] < target && nums[m] > nums[high])
                low = m + 1;
			else 
                high = m;
		else
			if (nums[m] >= target && nums[m] <= nums[high]) 
                high = m;
			else 
                low = m + 1;
	}
	return nums[low] == target ? low : -1;
}
        