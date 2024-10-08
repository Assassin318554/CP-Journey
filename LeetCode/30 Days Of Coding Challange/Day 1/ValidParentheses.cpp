/* 
Problem Link: 
https://leetcode.com/problems/valid-parentheses/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            } 
            else if(st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[')){
                return false;
            } 
            else {
                st.pop();
            }
        }

        if(st.empty()){
            return true;
        } else {
            return false;
        }
    }
};