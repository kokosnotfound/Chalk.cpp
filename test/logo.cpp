#include <iostream>

#include "../Chalk.h"

int main() {
    std::cout << "\n\n\n\n\n\n";
    std::string ascii = " _____  _           "
            "  _  _              "
            "             \n"
            "/  __ \\| |         "
            "  | || |            "
            "              \n"
            "| /  \\/| |__    __ "
            "_ | || | __     ___ "
            " _ __   _ __  \n"
            "| |    | \'_ \\  / _"
            "` || || |/ /    / __"
            "|| \'_ \\ | \'_ \\ "
            "\n"
            "| \\__/\\| | | || (_"
            "| || ||   <  _ | (__"
            " | |_) || |_) |\n"
            " \\____/|_| |_| \\__"
            ",_||_||_|\\_\\(_) \\"
            "___|| .__/ | .__/ "
            "\n"
            "                    "
            "                   |"
            " |    | |    \n"
            "                    "
            "                   |"
            "_|    |_|    ";

    int colorIndex = 0;
    for (char c : ascii) {
        if (c != ' ' && c != '\n') {
            switch (colorIndex % 6) {
                case 0: std::cout << Chalk::fgRed(std::string(1, c)); break;
                case 1: std::cout << Chalk::fgYellow(std::string(1, c)); break;
                case 2: std::cout << Chalk::fgGreen(std::string(1, c)); break;
                case 3: std::cout << Chalk::fgCyan(std::string(1, c)); break;
                case 4: std::cout << Chalk::fgBlue(std::string(1, c)); break;
                case 5: std::cout << Chalk::fgMagenta(std::string(1, c)); break;
                default: ;
            }
            colorIndex++;
        } else {
            std::cout << c;
        }
    }

    std::cout << "\n\n\n\n\n\n";

    return 0;
}
