#include<iostream>

using namespace std;

void input(int& a, int& b){
    cout << "Nhap gia tri phan tu 1: ";
    cin >> a;
    cout << "Nhap gia tri phan tu 2: ";
    cin >> b;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    input(num1, num2);
    cout << "Gia tri truoc khi hoan doi\n";
    cout << "Gia tri 1: " << num1 << endl;
    cout << "Gia tri 2: " << num2 << endl;

    cout << "------------------------------\n";

    swap(&num1, &num2);
    cout << "Gia tri sau khi hoan doi\n";
    cout << "Gia tri 1: " << num1 << endl;
    cout << "Gia tri 2: " << num2 << endl;
    return 0;
}
