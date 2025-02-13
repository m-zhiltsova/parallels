#include <iostream>
#include <cmath>
using namespace std;
#define length 10000000

template <typename T>
T calculate_sum_of_sin() {
    T* array = new T[length];
    T sum = 0;

    for (int i = 0; i < length; ++i) {
        array[i] = sin(2 * M_PI * i / length);
        sum += array[i];
    }

    delete[] array;
    return sum;
}

int main() {

#ifdef USE_DOUBLE
    double sum = calculate_sum_of_sin<double>();
    cout << "Sum (double): " << sum << endl;
#elif defined(USE_FLOAT)
    float sum = calculate_sum_of_sin<float>();
    cout << "Sum (float): " << sum << endl;
#else
    float sum = calculate_sum_of_sin<float>();
    cout << "Sum (default float): " << sum << endl;
#endif

    return 0;
}
