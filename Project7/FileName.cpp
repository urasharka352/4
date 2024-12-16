#include <iostream>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "RU");
    int n, elementToRemove;

    cout << "Введите количество элементов массива: ";
    cin >> n;

    int* array = new int[n]; // Динамический массив

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Введите элемент для удаления: ";
    cin >> elementToRemove;

    // Удаление элемента
    for (int i = 0; i < n; i++) {
        if (array[i] == elementToRemove) {
            for (int j = i; j < n - 1; j++) {
                array[j] = array[j + 1]; // Сдвиг элементов влево
            }
            n--; // Уменьшаем размер массива
            i--; // Проверяем тот же индекс снова
        }
    }

    // Вывод обновленного массива
    cout << "Обновленный массив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array; // Освобождение памяти

    return 0;
}