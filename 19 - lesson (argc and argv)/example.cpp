#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    if(argc > 1) {
        if(!strcmp(argv[1], "help")) {
            std::cout << "usage: " << argv[0] << " [option]" << std::endl;
            std::cout << "options:" << std::endl;
            std::cout << "  help    display this information" << std::endl;
            std::cout << "  version display the version" << std::endl;
            std::cout << "  git     display this github" << std::endl;
        } else if(!strcmp(argv[1], "version")) {
            std::cout << "[#] version 0.0.1 alpha" << std::endl;
        }else if (!strcmp(argv[1], "git")) {
            std::cout << "[@] https://github.com/sychx/learning-cpp" << std::endl;
        } else {
            std::cout << "[!] invalid argument" << std::endl;
        }
    } else {
        std::cout << "[?] use argument help" << std::endl;
    }

    return 0;
}