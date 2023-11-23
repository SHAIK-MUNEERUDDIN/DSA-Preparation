#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*

o/p:

*
* *
* * *
* * * *
* * * * *

*/

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

* * * * *
* * * *
* * *
* *
*

*/

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

    *
   ***
  *****
 *******
*********

*/

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

*********
 *******
  *****
   ***
    *

*/

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int stars = i;

        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

/*
expectd o/p:

*
**
***
****
*****
****
***
**
*

*/

void pattern11(int n)
{
    int bit = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            bit = 1;
        else
            bit = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << bit << " ";
            bit = 1 - bit;
        }
        cout << "\n";
    }
}

/*
expected o/p:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // num
        for (int j = 0; j < 2 * n - (2 * i); j++)
        {
            cout << " ";
        }

        // space
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}

/*
expected o/p:

1            1
12          21
123        321
1234      4321
12345    54321
123456  654321
12345677654321

*/

void pattern13(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << "\n";
    }
}

/*
expected o/p:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

A
A B
A B C
A B C D
A B C D E

*/

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

A B C D E
A B C D
A B C
A B
A
*/

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

A
B B
C C C
D D D D
E E E E E

*/
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;

        // alphabet
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j < i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << "\n";
    }
}

/*
expected o/p:

E
E D
E D C
E D C B
E D C B A
*/

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {

        // stars

        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < 2 * (i - 1); j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = 1; i <= n; i++)
    {

        // stars

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 0; j < 2 * n - (2 * i); j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
}

/*
expected o/p:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

void pattern20(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
        cout << "\n";
    }
}

/*
expected o/p:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

/*
expected o/p:

****
*  *
*  *
****

*/

void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << "\n";
    }
}

/*
expected o/p:

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9 is combination of 7&8
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    pattern22(n);

    return 0;
}