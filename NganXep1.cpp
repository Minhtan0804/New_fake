#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s;
	string str; int n;
	while(cin >> str)
	{
		if (str == "push")
		{
			cin >> n;
			s.push(n);
		}else if (str == "pop") s.pop();
		else if (str == "show"){
			if (s.size() <= 0){
				cout << "empty\n";
				continue;
			}
			vector<int> a;
			while(s.size() > 0){
				a.push_back(s.top());
				s.pop();
			}
			
			for (int i = a.size()-1; i >= 0; i--)
			{
				cout << a[i] << " ";
				s.push(a[i]);
			}
			cout << "\n";
		}


		cout << endl;
	}
	return 0;
}

