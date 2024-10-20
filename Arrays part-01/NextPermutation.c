void reverse(int* nums, int l, int r) {
    while (l < r) {
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
}

void nextPermutation(int* nums, int numsSize) {
    int i;
    for (i = numsSize - 2; i >= 0; --i) {
        if (nums[i] < nums[i + 1]) {
            break;
        }
    }
    if (i >= 0) {
        for (int j = numsSize - 1; j > i; --j) {
            if (nums[j] > nums[i]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                break;
            }
        }
    }
    reverse(nums, i + 1, numsSize - 1);
}
