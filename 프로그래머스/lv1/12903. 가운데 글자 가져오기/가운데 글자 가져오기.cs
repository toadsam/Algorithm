public class Solution {
    public string solution(string s) {
        string answer = "";
        int a  = s.Length/2;
        if(s.Length%2 == 1)
        {
            answer = s.Substring(a, 1);
        }
        else
        {
            answer = s.Substring(a-1, 2);
        }
        //string answer = s.Length%2 == 1 ? s.Substring(a, a); : s.Substring(a-1, a);     
        return answer;
    }
}