#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int>day = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string>week =  {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    string answer = " ";
    int sum = 0;
    for(int i = 0; i < a-1; i++)
    {
        sum += day[i];
        
    }
    sum += b;
    
    //if(sum%7-4 > 0)
   // {
      answer = week[sum%7];
  //  }
  //  else
  //  {
  //    int num = sum%7-4;
  //    answer = week[6+num];
        
    //}
    return answer;
}