#include <bits/stdc++.h>

using namespace std;

/*
* Process a string and remove -, ( and ) from it.
*/
string process(string s){
	string temp;
	bool toggle = false;
	vector<int> a;
	for(int i = 0;i < s.size(); i++){
		if(a.empty()){
			if(s[i] >= 97 && s[i] <= 122)
				temp.push_back(s[i]);
			if(s[i] == '-' && s[i+1] == '('){
				
			}
		}else{

		}
	}
}

/*
* Drive function
*/
int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2, s3, s4; cin >> s1 >> s2;
		for(int i = 0; i < s1.size(); i++)
			if(s1[i] != '+')
				break;
                for(int i = 0; i < s2.size(); i++)
                        if(s2[i] != '+')
                                break;
		for()

	}
	
}


