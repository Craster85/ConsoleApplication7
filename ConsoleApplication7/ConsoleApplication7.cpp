#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    while (true) {
        int string, fine, salary, menu;
        cout << "1 - пользователь вводит желаемый доход Васи и количество опозданий,"
            "\n\tпосчитать, сколько строк кода ему надо написать" << endl;
        cout << "2 - пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты. "
            "\n\tПосчитать, сколько раз Вася может опоздать" << endl;
        cout << "3 - пользователь вводит количество строк кода и количество опозданий, определить, "
            "\n\tсколько денег заплатят Васе и заплатят ли вообще." << endl;
        cin >> menu;
        switch (menu) {
        case 1: {
            cout << "вы в 1 меню вам надо:" << endl;
            cout << "Ввести желаемый доход и количество опозданий:\n";
            cin >> salary >> fine;
            string = ((salary - ((fine / 3) * 20)) / 50) * 100;
            cout << "нужно написать " << string << " строк кода" << endl;
        }
              break;
        case 2: {
            cout << "вы в 2 меню вам надо:" << endl;
            cout << "Ввести количество строк кода и желаемую зарплату:\n";
            cin >> string >> salary;
            string = (string / 100) * 50;
            if (salary > string) {
                salary = ((salary - string) / 50) * 100;
                cout << "Васе надо написать " << salary << " строк кода чтоб получить желаемую зп" << endl;
                cout << "Васе опоздать можно 2 раза, а 3 раз пойдет в - к зарплате" << endl;
            }
            else
                cout << "Вася думай что пишешь" << endl;
        }
              break;
        case 3: {
            cout << "вы в 3 меню вам надо:" << endl;
            cout << "Ввести количество строк кода и количество опозданий:\n";
            cin >> string >> fine;
            //
            salary = ((string / 100) * 50) - ((fine / 3) * 20);
            (salary >= 0) ? cout << salary << "$ Вася заработал\n" : cout << salary << endl;
        }
              break;
        }
        return 0;
    }
}