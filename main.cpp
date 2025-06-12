#include <iostream>
using namespace std;

int *function()
{
    static int array[] = {1, 2, 3};
    array[0]++;
    return array;
}

int main()
{
    cout << function()[0];
    cout << function()[0];
}