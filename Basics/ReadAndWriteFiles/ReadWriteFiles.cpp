//On utilise la librairie fstream pour lire et écrire des fichiers

#include <iostream>
#include <fstream>
using namespace std;

static void Write(){
    ofstream MyFile("test.txt");

    cout<<"writing file ..."<<endl;

    if (MyFile.is_open()) {
        MyFile << "This is awesome! \n";
    }
    else {
        cout << "Something went wrong";
    }
    MyFile.close();
}


static void Read(){

    string line;
    ifstream MyFile("test.txt");
    cout<<"reading file ..."<<endl;
    while ( getline (MyFile, line) ) {
        cout << line << '\n';
    }
    MyFile.close();
}

int main() {
    Write();
    Read();
}
