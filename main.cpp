#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Функция №1: чтение строк из файла в вектор
void readFromFile(const string& filename, vector<string>& lines)
{
    ifstream inputFile(filename);  // Открываем файл для чтения
    if (!inputFile) {
        cerr << "Ошибка открытия файла для чтения!" << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {  // Читаем строки до конца файла
        lines.push_back(line);  // Добавляем строку в вектор
    }

    inputFile.close();  // Закрываем файл после чтения
}

// Функция №2: вывод строк на экран
void printLines(const vector<string>& lines)
{
 for (const auto& line : lines) {
        cout << line << endl;  // Выводим каждую строку на экран
    }
}

// Функция №3: запись строк в файл
void writeToFile(const string& filename, const vector<string>& lines)
{

}
int main()
{
    setlocale(LC_ALL, "Russian");  // Устанавливаем русскую локаль для вывода
    vector<string> lines;  // Вектор для хранения строк
    string inputFilename = "input.txt";  // Имя файла для чтения
    string outputFilename = "output.txt";  // Имя файла для записи

    // Вызов функций
    cout << "Чтение строк из файла " << inputFilename << " в вектор..." << endl;
    readFromFile(inputFilename, lines);

    cout << "Вывод строк на экран: " << endl;
    printLines(lines);

    cout << "Запись строк в файл " << outputFilename << endl;
    writeToFile(outputFilename, lines);

    return 0;
}
