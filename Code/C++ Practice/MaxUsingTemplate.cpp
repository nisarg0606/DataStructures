#include <iostream>
using namespace std;
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
int main(int argc, char const *argv[])
{
    //call mymax for int
    cout << myMax<int>(3, 5) << endl;
    //call mymax for double
    cout << myMax<double>(3.0, 5.9) << endl;
    //call mymax for char
    cout << myMax<char>('d', 'n') << endl;

    return 0;
}