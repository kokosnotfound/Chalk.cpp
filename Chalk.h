#ifndef CHALK_H
#define CHALK_H

#include <functional>
#include <string>

namespace Chalk {
    namespace Codes {
        constexpr const char *FG_BLACK   = "\x1B[30m";
        constexpr const char *FG_RED     = "\x1B[31m";
        constexpr const char *FG_GREEN   = "\x1B[32m";
        constexpr const char *FG_YELLOW  = "\x1B[33m";
        constexpr const char *FG_BLUE    = "\x1B[34m";
        constexpr const char *FG_MAGENTA = "\x1B[35m";
        constexpr const char *FG_CYAN    = "\x1B[36m";
        constexpr const char *FG_WHITE   = "\x1B[37m";

        constexpr const char *BG_BLACK   = "\x1B[40m";
        constexpr const char *BG_RED     = "\x1B[41m";
        constexpr const char *BG_GREEN   = "\x1B[42m";
        constexpr const char *BG_YELLOW  = "\x1B[43m";
        constexpr const char *BG_BLUE    = "\x1B[44m";
        constexpr const char *BG_MAGENTA = "\x1B[45m";
        constexpr const char *BG_CYAN    = "\x1B[46m";
        constexpr const char *BG_WHITE   = "\x1B[47m";

        constexpr const char *BOLD          = "\x1B[1m";
        constexpr const char *FAINT         = "\x1B[2m";
        constexpr const char *ITALIC        = "\x1B[3m";
        constexpr const char *UNDERLINED    = "\x1B[4m";
        constexpr const char *SLOW_BLINK    = "\x1B[5m";
        constexpr const char *RAPID_BLINK   = "\x1B[6m";
        constexpr const char *INVERSE       = "\x1B[7m";
        constexpr const char *STRIKETHROUGH = "\x1B[9m";

        constexpr const char *RESET = "\x1B[0m";
    }

    class Chalk {
    public:
        std::string                                     code;
        std::function<std::string(const std::string &)> apply;

        explicit Chalk(const std::string &code) : code(code) {
            apply = [code](const std::string &text) {
                return code + text + Codes::RESET;
            };
        }

        std::string operator()(const std::string &text) const {
            return apply(text);
        }
    };

    extern const Chalk fgBlack;
    extern const Chalk fgRed;
    extern const Chalk fgGreen;
    extern const Chalk fgYellow;
    extern const Chalk fgBlue;
    extern const Chalk fgMagenta;
    extern const Chalk fgCyan;
    extern const Chalk fgWhite;

    extern const Chalk bgBlack;
    extern const Chalk bgRed;
    extern const Chalk bgGreen;
    extern const Chalk bgYellow;
    extern const Chalk bgBlue;
    extern const Chalk bgMagenta;
    extern const Chalk bgCyan;
    extern const Chalk bgWhite;

    extern const Chalk bold;
    extern const Chalk faint;
    extern const Chalk italic;
    extern const Chalk underline;
    extern const Chalk slowBlink;
    extern const Chalk rapidBlink;
    extern const Chalk inverse;
    extern const Chalk strikethrough;
}

#endif
