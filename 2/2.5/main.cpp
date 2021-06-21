#include <iostream>
#include <algorithm>
#include <vector>

int max(int a, int b);
double max(double a, double b);
const std::string &max(const std::string &a, const std::string &b);
int max(const std::vector<int> &elems);
double max(const std::vector<double> &elems);
std::string max(const std::vector<std::string> &elems);
int max(const int *array, int size);
double max(const double *array, int size);
std::string max(const std::string *array, int size);

int main()
{
    std::cout << "max(1,2) = " << max(1, 2) << std::endl;
    std::cout << "max(1.0,2.0) = " << max(1.0, 2.0) << std::endl;
    std::cout << "max(\"adf\",\"sdfdsf\") = " << max("adf", "sdfdsf") << std::endl;

    std::vector<int> vInt{1, 2, 3, 4};
    std::cout << "max(vector<int>) = " << max(vInt) << std::endl;
    std::vector<double> vDouble{1.76, 2.1234, 3.5, 2.346};
    std::cout << "max(vector<double>) = " << max(vDouble) << std::endl;
    std::vector<std::string> vString{"1.76, 2.1234, 3.5, 2.346","ga","wert","dsaf"};
    std::cout << "max(vector<string>) = " << max(vString) << std::endl;
    
    int aInt[] = {1,2,3,45};
    std::cout << "max(int[]) = " << max(aInt,sizeof(aInt) / sizeof(aInt[0])) << std::endl;
    double aDouble[] = {-3.5,234.534,24.124,213556.2134};
    std::cout << "max(double[]) = " << max(aDouble,sizeof(aDouble) / sizeof(aDouble[0])) << std::endl;
    std::string aString[] = {"1,2,3,45","sdf","gdrh","zgfsgh"};
    std::cout << "max(string[]) = " << max(aString,sizeof(aString) / sizeof(aString[0])) << std::endl;

    return 0;
}

int max(int a, int b)
{
    return std::max(a, b);
}

double max(double a, double b)
{
    return std::max(a, b);
}

const std::string &max(const std::string &a, const std::string &b)
{
    return std::max(a, b);
}

int max(const std::vector<int> &elems)
{
    if (elems.size() == 0)
    {
        std::cerr << "空vector\n";
        return 0;
    }
    int maxNum = elems[0];
    for (int i = 1; i < elems.size(); ++i)
    {
        maxNum = max(maxNum, elems[i]);
    }
    return maxNum;
}

double max(const std::vector<double> &elems)
{
    if (elems.size() == 0)
    {
        std::cerr << "空vector\n";
        return 0;
    }
    double maxNum = elems[0];
    for (int i = 1; i < elems.size(); ++i)
    {
        maxNum = max(maxNum, elems[i]);
    }
    return maxNum;
}

std::string max(const std::vector<std::string> &elems)
{
    if (elems.size() == 0)
    {
        std::cerr << "空vector\n";
        return 0;
    }
    std::string maxNum = elems[0];
    for (int i = 1; i < elems.size(); ++i)
    {
        maxNum = max(maxNum, elems[i]);
    }
    return maxNum;
}

int max(const int *array, int size)
{
    if (0 == array || size <= 0)
    {
        std::cerr << "空array\n";
        return 0;
    }

    int maxNum = array[0];
    for (int i = 1; i < size; ++i)
    {
        maxNum = max(maxNum, array[i]);
    }
    return maxNum;
}

double max(const double *array, int size)
{
    if (0 == array || size <= 0)
    {
        std::cerr << "空array\n";
        return 0;
    }

    double maxNum = array[0];
    for (int i = 1; i < size; ++i)
    {
        maxNum = max(maxNum, array[i]);
    }
    return maxNum;
}

std::string max(const std::string *array, int size)
{
    if (0 == array || size <= 0)
    {
        std::cerr << "空array\n";
        return 0;
    }

    std::string maxNum = array[0];
    for (int i = 1; i < size; ++i)
    {
        maxNum = max(maxNum, array[i]);
    }
    return maxNum;
}