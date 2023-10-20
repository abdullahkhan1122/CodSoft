#include <iostream>
#include <vector>

using namespace std;

void initializeBoard(vector<vector<char>> &board)
{
    for (int i = 0; i < 3; i++)
    {
        vector<char> row(3, ' ');
        board.push_back(row);
    }
}

void displayBoard(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
            if (j < 2)
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2)
        {
            cout << "---------" << endl;
        }
    }
}

bool checkWin(const vector<vector<char>> &board, char player)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
        {
            return true;
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true;
    }
    return false;
}

bool checkDraw(const vector<vector<char>> &board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board;
    initializeBoard(board);
    char currentPlayer = 'X';
    bool gameover = false;

    while (!gameover)
    {
        system("clear");

        cout << "TIC-TAC-TOE GAME" << endl;
        displayBoard(board);
        cout << "Player " << currentPlayer << "'s turn. Enter your move (row[1-3] column[1-3]): ";
        int row, col;
        cin >> row >> col;

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ')
        {
            board[row - 1][col - 1] = currentPlayer;

            if (checkWin(board, currentPlayer))
            {
                system("clear");
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameover = true;
            }
            else if (checkDraw(board))
            {
                system("clear");
                displayBoard(board);
                cout << "It's a draw!" << endl;
                gameover = true;
            }
            else
            {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        }
        else
        {
            cout << "Invalid move. Try again." << endl;
        }
    }

    cout << "Do you want to play again? (yes/no): ";
    string playAgain;
    cin >> playAgain;

    if (playAgain == "yes" || playAgain == "Yes")
    {
        initializeBoard(board);
        gameover = false;
        currentPlayer = 'X';
    }

    return 0;
}
