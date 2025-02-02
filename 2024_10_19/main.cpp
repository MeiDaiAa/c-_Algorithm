#include "solveSudoku.cpp"

int main(){
    vector<vector<char>>board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    Solution2 solution;
    Identity identity;

    solution.solveSudoku(board);

    for(auto &i : board){
        for(auto&ii : i){
            cout << ii << ' ';
        }
        cout << endl;
    }

    if(identity.isValidSudoku(board)) cout << "isValid" << endl;
    else cout << "isInvalid" << endl;
    
    return EXIT_SUCCESS;
}