#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int rand_num;
    int guess_num;
    rand_num = time(0) % 20;
    cout << "Number = " << rand_num << endl;
    while (rand_num != guess_num)
    {
        cout << "Enter Your Guess : ";
        cin >> guess_num;
        if(guess_num==rand_num)
        {
            cout<<"Congratulations You Guessed The Number Correctly."<<endl;
            return 0;
        }
        else if(guess_num>rand_num)
        {
            cout<<"You Guessed a Larger Number."<<endl;
        }
        else
        {
            cout<<"You Guessed a smaller Number."<<endl;
        }
    }
}
