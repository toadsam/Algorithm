using System;

public class Solution {
    public int solution(int n, int m, int[] section) {
       
        int answer = 1;
        //int mm = section[0] ;
        int mRange =section[0] + m-1;
         for(int i = 0; i < section.Length; i ++ )
         {
             
            if(section[i] > mRange)
            {
                answer++;
                mRange = section[i]+m-1;
                    
            }
         }
        return answer;
    }
}