using System;
using System.Linq;


public class Solution {
    public int[] solution(long n) {
       string number = n.ToString();
        
        int numberlength = number.Length;
        
        int[] answer = new int[numberlength];
        
        for(int i = 0; i < numberlength; i++)
        {
            answer[i] = int.Parse(number.Substring(i, 1));
        }
        Array.Reverse(answer);
        return answer;



    }
}