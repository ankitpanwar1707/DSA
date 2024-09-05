#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans) {
    // Base case: if index exceeds the length of the string
    if (index >= str.size()) {
        if (!output.empty()) {  // If the output is not empty, add it to ans
            ans.push_back(output);
        }
        return;
    }

    // Exclude the current character and move to the next index
    solve(str, output, index + 1, ans);

    // Include the current character and move to the next index
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main() {
    string str = "abc";
    vector<string> result = subsequences(str);
    for (const auto& seq : result) {
        cout << seq << endl;
    }
    return 0;
}
