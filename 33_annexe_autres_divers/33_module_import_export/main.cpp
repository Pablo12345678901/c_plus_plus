/*
// Saisir les instructions suivantes dans le terminal
// important : clang doit être la version téléchargée depuis Homebrew et pas celle de Xcode (voir le path avec "clang --version")
// ici, mathlib.cpp est le fichier d'export et main.cpp est le fichier d'import

clang++ -std=c++20 -c -Xclang -emit-module-interface mathlib.cpp -o mathlib.pcm;
clang++ -std=c++20 -fmodules -c -fprebuilt-module-path=. main.cpp -o main.o;
clang++ -std=c++2a -fmodules -o main main.o *.pcm;

// puis une fois que ces instruction sont terminée, run le fichier compilé avec :

./main

*/

import <iostream>;
import mathlib;

using namespace std;

int main() {
    cout << "Modules, baby!" << endl;
    cout << "2 plus 3 makes " << add(2, 3) << " says module 'mathlib'" << endl;
}