#include <iostream>
#include <vector>
using namespace std;

bool IsSizeOK(int size);
const vector<int> *GetPentagonal(int size);
bool ShowPentagoal(const vector<int> &elems, string type = "int");

int main()
{
    if (0 != GetPentagonal(-1))
    {
        ShowPentagoal(*GetPentagonal(-1));
    }
    if (0 != GetPentagonal(0))
    {
        ShowPentagoal(*GetPentagonal(0));
    }
    if (0 != GetPentagonal(10))
    {
        ShowPentagoal(*GetPentagonal(10));
    }
    if (0 != GetPentagonal(1025))
    {
        ShowPentagoal(*GetPentagonal(1025));
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
const vector<int> *GetPentagonal(int size)
{
    static vector<int> elems;

    if (!IsSizeOK(size))
    {
        cerr << "GetPentagonal(): oops: invalid size: "
             << size << " -- can't fulfill request.\n";
        return false;
    }

    for (int ix = elems.size(); ix < size; ++ix)
    {
        elems.push_back((ix + 1) * (3 * (ix + 1) - 1) / 2);
    }

    return &elems;
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