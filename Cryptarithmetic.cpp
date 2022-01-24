/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/cryptarithmetic-official/ojquestion

void cryptarithmetic(string unique, map<char,int> mpp, bool usedNumbers[], string s1, string s2, string s3)

   s  e  n  d    ->s1
   m  o  r  e    -> s2
---------------
m  o  n  e  y    -> s3

usedNumbers
          0  - false
          1  - false
          2  - false
          3
          4
          5
          6
          7
          8
          9  - false

mpp   
          0 -> -1
          1 -> -1
          2 -> -1
          3
          4
          5
          6
          7
          8
          9 -> -1
 

unique  ->  s e n d m o r y
    
*/
class solution{

int getNum(string s, map<char,int> mpp){

    int num = 0;
    for(int i = 0; i < s.length(); i++){
        num += mpp.find(s[i];)
    }
    return num;
}

void solution(string unique, int ind, map<char,int> &mpp, bool &usedNumbers[], string s1, string s2, string s3){

    //BASE CASE
    if(ind == unique.length()){
        int num1 = getNum(s1, mpp);
        int num2 = getNum(s2, mpp);
        int num3 = getNum(s3, mpp);

        if(num1 + num2 == num3){
            for(int i = 0; i < 26; i++){
                char ch = (char)('a' + i);

                if(mpp.find(ch) != mpp.end()){
                    cout << ch  << " - " << mpp.find(ch) << endl;
                }
            }
        }
        return;
    }

    char ch = unique[ind];

    for(int i = 0; i <= 9; i++){
        if(usedNumbers[i] == false){
            mpp.insert({ch, i});
            usedNumbers[i] = true;
            solution(unique, ind + 1, mpp, usedNumbers, s1, s2, s3);
            map.insert({ch, -1});
        }
    }

}

void cryptarithmetic(string unique, map<char,int> mpp, bool usedNumbers[], string s1, string s2, string s3){

    solution(unique, 0, mpp, usedNumbers, s1, s2,s3);
}

};






























