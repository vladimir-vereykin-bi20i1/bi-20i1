// kalkulat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int plusnumber(int first, int second)
{
    return first + second;
}
int minusnumber(int first, int second)
{
    return first - second;
}
int multinumber(int first, int second)
{
    return first * second;
}
int delenie(int first, int second)
{
    return first / second;
}
int square(int first)
{
    return first * first;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    char operation = 'c';
    int first, second;

    while (operation != 'exit')
    {
        cout << "что нужно сделать?(не вводи больше десяти символов):плюсование(+),минусование(-),деление(/),умножение(*),квадрат(^),выход (e):";
        cin >> operation;

        switch (operation)
        {
        case '+':
            cin >> first;
            cin >> second;
            cout << first << "+" << second << "=" << plusnumber(first, second) << endl;
            break;
        case '-':
            cin >> first;
            cin >> second;
            cout << first << "-" << second << "=" << minusnumber(first, second) << endl;
            break;
        case '/':
            cin >> first;
            cin >> second;
            cout << first << "/" << second << "=" << delenie(first, second) << endl;
            break;
        case '*':
            cin >> first;
            cin >> second;
            cout << first << "*" << second << "=" << multinumber(first, second) << endl;
            break;
        case '^':
            cin >> first;
            cin >> first;
            cout << first << "*" << first << "=" << square(first) << endl;
        case 'e':
            return 0;
        default:
            cout << "что-то пошло не так..." << endl;
        }
    }

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
