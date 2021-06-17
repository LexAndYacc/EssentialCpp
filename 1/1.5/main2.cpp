#include <iostream>
using namespace std;

int main()
{
    string user_name;
    cout << "Enter Name:\n";
    cin >> user_name;
    while (user_name.length() < 2)
    {
        cin >> user_name;
    }

    cout << "Hello " << user_name;

    return 0;
}