#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int array[100];
    int i = 0;
    while (cin >> array[i])
    {
        i++;
    }

    vector<int> v(array, array + i);

    int sum = 0;
    for (int j = 0; j < i; j++)
    {
        sum += array[j];
    }
    cout << sum << "  " << sum / 1.0 / i << endl;

    sum = 0;
    for (int j = 0; j < v.size(); j++)
    {
        sum += array[j];
    }
    cout << sum << "  " << sum / 1.0 / i;

    return 0;
}