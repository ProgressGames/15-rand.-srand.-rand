#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int const SIZE = 10;
    int arr[SIZE];
    srand(time(NULL));
    for (int i= 0;i< SIZE;++i)
    {
        arr[i] = rand() % 10;
    }

    for (int i = 0;i < SIZE;++i)
    {
        cout << arr[i] << endl;
    }
}
