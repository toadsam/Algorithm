#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    int a = 0;
    int b = 0;
    int c = 0;
    vector<int>one = {1,2,3,4,5};
    vector<int>two = {2,1,2,3,2,4,2,5};
    vector<int>three = {3,3,1,1,2,2,4,4,5,5};
    vector<int> answer;
    
    for(int i = 0; i < answers.size(); i ++)
    {
        if(answers[i] == one[i%one.size()])
        {
            a++;
        }
        if(answers[i] == two[i%two.size()])
        {
            b++;
        }
        if(answers[i] == three[i%three.size()])
        {
            c++;
        }
        
        
    }
    if(a == b && b == c)
    {
        answer = {1,2,3};
    }
    else if(a == b && b > c)
    {
        answer = {1,2};
    }
    else if(a == c && c > b)
    {
        answer = {1,3};
    }
    else if(b == c && c > a)
    {
        answer = {2,3};
    }
    else if(a > c && a >b)
    {
        answer = {1};
    }
    else if(b > a && b > c){
        answer = {2};
    }
    else
    {
        answer = {3};
    }
    
    return answer;
}