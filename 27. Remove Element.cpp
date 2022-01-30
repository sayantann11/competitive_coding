class Solution {
    public int removeElement(int[] nums, int val) {
        int i = 0;
        for (int elem: nums){
            if (elem != val){
                nums[i] = elem;                
                i++;
            }
        }
        return i;
    }
}
