#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include<windows.h>

using namespace std;

void Set_Player();
void Draw_Board();
int check();
char a[] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'x'};

int main()
{
    system("cls");
    int p = 1;
    int i, choice;
    char Mark ,key;
    Set_Player();
    cout << string(100, '-') << endl;
    do
    {
        p = (p % 2) ? 1 : 2;
        Draw_Board();
        Mark = (p == 1) ? 'x' : 'o';
        cout << "Player " << p << " : ";
        cin >> choice;

        if (choice == 1 && a[1] == '1')
        {
            a[1] = Mark;
        }
        else if (choice == 2 && a[2] == '2')
        {
            a[2] = Mark;
        }
        else if (choice == 3 && a[3] == '3')
        {
            a[3] = Mark;
        }
        else if (choice == 4 && a[4] == '4')
        {
            a[4] = Mark;
        }
        else if (choice == 5 && a[5] == '5')
        {
            a[5] = Mark;
        }
        else if (choice == 6 && a[6] == '6')
        {
            a[6] = Mark;
        }
        else if (choice == 7 && a[7] == '7')
        {
            a[7] = Mark;
        }
        else if (choice == 8 && a[8] == '8')
        {
            a[8] = Mark;
        }
        else if (choice == 9 && a[9] == '9')
        {
            a[9] = Mark;
        }
        i = check();
        p++;
    } while (i == -1);
    system("cls");
    Draw_Board();
    cout<<string(100 , '-')<<endl;
    if(i==1)
    {
        cout<<"\a player "<<--p<<" win "<<endl;
    }
    else
    {
        cout<<"\a Game draw "<<endl;
    }
    key = _getch();
        if (key == 27)
        {
            cout << "Exiting....." << endl;
            Sleep(1000);
            return 0;
            exit(1);
        }
    getch();
    return 0;
}
void Set_Player()
{
    string n1,n2;
    cout << setw(50) << "Welcome to the Tic Tac Toe game" << endl;
    cout << string(100, '-') << endl;
    cout << "Enter the name of player 1 : ";
    getline(cin >> ws, n1);
    cout << "Enter the name of player 2 : ";
    getline(cin >> ws, n2);
    cout << string(100, '-') << endl;
    cout << n1 << " : x " << endl;
    cout << n2 << " : o " << endl;
}
void Draw_Board()
{
    cout << endl;
    cout << setw(10) << a[1] << setw(10) << " | " << setw(10) << a[2] << setw(10) << " | " << setw(10) << a[3] << endl;
    cout << string(17, '_') << " | " << string(17, '_') << " | " << string(17, '_') << endl;
    cout << setw(10) << a[4] << setw(10) << " | " << setw(10) << a[5] << setw(10) << " | " << setw(10) << a[6] << endl;
    cout << string(17, '_') << " | " << string(17, '_') << " | " << string(17, '_') << endl;
    cout << setw(10) << a[7] << setw(10) << " | " << setw(10) << a[8] << setw(10) << " | " << setw(10) << a[9] << endl;
}
int check()
{
    if (a[1] == a[2] && a[2] == a[3])
    {
        return 1;
    }
    if (a[4] == a[5] && a[5] == a[6])
    {
        return 1;
    }
    if (a[7] == a[8] && a[8] == a[9])
    {
        return 1;
    }

    if (a[1] == a[4] && a[4] == a[7])
    {
        return 1;
    }
    if (a[2] == a[5] && a[5] == a[8])
    {
        return 1;
    }
    if (a[3] == a[6] && a[6] == a[9])
    {
        return 1;
    }

    if (a[1] == a[5] && a[5] == a[9])
    {
        return 1;
    }
    if (a[3] == a[5] && a[5] == a[7])
    {
        return 1;
    }
    if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' && a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
