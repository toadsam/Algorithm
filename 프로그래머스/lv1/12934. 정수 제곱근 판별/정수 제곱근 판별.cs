using System;

public class Solution {
    public long solution(long n)
    {
        double answer = Math.Sqrt(n);
        
        return answer % 1 == 0 ? (long)((answer+1)*(answer+1)) : -1;
    }
}