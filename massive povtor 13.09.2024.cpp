// massive povtor 13.09.2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



//1.
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "enter 5 num:";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "reverse:";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/


//2.
/*
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int arr[20];

    cout << "massive:";
    for (int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "even numer:";
    for (int i = 0; i < 20; i +=2)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/


//3.
/*
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int sum = 0;
    int cit = 0;

    cout << "massive:";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
        if (arr[i] > 0)
        {
            sum += arr[i];
            cit++;
        }
    }
    cout << endl;
    if (cit > 0)
    {
        double avrag = sum / (double)cit;
        cout << "vivod:" << avrag << endl;
    }
}
*/

//4.
/*
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int pos = 0;
    int neg = 0;
    int zer = 0;

    cout << "massive:";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 11 - 5;
        cout << arr[i] << " ";

        if (arr[i] > 0)
        {
            pos++;
        }
        else if (arr[i] < 0)
        {
            neg++;
        }
        else
        {
            zer++;
        }
    }
    cout << endl;

    cout << "positive:" << pos << endl;
    cout << "negative:" << neg << endl;
    cout << "zero:" << zer << endl;
}
*/


//5.
/*
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int evenSum = 0;
    int oddSum = 0;
    int oddc = 0;
    
    cout << "massive:";
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
            oddc++;
        }
    }
    cout << endl;

    double avg = (oddc > 0) ? (double)oddSum / oddc : 0;
    cout << "sum even:" << evenSum << endl;
    cout << "sredne odd: " << avg << endl;
}
*/
