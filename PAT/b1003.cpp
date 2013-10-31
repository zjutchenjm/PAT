#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n > 0)
	{
		string str;
		cin>>str;

		int a = 0, b = 0, c = 0;
		int indexP, indexT;
		bool answer = true;
		int len = str.length();
		for (int i = 0; i < len; ++i)
		{
			if (str[i] == 'A')
			{
				++a;
			}else{
				if (str[i] != 'P')
				{
					answer = false;
				}
				indexP = i;
				break;
			}
		}
		if (!answer)
		{
			cout << "NO\n";
			continue;
		}
		
		for (int i = len-1; i >= 0; --i)
		{
			if (str[i] == 'A')
			{
				++c;
			}else{
				if (str[i] != 'T')
				{
					answer = false;
				}
				indexT = i;
				break;
			}
		}
		if (!answer)
		{
			cout << "NO\n";
			continue;
		}
		
		for (int i = indexP + 1; i < indexT; ++i)
		{
			if (str[i] != 'A')
			{
				answer = false;
				break;
			}
			++b;
		}

		while(c > a && b > 0)
		{
			c -= a;
			--b;
		}
		if(c != a)
		{
			cout << "NO\n";
		}else{
			cout<< "YES\n";
		}
	}
	system("pause");
	return 0;
}