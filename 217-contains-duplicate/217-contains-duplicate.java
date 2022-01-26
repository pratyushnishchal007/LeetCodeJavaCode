class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> res=new HashSet<Integer>();
        for(int i:nums){
            if(res.contains(i)){
                return true;
            }
            else{
                res.add(i);
            }
        }
        return false;
        
    }
}