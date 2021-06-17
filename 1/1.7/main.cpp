#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v;
    ifstream infile("test.txt");
    ofstream outfile("test2.txt");

    string temp;
    while (infile >> temp)
    {
        v.push_back(temp);
    }

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }

    sort(v.begin(),v.end());

    for (int j = 0; j < v.size(); j++)
    {
        outfile << v[j] << " ";
    }


    return 0;
}