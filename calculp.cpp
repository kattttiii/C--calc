#include <iostream>
#include <cmath>
#include <cstdint>
#include <locale>

using namespace std;

int a;
int b;
int count;
int f;

void SwitchCase(int op);

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "1.Сложение\n2.Вычитание\n3.Умножение\n4.Деление5.Возведение в степень\n6.Нахождение квадратного корня\n7.Нахождение 1 процента от числа\n8.Найти факториал числа\n9.Выйти из программы\n";
    cout << "Выберите действие" << endl;
    int op;
    cin >> op;
    SwitchCase(op);
    return 0;
}

void SwitchCase(int op)
{
    switch (op)
    {
    case 1:
    {
        int a, b, sum;
        cout << "Введите первое число:" << endl;
        cin >> a;
        cout << "Введите второе число:" << endl;
        cin >> b;
        sum = a + b;
        cout << "Сумма чисел: " << sum << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 2:
    {
        int a, b, ch;
        cout << "Введите первое число:" << endl;
        cin >> a;
        cout << "Введите второе число:" << endl;
        cin >> b;
        ch = a - b;
        cout << "Разность чисел: " << ch << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 3:
    {
        int a, b, ym;
        cout << "Введите первое число:" << endl;
        cin >> a;
        cout << "Введите второе число:" << endl;
        cin >> b;
        ym = a * b;
        cout << "Произведение чисел: " << ym << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 4:
    {
        int a, b, dl;
        cout << "Введите первое число:" << endl;
        cin >> a;
        cout << "Введите второе число:" << endl;
        cin >> b;
        dl = a / b;
        cout << "Частное чисел: " << dl << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 5:
    {
        int a, b, st;
        cout << "Введите первое число:" << endl;
        cin >> a;
        cout << "Введите второе число:" << endl;
        cin >> b;
        st = pow(a, b);
        cout << "Возведенное число в степень: " << st << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 6:
    {
        int a, kr;
        cout << "Введите первое число:" << endl;
        cin >> a;
        kr = sqrt(a);
        cout << "Корень из числа: " << kr << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 7:
    {
        int a;
        cout << "Введите число:" << endl;
        cin >> a;
        a = a / 100;
        cout << "Процент: " << a << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 8:
    {
        int a, result;
        cout << "Введите число:" << endl;
        cin >> a;
        result = 1;

        for (int i = 1; i <= a; i++)
        {
            result *= i;
        }
        cout << "Факториал числа: " << result << endl;
        cout << "Выберите действие:" << endl;
        int newOP;
        cin >> newOP;
        SwitchCase(newOP);
        break;
    }
    case 9:
    {
        exit(0);
        break;
    }
    default:
    {
        cout << "Ошибка" << endl;
        break;
    }
    }
}