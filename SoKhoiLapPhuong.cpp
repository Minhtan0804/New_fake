#include <bits/stdc++.h>
using namespace std;

vector<string> preProcess(long long int n)
{
	vector<string> preProcessedCubes;
	for (int i = 1; i * i * i <= n; i++) {
		long long int iThCube = i * i * i;

		string cubeString = to_string(iThCube);
		preProcessedCubes.push_back(cubeString);
	}
	return preProcessedCubes;
}

string findLargestCubeUtil(string num, vector<string> preProcessedCubes)
{
	reverse(preProcessedCubes.begin(), preProcessedCubes.end());

	int totalCubes = preProcessedCubes.size();

	for (int i = 0; i < totalCubes; i++) {
		string currCube = preProcessedCubes[i];

		int digitsInCube = currCube.length();
		int index = 0;
		int digitsInNumber = num.length();
		for (int j = 0; j < digitsInNumber; j++) {

			if (num[j] == currCube[index])
				index++;
			
			if (digitsInCube == index)				
				return currCube;		
		}
	}

	return "-1";
}

void findLargestCube(long long int n)
{
	vector<string> preProcessedCubes = preProcess(n);

	string num = to_string(n);

	string ans = findLargestCubeUtil(num, preProcessedCubes);

	cout << ans << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long n; cin >> n;
		findLargestCube(n);
	}
	return 0;
}

