using System;

 public class Solution
    {
        public int solution(int n)
        {
            int sum = 0;
            int number = n;
            int count = 0;
            while (!(n / 10 == 0))
                {
                n /= 10;
                count++;
                }
            
            for (int i = count ; i >= 0; i--)
            {
                sum += number / (int)(Math.Pow(10, count));
                number %= (int)(Math.Pow(10, count));
                count--;
            }


            
            return sum;
        }
    }
