public class Solution
        {
            public int solution(int n)
            {
                
                int sum = 0;

                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= n; j++)
                    {
                        if (i * j == n)
                        {
                            sum += j;
                            break;
                        }
                        else if (i * j > n)
                        {
                            break;
                        }

                    }
                }
                return sum;
            }
        }
//8의 약수를 구한다고 해보자