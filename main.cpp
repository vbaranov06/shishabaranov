#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// ������� �1: ������ ����� �� ����� � ������
void readFromFile(const string& filename, vector<string>& lines)
{
    ifstream inputFile(filename);  // ��������� ���� ��� ������
    if (!inputFile) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {  // ������ ������ �� ����� �����
        lines.push_back(line);  // ��������� ������ � ������
    }

    inputFile.close();  // ��������� ���� ����� ������
}

// ������� �2: ����� ����� �� �����
void printLines(const vector<string>& lines)
{
 for (const auto& line : lines) {
        cout << line << endl;  // ������� ������ ������ �� �����
    }
}

// ������� �3: ������ ����� � ����
void writeToFile(const string& filename, const vector<string>& lines)
{

}
int main()
{
    setlocale(LC_ALL, "Russian");  // ������������� ������� ������ ��� ������
    vector<string> lines;  // ������ ��� �������� �����
    string inputFilename = "input.txt";  // ��� ����� ��� ������
    string outputFilename = "output.txt";  // ��� ����� ��� ������

    // ����� �������
    cout << "������ ����� �� ����� " << inputFilename << " � ������..." << endl;
    readFromFile(inputFilename, lines);

    cout << "����� ����� �� �����: " << endl;
    printLines(lines);

    cout << "������ ����� � ���� " << outputFilename << endl;
    writeToFile(outputFilename, lines);

    return 0;
}
