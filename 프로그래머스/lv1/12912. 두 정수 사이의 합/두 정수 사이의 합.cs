public class Solution {
    public long solution(int a, int b) {
        long sum = 0;
        if(a > b){
            int temp;
            temp = b;
            b = a;
            a = temp;
        }
        
        for(int i = a; i <=b; i ++){
            sum+=i;
        }
        return sum;
    }
}