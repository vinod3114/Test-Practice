
#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
   
	unordered_map<string,int> magzn,ransm;
	for(int i=0;i<magazine.size();i++)
		magzn[magazine.at(i)]++;
	for(int i=0;i<ransom.size();i++)
		ransm[ransom.at(i)]++;
	unordered_map <string,int> ::iterator it;
	for(it=ransm.begin(); it != ransm.end();it++)
		if(it->second > magzn[it->first])
			return false;
	return true;

}

int main(){
    vector<string> magazine;
    vector<string> ransom;
	string one="apgo clm w lxkvg mwz elo bg elo lxkvg elo apgo apgo w elo bg";
	stringstream ss(one);
	string word;
	while(ss>> word)
	{
		magazine.push_back(word);
	}
	string two="elo lxkvg bg mwz clm w";
	stringstream ss(two);
	while(ss>> word)
	{
		ransom.push_back(word);
	}
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
