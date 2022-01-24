/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/words-kselection-1-official/ojquestion

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
bce
bde
cde
*/
class solution{

    void generateSelection(int i, string uniqueString, int count, int k, string ans){

        //BASE CASE
        if(i == uniqueString.length()){
            if(count == k) cout << ans;
        return;
        }

        char ch = uniqueString[i];

        generateSelection(i + 1, uniqueString, count + 1, k, ans + ch);
        generateSelection(i + 1, uniqueString, count + 0, k, ans + "");
    }

    void question(string str, int k){

        //find the uniqueString using set or something like this

        string ans = "";
        generateSelection(0, uniqueString, 0, k, ans);
    }

};