#include <iostream>
using namespace std;

int main()
{
    char user_name[20];
    cout << "Enter Name:\n";
    cin >> user_name;
    while (strlen(user_name) < 2)
    {
        cin >> user_name;
    }

    cout << "Hello " << user_name;

    return 0;
}