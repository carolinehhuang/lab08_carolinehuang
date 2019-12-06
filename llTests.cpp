#include "linkedList.h"
#include "recLinkedListFuncs.h"
#include "strFuncs.h"
#include "tddFuncs.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	if(argc < 2) {
		std::cerr<< "Usage: "<< argv[0]<< " [num of test to run]" <<std::endl;
		return 1;
	}
	else{
		int testNum = atoi(argv[1]);
		if (testNum ==1) {
			START_TEST_GROUP("CHECK IF ANAGRAM");
			string str1 = "Eleven plus two";
			string str2 = "Twelve plus one";
			assertEquals(true, isAnagram(str1,str2));
			string str3 = "Rats and Mice";
			string str4 = "in cat's dream";
			assertEquals(true, isAnagram(str3,str4));
			string str5 = "cookies";
			string str6 = "milkies";
			assertEquals(false, isAnagram(str5,str6));
		}
		if (testNum ==2) {
			START_TEST_GROUP("CHECK IF PALINDROME");
			string str1 = "redivide";
			assertEquals(false, isPalindrome(str1));
			string str2 = "detartrated";
			assertEquals(true, isPalindrome(str2));
		}
	}
}

