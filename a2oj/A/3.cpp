#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);

	string s;
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);

	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i] == 'a'|| s[i] == 'e' || s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' || s[i] == 'y') {

		}
		else {
			cout << "." << s[i];
		}
	}
	return 0;
}
