public class Solution {
    public int solution(string s) {
        bool isMinus = false;
        if(string.Equals(s[0], "-")){
            isMinus = true;
        }
        int answer = int.Parse(s);
        if (isMinus)
        {
            answer *= -1;
        }
        return answer;
    }
}