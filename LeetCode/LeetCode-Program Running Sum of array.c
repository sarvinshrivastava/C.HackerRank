int* runningSum(int* nums, int numsSize, int* returnSize){
    int i, j, s = 0;
    int* arr = malloc(numsSize * sizeof(int));
    /*for(i = 0; i < numsSize; i++) {
        for(j = 0; j <= i; j++) {
            s += *(nums + j);
        }
        *(arr + i) = s;
        s = 0;
    }*/
    *arr = *nums;
    for(i = 1; i < numsSize; i++) {
        *(arr + i) = *(nums + i) + *(arr + i - 1);
    }
    *returnSize = numsSize;
    return arr;
}