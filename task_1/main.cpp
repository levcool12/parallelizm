#include <iostream>
#include <cmath>

// ������� ��� ���������� ������� � �������� �����
template <typename T>
T fillArrayAndCalculateSum(T* array, int size) {
    T sum = 0.0;
    for (int i = 0; i < size; ++i) {
        array[i] = std::sin(static_cast<T>(i) / static_cast<T>(size) * 2.0 * M_PI);
        sum += array[i];
    }
    return sum;
}

int main() {
    const int size = 10000000;
    
    // ����� ���� ������� (float ��� double) �� ����� ����������
#ifdef USE_FLOAT
    float* array = new float[size];
#else
    double* array = new double[size];
#endif

    // ���������� ������� � ������� �����
    auto sum = fillArrayAndCalculateSum(array, size);

    // ����� ����� � ��������
    std::cout << "Sum: " << sum << std::endl;

    // ������������ ������
    delete[] array;

    return 0;
}