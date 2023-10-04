#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    
    double x = 0, f,h;
    int a, b;

    
    cout << "Введите пределы a, b, и шаг h: ";
        cin >> a >> b >> h;
        cout << "x" << "\t" << "y" << endl;

        for (double x = a; x <= b ; x += h) // проверка введённых файлов с помощью цикла
            
            if (x <= -1)
                f = x * (-1);
            else if (x <= 1)
                f = 3 * pow(x, 2);
            else
                f = 1;
            
            cout << x << "\t" << f << endl; //вывод данных

        }
    
}
