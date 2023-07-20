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

    finalans.push_back(make_pair('A' + ans, maxi));

    return finalans;