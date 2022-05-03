#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	deque<int> dq;
	while(t--)
	{
		string str; cin >> str;
		if (str == "PUSHFRONT") {
			int digit; cin >> digit;
			dq.push_front(digit);
		}
		else if (str == "PRINTFRONT" && !dq.empty()) cout << dq.front() << endl;
		else if (str == "PRINTFRONT" && dq.empty()) cout << "NONE\n";
		else if (str == "POPFRONT" && !dq.empty()) dq.pop_front();
		
		if (str == "PUSHBACK") {
			int digit; cin >> digit;
			dq.push_back(digit);
		}
		else if (str == "PRINTBACK" && !dq.empty()) cout << dq.back() << endl;
		else if (str == "PRINTBACK" && dq.empty()) cout << "NONE\n";
		else if (str == "POPBACK" && !dq.empty()) dq.pop_back();
		

	}
	return 0;
}
