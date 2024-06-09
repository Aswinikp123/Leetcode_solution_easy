/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int i,j;
    *returnSize=numsSize;
    int *ans=(int*)calloc(numsSize,sizeof(int));
    for(i=0,j=0;i<=numsSize-1;i++,j++)
    {
       ans[j]=nums[nums[i]];
    }
    return ans;
}