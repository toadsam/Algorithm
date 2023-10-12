using System;

public class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] answer =  {0,0};//new int[2];
        int equalNum = 0;
        int zeroNum = 0 ;
        int goodScore = 0;
        int bedScore = 0;
        for(int i = 0; i < lottos.Length ; i ++ )
        {
         for(int j = 0; j < win_nums.Length; j ++)
         {
          if(win_nums[j] == lottos[i])
          {
              equalNum ++;
          }   
         }
            if(lottos[i] == 0)
            {
                zeroNum++;
            }
        }
        goodScore = equalNum + zeroNum;
        bedScore = equalNum;
        if(goodScore == 6)
            answer[0] = 1;
        if(goodScore == 5)
            answer[0] = 2;
        if(goodScore == 4)
            answer[0] = 3;
        if(goodScore == 3)
            answer[0] = 4;
        if(goodScore == 2)
            answer[0] = 5;
        if(goodScore < 2)
            answer[0] = 6;
        
        if(bedScore == 6)
            answer[1] = 1;
        if(bedScore == 5)
            answer[1] = 2;
        if(bedScore == 4)
            answer[1] = 3;
        if(bedScore == 3)
            answer[1] = 4;
        if(bedScore == 2)
            answer[1] = 5;
        if(bedScore < 2)
            answer[1] = 6;
        return answer;
    }
}