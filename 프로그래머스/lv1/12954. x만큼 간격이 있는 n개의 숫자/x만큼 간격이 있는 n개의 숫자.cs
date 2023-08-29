public class Solution
    {
       public long[] solution(int x, int n)
        {
            long[] answer = new long[n];
            int i = 0;
            int plus = x;
            long y = x;
            while (answer[n-1] ==0)
            {
                if(x==0){
                    break;
                }
                
                answer[i] = y;
                y += plus;
                i++;

            }
            return answer;
        }
    }