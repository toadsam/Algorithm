using System;
using System.Linq;

public class Solution {
    public int solution(int n, int[] lost, int[] reserve)
    {
        //lost, reserve 배열 정렬
        Array.Sort(lost);
        Array.Sort(reserve);
        
        //체육복 잃어버린 학생 반복
        foreach (int l in lost)
        {
            //여벌 체육복 학생 반복
            foreach (int r in reserve)
            {
                //체육복 잃어버린 학생 번호랑 여벌 체육복 학생 번호랑 같으면
                if (l == r)
                {
                    //자기 자신이 입으므로 해당 배열에서 모두 제거
                    lost = lost.Where(x => x != l).ToArray();
                    reserve = reserve.Where(x => x != r).ToArray();
                    break;
                }
            }
        }
        
        int count=0;
        //체육복 잃어버린 학생 반복
        foreach (int l in lost)
        {
            //여벌 체육복 학생 반복
            for (int i = 0; i < reserve.Length; i++)
            {
                //잃어버린 체육복 학생 번호 -1 or +1 이 여벌 체육복 학생 번호랑 같고
                //여벌 체육복 학생 번호가 0이 아니면
                if (l - 1 == reserve[i] && reserve[i]!=0 
                     || l + 1 == reserve[i] && reserve[i]!=0)
                {
                    //여벌 체육복 학생 번호 0으로, 빌려준 카운트 더하기
                    reserve[i]=0;
                    count++;
                    break;
                }
            }
        }
        //총 들을 수 있는 학생수는 전체 학생 수 - 잃어버린 학생 수 + 빌려준 카운트
        return n - lost.Length + count;
    }
}
