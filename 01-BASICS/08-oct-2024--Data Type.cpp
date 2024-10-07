
/*
Liink:-
https://www.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type

prob:-
Geek is learning a new programming language. 
As data type forms the most fundamental part of a language, 
Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.

*/
// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        if(str == "Character")
            return sizeof(char);
        
        else if (str == "integer")
            return 4;
        
        else if(str == "Long")
            return 8;
        
        else if(str == "Float")
            return 4;
        
        else if(str == "Double")
            return 8;
        
        
        
        else
            return 4;
        
        
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
