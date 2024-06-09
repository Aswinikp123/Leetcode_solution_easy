/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int i,n;
    n=numsSize;//3
    int *ans=(int *)malloc((2*numsSize)*sizeof(int));
    for(i=0;i<2*numsSize;i++)
    {
        if(i<numsSize)
            ans[i]=nums[i];
        else
            ans[i]=nums[i-n];
    }
    return ans;
}