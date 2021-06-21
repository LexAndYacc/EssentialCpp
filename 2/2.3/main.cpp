#include <iostream>
#include <vector>
using namespace std;

bool IsSizeOK(int size);
bool GetPentagonal(vector<int> &elems, int size);
bool ShowPentagoal(const vector<int> &elems, string type = "int");

int main()
{
    vector<int> elems;
    if (GetPentagonal(elems, -1))
    {
        ShowPentagoal(elems);
    }
    if (GetPentagonal(elems, 0))
    {
        ShowPentagoal(elems);
    }
    if (GetPentagonal(elems, 10))
    {
        ShowPentagoal(elems);
    }
    if (GetPentagonal(elems, 1025))
    {
        ShowPentagoal(elems);
    }

    return 0;
}

bool IsSizeOK(int size)
{
    const int max_size = 1024;
    if (size <= 0 || size > max_size)
    {
        return false;
    }
    return true;
}
//获取序列
bool GetPentagonal(vector<int> &elems, int size)
{
    if (!IsSizeOK(size))
    {
        cerr << "GetPentagonal(): oops: invalid size: "
             << size << " -- can't fulfill request.\n";
        return false;
    }

    elems.clear();
    for (int ix = elems.size(); ix < size; ++ix)
    {
        elems.push_back((ix + 1) * (3 * (ix + 1) - 1) / 2);
    }

    return true;
}
//显示序列
bool ShowPentagoal(const vector<int> &elems, string type)
{
    for (auto item : elems)
    {
        cout << item << " ";
    }
    cout << "\n";
    return true;
}