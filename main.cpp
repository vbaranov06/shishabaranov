#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;


// Функция Nº 1: чтение строк из файла в вектор
void readFromFile(const string& filename, vector<string>& lines)
{
ifstream inputFile(filename);  // Открываем файл для чтения
    if (!inputFile) {
        cout << "Ошибка открытия файла для чтения!!!" << endl;
        return;
    }
    string line;
    while (getline(inputFile, line)) {  // Читаем строки до конца файла
        cout << line << endl;  // Выводим строку на экран
    }

    inputFile.close();  // Закрываем файл после чтения
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> lines;
    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    // Вызов функций
    cout << "чтение строк из файла " << inputFilename <<" в вектор" << endl;
    readFromFile(inputFilename, lines);
    cout << "вывод строк на экран:   " << endl;
    cout << "запись строк в файл " << outputFilename << endl;
    return 0;
}
