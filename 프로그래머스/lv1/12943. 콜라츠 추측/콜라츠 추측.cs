public class Solution {
    public int solution(int num) {
        int answer = 0;
        long a = num;
        while(a != 1){
            if(a%2 == 0)
            {
                a/=2;
            }
            else
            {
                a = 3*a+1;
            }
            answer++;
            if(answer == 500)
            {
               answer = -1;
                break;
            }
        }
        return answer;
    }
}