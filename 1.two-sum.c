int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int* solution = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (target == nums[i] + nums[j])
            {
                solution[0] = i;
                solution[1] = j;
                *returnSize = 2;
                return solution;
            }
        }
    }

   *returnSize = 0;
    return malloc(sizeof(int) * 0);
}