/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/word-kselection-2-official/ojquestion

1. You are given a word (may have one character repeat more than once).
2. You are given an integer k.
2. You are required to generate and print all ways you can select k distinct characters out of the  word.

Sample Input
aabbbccdde
3

Sample Output
abc
abd
abe
acd
ace
ade
bcd
*/
class solution{

void generateSelection(string uniqueString, int count, int k, int last, string ans){

    if(count > k){
        cout << ans;
        return;
    }

    for(int i = lc + 1; i < uniqueString.length(); i++){
        char ch = uniqueString[i];
        generateSelection(uniqueString, count + 1, k, i, ans + ch);
    }
}

void question(string str, int k){

    //find the uniqueString using set or something like this

    string ans = "";
    generateSelection(uniqueString, 0, k, -1 , ans);
}

};