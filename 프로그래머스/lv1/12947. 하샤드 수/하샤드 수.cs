public class Solution {
    public bool solution(int x) {
         bool answer = false;
        int sum = 0;
        int n = x;
        while(x>0){
            sum += x%10;
            x/=10;
        }
        if(n%sum == 0){
            answer = true;
        }
        
        
        return answer;
    }
}