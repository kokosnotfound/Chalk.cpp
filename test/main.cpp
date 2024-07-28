#include <iostream>

#include "../Chalk.h"

int main() {
    std::string sampleText = "Sample Text";

    std::cout << Chalk::fgBlack(sampleText) << std::endl;
    std::cout << Chalk::fgRed(sampleText) << std::endl;
    std::cout << Chalk::fgGreen(sampleText) << std::endl;
    std::cout << Chalk::fgYellow(sampleText) << std::endl;
    std::cout << Chalk::fgBlue(sampleText) << std::endl;
    std::cout << Chalk::fgMagenta(sampleText) << std::endl;
    std::cout << Chalk::fgCyan(sampleText) << std::endl;
    std::cout << Chalk::fgWhite(sampleText) << std::endl;

    std::cout << Chalk::bgBlack(sampleText) << std::endl;
    std::cout << Chalk::bgRed(sampleText) << std::endl;
    std::cout << Chalk::bgGreen(sampleText) << std::endl;
    std::cout << Chalk::bgYellow(sampleText) << std::endl;
    std::cout << Chalk::bgBlue(sampleText) << std::endl;
    std::cout << Chalk::bgMagenta(sampleText) << std::endl;
    std::cout << Chalk::bgCyan(sampleText) << std::endl;
    std::cout << Chalk::bgWhite(sampleText) << std::endl;

    std::cout << Chalk::bold(sampleText) << std::endl;
    std::cout << Chalk::faint(sampleText) << std::endl;
    std::cout << Chalk::italic(sampleText) << std::endl;
    std::cout << Chalk::underline(sampleText) << std::endl;
    std::cout << Chalk::slowBlink(sampleText) << std::endl;
    std::cout << Chalk::rapidBlink(sampleText) << std::endl;
    std::cout << Chalk::inverse(sampleText) << std::endl;
    std::cout << Chalk::strikethrough(sampleText) << std::endl;

    std::cout
    << Chalk::fgBlack(sampleText) << " "
    << Chalk::fgRed(sampleText) << " "
    << Chalk::fgGreen(sampleText) << " "
    << Chalk::fgYellow(sampleText) << " "
    << Chalk::fgBlue(sampleText) << " "
    << Chalk::fgMagenta(sampleText) << " "
    << Chalk::fgCyan(sampleText) << "\n"
    << Chalk::fgWhite(sampleText) << " | "

    << Chalk::bgBlack(sampleText) << " "
    << Chalk::bgRed(sampleText) << " "
    << Chalk::bgGreen(sampleText) << " "
    << Chalk::bgYellow(sampleText) << " "
    << Chalk::bgBlue(sampleText) << " "
    << Chalk::bgMagenta(sampleText) << "\n"
    << Chalk::bgCyan(sampleText) << " "
    << Chalk::bgWhite(sampleText) << " | "

    << Chalk::bold(sampleText) << " "
    << Chalk::faint(sampleText) << " "
    << Chalk::italic(sampleText) << " "
    << Chalk::underline(sampleText) << " "
    << Chalk::slowBlink(sampleText) << "\n"
    << Chalk::rapidBlink(sampleText) << " "
    << Chalk::inverse(sampleText) << " "
    << Chalk::strikethrough(sampleText) << std::endl;

    return 0;
}
