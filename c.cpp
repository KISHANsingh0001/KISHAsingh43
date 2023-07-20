#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<pair<char, int>> getMaxoccchar(string s) {
    vector<pair<char, int>> finalans;
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = ch - 'A';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    finalans.push_back({'A' + ans , maxi});

    return finalans;
}
int main()
{
     string s;
    cin >> s;
    vector<pair<char, int>> result = getMaxoccchar(s);

    if (result.empty()) {
        cout << "No characters found in the input string.";
    } else {
        cout << result[0].first << " " << result[0].second << endl;
    }
    return 0;
}