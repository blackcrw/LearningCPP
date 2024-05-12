#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    if(argc > 1) {
        if(!strcmp(argv[1], "help")) {
            cout << "Usage: " << argv[0] << " [option]" << endl;
            cout << "Options:" << endl;
            cout << "  help    Display this information" << endl;
            cout << "  version Display the version" << endl;
        } else if(!strcmp(argv[1], "version")) {
            cout << "Version 1.0" << endl;
        } else {
            cout << "Invalid argument" << endl;
        }

    }

    return 0;
}