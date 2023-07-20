//**************                   *****************************           ****************************  
#include<iostream>
#include<string>
using namespace std;
char getMaxiOccChar(string s){
    int arr[26] = {0};
    int n = s.length();
    for(int i = 0 ; i< n ; i++){
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1; int ans = 0;
    for(int i = 0 ; i< 26 ; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}
int main()
{
    string s ;
    cout<<" write the string : ";
    cin>>s;
    cout<<" the maximum occrance character is : ";
    cout<< getMaxiOccChar(s);
    return 0;
}