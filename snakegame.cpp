#include <bits/stdc++.h>
#include <wincon.h>
#include <winbase.h>
#include <conio.h>
using namespace std;
bool gameOver;
const int N = 20;
int width = N;
int height = N;
int headX, headY, bangX, bangY, score;
int tailX[100];
int tailY[100];
int tailLength;
bool opL = false;
bool opR = false;
bool opU = false;
bool opD = false;
enum Direction
{
    stop = 0,
    LEFT,
    RIGHT,
    up,
    down
};
Direction dr;
void setup()
{
    gameOver = false;
    dr = stop;
    score = 0;
    tailLength = 0;
    headX = width / 2;
    headY = height / 2;
    srand(time(0));
    bangX = rand() % (width - 1);
    bangY = rand() % (height - 1);
}
void graphics()
{
    system("cls");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 0});
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    for (int i = 0; i <= width; i++)
    {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (j == 0)
                cout << "#";
            if (j == width - 1)
                cout << "#";
            if (i == headY && j == headX)
                cout << "O";
            else if (i == bangY && j == bangX)
                cout << "@";
            else
            {
                bool space = true;
                for (int k = 0; k < tailLength; k++)
                {
                    if (i == tailY[k] && j == tailX[k])
                    {
                        cout << "8";
                        space = false;
                    }
                }
                if (space)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i <= width; i++)
    {
        cout << "#";
    }
    cout << endl;
    cout << "Score: " << score << endl;
}
void gameplay()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    tailX[0] = headX;
    tailY[0] = headY;
    for (int i = 1; i < tailLength; i++)
    {
        swap(prevX, tailX[i]);
        swap(prevY, tailY[i]);
    }

    switch (dr)
    {
    case LEFT:
        if (!opR)
        {
            headX--;
            opL = true;
            opD = false;
            opU = false;
        }
        else if (opR)
        {
            headX++;
        }
        break;
    case RIGHT:
        if (!opL)
        {
            headX++;
            opR = true;
            opD = false;
            opU = false;
        }
        else if (opL)
        {
            headX--;
        }

        break;
    case up:
        if (!opD)
        {
            headY--;
            opU = true;
            opL = false;
            opR = false;
        }
        else if (opD)
        {
            headY++;
        }
        break;
    case down:
        if (!opU)
        {
            headY++;
            opD = true;
            opL = false;
            opR = false;
        }
        else if (opU)
        {
            headY--;
        }
        break;

    default:
        break;
    }
    if (headX < 0)
        headX = width - 1;
    else if (headX > width - 2)
        headX = 0;
    if (headY < 0)
        headY = height - 1;
    else if (headY > height)
        headY = 0;

    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == headX && tailY[i] == headY)
        {
            gameOver = true;
            cout << "GAME OVER";
        }
    }
    if (headX == bangX && headY == bangY)
    {
        score += 10;
        srand(time(0));
        bangX = rand() % (width - 1);
        bangY = rand() % (height - 1);
        tailLength++;
    }
}
void control()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            dr = up;
            break;
        case 'a':
            dr = LEFT;
            break;
        case 's':
            dr = down;
            break;
        case 'd':
            dr = RIGHT;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
int main()
{
    setup();
    while (!gameOver)
    {
        Sleep(1);
        graphics();
        Sleep(1);
        gameplay();
        Sleep(1);
        control();
        Sleep(1);
    }

    return 0;
}