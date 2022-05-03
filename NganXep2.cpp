#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s;
	string str; int n;
	int t; cin >> t;
	while(t--)
	{
		cin >> str;
		if (str == "PUSH")
		{
			cin >> n;
			s.push(n);
		}else if (str == "POP" && s.size() > 0) s.pop();
		else if (str == "PRINT"){
			if (s.size() == 0){
				cout << "NONE\n";
			}else cout << s.top() << endl;
		}
		cout << endl;
	}
	return 0;
}

