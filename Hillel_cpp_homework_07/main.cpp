#include<iostream>
#include<vector>
#include<set>

using namespace std;

void printVector(vector<string>& vec);
void printSet(set<string>& st);

int main()
{
	vector<string> vec = {"one", "two", "three"};
	set<string> st = { "four", "five", "six"};

	printVector(vec);
	printSet(st);

	return 0;
}

void printVector(vector<string>& vec)
{
	for (vector<string>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\n";
	}
}

void printSet(set<string>& st)
{
	for (set<string>::iterator it = st.begin(); it != st.end(); ++it)
	{
		cout << *it << "\n";
	}
}