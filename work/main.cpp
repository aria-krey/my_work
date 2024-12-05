#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readFromFile(const std::string& filename, std::vector<std::string>& lines);
void printToScreen(const std::vector<std::string>& lines);
void writeToFile(const std::string& filename, const std::vector<std::string>& lines);

int main() {
    std::string inputFile = "input.txt";
    std::string outputFile = "output.txt";
    std::vector<std::string> lines;

    readFromFile(inputFile, lines);

    printToScreen(lines);
    writeToFile(outputFile, lines);

    return 0;
}

void readFromFile(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();

    /*std::cout << "Содержимое файла " << filename << " (прочитано):" << std::endl;
    for (const auto& l : lines) {
        std::cout << l << std::endl;
    }*/
}
void printToScreen(const std::vector<std::string>& lines) {
}

void writeToFile(const std::string& filename, const std::vector<std::string>& lines) {
}



