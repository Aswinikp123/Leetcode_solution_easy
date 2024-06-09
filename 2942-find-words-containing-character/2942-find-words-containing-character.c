/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {

    int i,j;
    int r=0;
    int *ans=(int*)malloc(wordsSize*sizeof(int));
    for(i=0;i<wordsSize;i++)
    {
        for(j=0;j<strlen(words[i]);j++)
        {
            if(words[i][j]==x)
            {
                ans[r]=i;
                r++;
                break;
            }
        }
    }
    *returnSize=r;
    return ans;
   
}