//Напишите и протестируйте функцию, которая принимает в качестве аргументов адреса трех переменных double и помещает наименьшее значение в первую переменную, среднее значение — во вторую, а наибольшее значение — в третью.
#include <iostream>
using namespace std;
void perem(double& x, double& y, double& z) //передача по ссылке(адресу);
{
    double max, min, med;
    min = x;
    if (y < min)
        min = y;          //поиск минимума;
    if (z < min)
        min = z;
    max = x;
    if (y > max)
        max = y;	//поиск максимума;
    if (z > max)
        max = z;
    if (x != min && x != max)
        med = x;
    if (y != min && y != max)	//поиск среднего;
        med = y;
    if (z != min && z != max)
        med = z;
    x = min;
    y = med;
    z = max;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, z;
    cout << "ВВедите три числа:" << endl;
    cin >> x >> y >> z;
    perem(x, y, z);
    cout << x << " " << y << " " << z << endl;
    system("pause");
    return 0;
}
