#include <iostream>

unsigned long long fib(unsigned long long* arrF, int n) {
    arrF[0] = 0;
    arrF[1] = 1;
    for (unsigned long long i = 2; i <= n; i++)
    {
        arrF[i] = arrF[i - 1] + arrF[i - 2];
    }
    return arrF[n];
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число n: ";
    int n = 0;
    std::cin >> n;
    unsigned long long* arrF = new unsigned long long[n + 1] {};
    std::cout << "Число Фибоначчи: " << fib(arrF, n) << std::endl;
    delete[] arrF;
    arrF = nullptr;
    return 0;
}