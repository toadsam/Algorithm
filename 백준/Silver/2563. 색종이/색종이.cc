# include<iostream>

using namespace std;

int main(){
    int arr[100][100] = {0};
    int n,x,y, answer = 0;
    
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        cin >> x >> y;
        for(int j = 0 ; j < 10 ; j++)
        {
            for(int k = 0; k < 10; k++)
            {
                if(arr[j+x][k+y] == 0)
                {answer += 1;}
                arr[j+x][k+y] = 1;
                
            }
        }
        
    }
    cout << answer;
    
    
    
}