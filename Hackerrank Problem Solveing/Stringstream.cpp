#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> vec;
    stringstream sen(str);
    int n;
    char ch;
    while(sen)
    {
        if(sen >> n)
        {
            vec.push_back(n);
            sen >> ch;
        }
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}