#include <iostream> 
using namespace std; 
 
bool isPalindrome(string text, int start, int end) 
{ 
    if (start >= end) 
        return true; 
 
    if (text[start] != text[end]) 
        return false; 
 
    return isPalindrome(text, start + 1, end - 1); 
} 
 
int main() 
{ 
    string word; 
 
    cout << "Enter a word: "; 
    cin >> word; 
 
    bool result = isPalindrome(word, 0, word.length() - 1); 
 
    if (result) 
        cout << "The word is a palindrome." << endl; 
    else 
        cout << "The word is not a palindrome." << endl; 
 
    return 0; 
}