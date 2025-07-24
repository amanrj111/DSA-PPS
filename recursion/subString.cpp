#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateSubstrings(string s, int start, int end, vector<string>& ans) {
    if (start == s.length())
        return;

    if (end == s.length() + 1) {
        generateSubstrings(s, start + 1, start + 2, ans);
        return;
    }

    ans.push_back(s.substr(start, end - start));
    generateSubstrings(s, start, end + 1, ans);
}

vector<string> printAllSubstrings(string s) {
    vector<string> ans;
    generateSubstrings(s, 0, 1, ans);
    return ans;
}

int main() {
    string str = "abcd";
    vector<string> substrings = printAllSubstrings(str);

    cout << "Substrings are:\n";
    for (auto &sub : substrings) {
        cout << sub << endl;
    }

    return 0;
}
