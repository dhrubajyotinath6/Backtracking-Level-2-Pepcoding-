// https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/recursion-and-backtracking/crossword-puzzle-official/ojquestion

class Solution {
    
    bool canPlaceWordHorizontally(vector<vector<char>>& board, string word, int i, int j){
        
        if(j - 1 >= 0 && board[i][j-1] != '#' ) return false;        
        else if(j + word.length() <= board[0].size() && board[i][j] + word.length() != '#') return false;
        
        for(int jj = 0; jj < word.length(); jj++){
            
            if(j + jj >= board[0].size()) return false;
            
            if(board[i][j + jj] == '-' || board[i][j + jj] == word[jj]) continue;
            else return false;
        }
        return true;
    }
    
     bool canPlaceWordVertically(vector<vector<char>>& board, string word, int i, int j){
         
         if(i - 1 >= 0 && board[i - 1][j] != '#' ) return false;        
         else if(i + word.length() <= board[0].size() && board[i][j] + word.length() != '#') return false;
        
         for(int ii = 0; ii < word.length(); ii++){
            
            if(i + ii >= board[0].size()) return false;
            
            if(board[i + ii][j] == '-' || board[i + ii][j] == word[ii]) continue;
            else return false;
        }
        return true;
     }
        
    bool placeWordHorizontally(vector<vector<char>>& board, string word, int i, int j){
        
        bool wePlaced[word.length()];

        for(int jj = 0; jj < word.length(); jj++){
            if(board[i][j + jj] == '-'){
                board[i][j + jj] = word[jj];
                wePlaced[jj] =true'
            }
        }
        return wePlaced;
    }

    bool placeWordVertically(vector<vector<char>>& board, string word, int i, int j){

        bool wePlaced[word.length()];

        for(int ii = 0; ii < word.length(); ii++){
            if(board[i + ii][j] == '-'){
                board[i + ii][j] = word[ii];
                wePlaced[ii] =true'
            }
        }
        return wePlaced;
    }

    void unplacedWordHorizontally(vector<vector<char>>& board, bool wePlaced, int i, int j){
        for(int jj = 0; jj < wePlaced.length; jj++){
            if(wePlaced[jj]  == true) board[i][j + jj] = "-"
        }
    }

    void unplacedWordVertically(vector<vector<char>>& board, bool wePlaced, int i, int j){
        for(int ii = 0; ii < wePlaced.length; ii++){
            if(wePlaced[ii]  == true) board[i + ii][j] = "-"
        }
    }
    
   
    
public:
    void placeWordInCrossword(vector<vector<char>>& board, vector<string> words, int ind) {

        //BASE CASE
        if(ind == words.size()){
            print(board);
            return;
        }
        
        string word = words[ind];
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                
                if(board[i][j] == '-' || board[i][j] == word[0]){
                    
                    if(canPlaceWordHorizontally(board, word, i, j)){
                        bool wePlaced[] = placeWordHorizontally(board, word, i, j);
                        placeWordInCrossword(board, words, ind + 1);
                        unplacedWordHorizontally(board, wePlaced, i, j);
                    }

                    if(canPlaceWordVertically(board, word, i, j)){
                        bool wePlaced[] = placeWordVertically(board, word, i, j);
                        placeWordInCrossword(board, words, ind + 1);
                        unplacedWordVertically(board, wePlaced, i, j);
                    }
                }                
                
            }
        }
        
    }
};