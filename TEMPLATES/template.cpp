#include <iostream>
using namespace std;

template <class T>
class vector{
    T *v;
    int size;
    public:
        // Constructor
        vector(int vector_size){
            size = vector_size;
            v = new T[vector_size];
        }
        // Destructor
        ~vector() {
            delete[] v;
        }
        // Access element
        T& elem(int i) {
            if (i >= size) {
                cout << endl << "ERROR OUT OF RANGE";
            }
            return v[i];
        }
        // Display elements
        void show();
};

// Definition of show() outside class
template <class T>
void vector<T>::show() {
    for (int i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int i;

    vector<int> int_vect(5);
    vector<float> float_vect(4);

    for (i = 0; i < 5; i++){
        int_vect.elem(i) = i + 1;
    }

    for (i = 0; i < 4; i++){
        float_vect.elem(i) = float(i + 1.5);
    }

    cout << "INTEGER VECTOR" << endl;
    int_vect.show();

    cout << "FLOATING VECTOR" << endl;
    float_vect.show();
}
