/*
Задача 1
Что нужно сделать
Необходимо из заданного пользователем вектора удалить число X.

Как работает программа
1. Пользователь вводит с клавиатуры число n — размер вектора, который надо заполнять.
2. Пользователь вводит n целых чисел, которые заполняют вектор.
3. Пользователь вводит значение — X. X — удаляемое из вектора значение. Необходимо удалить из вектора все элементы, 
которые равны заданному значению.
4. В конце программы необходимо вывести итоговое состояние вектора.

Пример выполнения

Input vector size: 5
Input numbers: 1 3 3 5 1
Input number to delete: 3
Result: 1 5 1
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int size, number_delete;

    cout << "Input vector size: ";
    cin >> size;

    vector<int> v(size);

    cout << "Input numbers: ";
    for (int i=0; i<size;++i){
        cin >> v[i];
    }

    cout << "Input number to delete: ";
    cin >> number_delete;

    for (size_t i=0; i<v.size(); ++i){
        while (v[i] == number_delete && i < v.size()){
            for (size_t j = i; j<v.size()-1; ++j){
                v[j] = v[j+1];
            }
            v.pop_back();
        }
    }

    for (size_t i=0; i<v.size(); ++i){
        cout << v[i] << " ";
    }

}