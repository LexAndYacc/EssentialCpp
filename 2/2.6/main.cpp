#include <iostream>
#include <vector>

template <typename T>
T MyMax(T t1, T t2);
template <typename T>
T MyMax(std::vector<T> elems);
template <typename T>
T MyMax(const T *array, int size);

int main()
{
    std::cout << "max(1,2) = " << MyMax(1, 2) << std::endl;
    std::cout << "max(1.0,2.0) = " << MyMax(1.0, 2.0) << std::endl;
    std::cout << "max(\"adf\",\"sdfdsf\") = " << MyMax("adf", "sdfdsf") << std::endl;

    std::vector<int> vInt{1, 2, 3, 4};
    std::cout << "max(vector<int>) = " << MyMax(vInt) << std::endl;
    std::vector<double> vDouble{1.76, 2.1234, 3.5, 2.346};
    std::cout << "max(vector<double>) = " << MyMax(vDouble) << std::endl;
    std::vector<std::string> vString{"1.76, 2.1234, 3.5, 2.346", "ga", "wert", "dsaf"};
    std::cout << "max(vector<string>) = " << MyMax(vString) << std::endl;

    int aInt[] = {1, 2, 3, 45};
    std::cout << "max(int[]) = " << MyMax(aInt, sizeof(aInt) / sizeof(aInt[0])) << std::endl;
    double aDouble[] = {-3.5, 234.534, 24.124, 213556.2134};
    std::cout << "max(double[]) = " << MyMax(aDouble, sizeof(aDouble) / sizeof(aDouble[0])) << std::endl;
    std::string aString[] = {"1,2,3,45", "sdf", "gdrh", "zgfsgh"};
    std::cout << "max(string[]) = " << MyMax(aString, sizeof(aString) / sizeof(aString[0])) << std::endl;

    return 0;
}

template <typename T>
T MyMax(T t1, T t2)
{
    return std::max(t1, t2);
}

template <typename T>
T MyMax(std::vector<T> elems)
{
    if (elems.size() == 0)
    {
        std::cerr << "空vector\n";
        return 0;
    }
    T maxItem = elems[0];
    for (int i = 1; i < elems.size(); ++i)
    {
        maxItem = MyMax(maxItem, elems[i]);
    }
    return maxItem;
}

template <typename T>
T MyMax(const T *array, int size)
{
    if (0 == array || size <= 0)
    {
        std::cerr << "空array\n";
        return 0;
    }

    T maxNum = array[0];
    for (int i = 1; i < size; ++i)
    {
        maxNum = MyMax(maxNum, array[i]);
    }
    return maxNum;
}