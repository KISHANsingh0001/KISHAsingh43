#include<iostream>
#include<string>
using namespace std;
string toLower(string s){
    string ans;
    for(int i = 0 ; i< s.length() ; i++ ){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ans.push_back(s[i] - 'A' + 'a');
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s;
    cout<<" Enter the string :";
    cin>>s;
    cout<<toLower(s);
    return 0;
}