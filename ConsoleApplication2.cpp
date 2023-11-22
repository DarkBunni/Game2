// Игра Guess My Number 2.0
// Классическая игра в угадывание чисел где игрок и компьютер меняются местами
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
    int tries = 0;
    int secretNumber;
    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Enter secret number: ";
    cin >> secretNumber; cout << endl;
    do
    {
        int guess = rand() % 100 + 1; //случайное число в деапазоне от 1 до 100
        cout << "[Computer] Enter a guess: ";
        cout << guess;
        ++tries;
        if (guess > secretNumber)
        {
            cout << "\nToo high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "\nToo low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
            break;
        }
    } while (true);
    system("pause");
    return 0;
}