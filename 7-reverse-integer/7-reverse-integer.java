class Solution {
   public int reverse(int x){
        boolean neg=false;
        if(x<0){
            neg=true;
            x=-1*x;
       }
       long reversed=0;
       while(x>0){
           int rem=x%10;
           reversed=reversed*10+rem;
           x=x/10;
       }
       if(reversed>Integer.MAX_VALUE){
           return 0;
       }
       return neg ? (int)(-1*reversed) : (int)reversed;
   }
}