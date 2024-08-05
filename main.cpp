/*
������ 1
��� ����� �������
���������� �� ��������� ������������� ������� ������� ����� X.

��� �������� ���������
1. ������������ ������ � ���������� ����� n � ������ �������, ������� ���� ���������.
2. ������������ ������ n ����� �����, ������� ��������� ������.
3. ������������ ������ �������� � X. X � ��������� �� ������� ��������. ���������� ������� �� ������� ��� ��������, 
������� ����� ��������� ��������.
4. � ����� ��������� ���������� ������� �������� ��������� �������.

������ ����������

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