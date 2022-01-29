class Solution {
    public boolean judgeCircle(String moves) {
        int UD=0;
        int LR=0;
        for(int i=0;i<moves.length();i++){
            char moveCurrent=moves.charAt(i);
            if(moveCurrent=='U'){
                UD++;
            }
            else if(moveCurrent=='D'){
                UD--;
            }
            else if(moveCurrent=='L'){
                LR++;
            }
            else if(moveCurrent=='R'){
                LR--;
            }
        }
        return UD==0 && LR==0;
    }
}