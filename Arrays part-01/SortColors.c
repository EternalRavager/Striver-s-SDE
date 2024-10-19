void sortColors(int* nums, int numsSize){
    int l, m, r, k;
    l = m = 0;
    r = numsSize - 1;
    while (m <= r) {
        k = nums[m];
        if (k < 1) {
            nums[m] = nums[l];
            nums[l] = k;
            l ++; m ++;
        } else if (k > 1) {
            nums[m] = nums[r];
            nums[r] = k;
            r --;
        } else {
            m ++;
        }
    }
}