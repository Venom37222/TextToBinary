
#include <bits/stdc++.h> 

using namespace std; 

  
// utility function 

void strToBinary(string s) 
{ 

    int n = s.length(); 

  

  

    for (int i = 0; i <= n; i++) 

    { 

        // convert each char to ASCII

        int val = int(s[i]); 

  

        // Convert ASCII value to binary 

        string bin = ""; 

        while (val > 0) 

        { 

            (val % 2)? bin.push_back('1') : 

                       bin.push_back('0'); 

            val /= 2; 

        } 

        reverse(bin.begin(), bin.end()); 

  

        cout << bin << " "; 

    } 
} 

  
// driver code 

int main() 
{ 

  

    string s;
    
    cout << "Enter a string : ";
    
    cin >> s;

    strToBinary(s); 

    return 0; 
} 
