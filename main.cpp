#include <iostream>
#include <ctime>
using namespace std;
// ��������� ����. �����

int main() {
    srand(time(NULL)); // ����� ��� ������� �������
    int a = rand()%10+5; // ������ ����. ����� ( % - ��� ��������, ���� %10 ��� ������������� ����� �� 0 �� 10, %10+5 ������������� ����� �� 5 �� 15 )
    cout << a << endl;
    a = rand(); // ����� �������� ��� ������ �����, � ���� �� �������� �� ���������� ������ �����
    cout << a << endl;
}
