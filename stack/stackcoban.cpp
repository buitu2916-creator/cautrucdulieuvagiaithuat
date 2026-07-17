#include <iostream>

using namespace std;

int main()
{
    int stack[100];   // Mảng để chứa stack
    int top = -1;     // Stack đang rỗng

    // Thêm số 10 vào stack
    top++;
    stack[top] = 10;

    // Thêm số 20
    top++;
    stack[top] = 20;

    // Thêm số 30
    top++;
    stack[top] = 30;


    cout << "Phần tử trên cùng: " << stack[top] << endl;

}
