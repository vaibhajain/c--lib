#include <bits/stdc++.h>

using namespace std;

int foo(int n,int r)
{
     if(n==r) return 1;
     if(r==1) return n;
     return foo(n-1,r) + foo(n-1,r-1);
}

int main() {
    int m, t;
	cin >> m;
	string s;
	vector<string> a(m);
	for(int i = 0; i < m; i++){
		cin >> t;
		//sprintf(s, "%d", temp);
		a.push_back(to_string(t)); 
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < m; i++){
	cout << a[i] << " " ;
}
}

