#include <iostream>
#include <vector>

int main() {

    std::vector<int> grades(8);
    for (int i = 0; i < 8; i++) {
        std::cout << "Enter grade for student " << i+1 << ": ";
        std::cin >> grades[i];
    }

    int approved = 0, reprobated = 0;
    int sum = 0;

    for (int i = 0; i < 8; i++) {
        sum += grades[i];
        if (grades[i] >= 70) {
            approved++;
        } else {
            reprobated++;
        }
    }

    double average = static_cast<double>(sum) / 8;
    std::cout << "Approved students: " << approved << std::endl;
    std::cout << "Reprobated students: " << reprobated << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}