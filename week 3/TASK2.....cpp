#include <iostream>
using namespace std;

int main() {
    int age;

for (int i = 0; i < 3; i++) {
cin >> age;

string category = (age < 13) ? "Child" :
(age <= 19) ? "Teenager" :"Adult";

cout << "Age " << age << " falls under the category: " << category << endl;
    }
return 0;
}

