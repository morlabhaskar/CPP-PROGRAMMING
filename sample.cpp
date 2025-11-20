// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter Number :" << endl;
//     cin >> num;
//     cout << "Entered Number is : " << num;
//     return 0;
// }

////example of call by value
#include <iostream>
using namespace std;
void changeValue(int x){
    x = 50;  // This can't changes the original variable
}
int main() {
    int a = 10;
    changeValue(a);
    cout << "Value of a after function call: " << a;  // Output: 10
    return 0;
}

//example of call by reference
// #include <iostream>
// using namespace std;
// void changeValue(int &x) {
//     x = 50;  // This changes the original variable
// }
// int main() {
//     int a = 10;
//     changeValue(a);
//     cout << "Value of a after function call: " << a;  // Output: 50
//     return 0;
// }
