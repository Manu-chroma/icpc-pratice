#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	cin >> n;

	long long int answer =0, temp;
	for (int i = 0; i < n; i++)
	{	
		cin >> temp;
		answer += (temp);
	}

	answer = floor((answer+1)/2);
 	
	cout << max(n,answer) << endl;
	return 0;
}
