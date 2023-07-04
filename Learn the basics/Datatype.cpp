/*
Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help. Given a data type, help Geek in finding the size of it in byte.

Data Type - Character, Integer, Long, Float and Double

Example 1:

Input: Character
Output: 1
Example 2:

Input: Integer
Output: 4

Your Task:

Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
*/


class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str=="Character")return 1;
        else if(str=="Integer")return 4;
        else if(str=="Long")return 8;
        else if(str=="Float")return 4;
        else if(str=="Double")return 8;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}

