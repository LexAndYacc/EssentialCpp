#include <iostream>
using namespace std;

int main()
{
    int answer = 666;
    int guess = 0;
    int tryTimes(0);

    string arr[] = {
        "error1\n",
        "error2\n",
        "error3\n",
        "error4\n"};

    while (cin >> guess)
    {
        if (guess == answer)
        {
            break;
        }
        else
        {
            switch (tryTimes++)
            {
            case 0:
                cout << arr[0];
                break;
            case 1:
                cout << arr[1];
                break;
            case 2:
                cout << arr[2];
                break;
            case 3:
                cout << arr[3];
                break;
            default:
                cout << arr[3];
                break;
            }
        }
    }

    return 0;
}