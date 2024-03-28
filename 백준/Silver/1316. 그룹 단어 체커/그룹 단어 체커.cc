#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int cnt = 0;

	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;
		bool check = true;
		str.erase(unique(str.begin(), str.end()), str.end());
		sort(str.begin(), str.end());

		for (int j = 0; j < str.size() - 1; j++)
		{
			if (str[j] == str[j + 1])
			{
				check = false;
				break;
			}
		}

		if (check)
			cnt+=1;
	}

	cout << cnt;
}  //근데 이거는 너무 메서드에 의존한 것 같기도....