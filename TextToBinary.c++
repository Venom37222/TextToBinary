#include <bits/stdc++.h> 
using namespace std; 

void strToBinary(string s) 
{
    int n, val; 
    n = s.length(); 
    for (int i = 0; i <= n; i++) 
    { 
        val = int(s[i]); 
        string bin = ""; 
        while (val > 0) 
        { 
            (val % 2)? bin.push_back('1') : bin.push_back('0'); 
            val /= 2; 
        };
        reverse(bin.begin(), bin.end()); 
        cout << bin << " "; 
    };
}; 

int main() 
{ 
    string s;   
    cout << "Enter a string : ";    
    cin >> s;
    strToBinary(s); 
    return 0; 
};
