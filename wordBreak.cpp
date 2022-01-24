/*
https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/wordbreak1official/ojquestion

Here we hv declare dict as wrong  
But the logic is correct

*/

class solution{

    void f(string s, string ans, dict){

        //BASE CASE
        if(s.length() == 0){
            cout << ans;
            return;
        }

        for(int i = 0; i < s.length(); i++){
            string left = s.substr(0, i+3);
            if(dict.contains(left)){      ------------->
                string right = s.substr(i+1);
                f(right, ans + left + " ", dict);
            }
        }
    }

   void WordBreak(string str, vector<string> dict){       --------------->
    
     f(str, "", dict);
     
    }

};














