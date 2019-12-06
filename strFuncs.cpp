#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	string temp = "";
	for (int i = 0; i < s1.length(); i++){
		if( isalpha(s1[i])){
			temp += tolower(s1[i]);
		}
	}
	string temp2 = "";
	for (int j =0; j < s2.length(); j++) {
		if( isalpha(s2[j])){
			temp2 += tolower(s2[j]);
		}
	}
	while(temp2.length() && temp.length()){
		if(isalpha(temp2[0])){
			int pos = temp.find(tolower(temp2[0]));
			if(pos >= 0 && pos < temp.length()){
				temp.erase(pos,1);
			}
			else{
				return false;
			}
		}
		temp2.erase(0,1);
	}
	if (temp2 == temp){
		return true;
	}
	return false;
}				


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
	for (int i=0; i<(s1.length()/2);i++){
		if (tolower(s1[i]) != tolower(s1[s1.length()-i-1])){
			return false; 
		}
	}
	return true;
}


