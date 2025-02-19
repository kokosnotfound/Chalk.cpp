```
 _____  _             _  _
/  __ \| |           | || |
| /  \/| |__    __ _ | || | __     ___  _ __   _ __
| |    | '_ \  / _' || || |/ /    / __|| '_ \ | '_ \
| \__/\| | | || (_| || ||   <  _ | (__ | |_) || |_) |
 \____/|_| |_| \__,_||_||_|\_\(_) \___|| .__/ | .__/
                                       | |    | |
                                       |_|    |_|
```

## Features
- Style your terminal strings with ease
- Supports colors, background colors, and various text styles
- Chainable API for combining styles
- Lightweight and easy to integrate

## Installation
You can integrate chalk.cpp into your project by including the `Chalk.cpp` and `Chalk.h`. Examples can be found in `./test/` folder and in [Examples section](#examples).

## Examples

### Basic styling

```cpp
std::cout << Chalk::fgBlue("Hello World") << std::endl;
```
### Combined styles

```cpp
std::cout << Chalk::fgMagenta(bold(underline("Hello World"))) << std::endl;
```
### Background colors

```cpp
std::cout << Chalk::bgGreen(sampleText) << std::endl;
```

## Options

<img src="https://i.imgur.com/ROGRF3S.png">

### Foreground Colors
-  `Chalk::fgBlack` - Black text
- `Chalk::fgRed` - Red text
-  `Chalk::fgGreen`  - Green text
- `Chalk::fgYellow` - Yellow text
- `Chalk::fgBlue` - Blue text
-  `Chalk::fgMagenta` - Magenta text
-  `Chalk::fgCyan` - Cyan text
-  `Chalk::fgWhite` - White text
### Background Colors
-  `Chalk::bgBlack` - Black background
-  `Chalk::bgRed`- Red background
- `Chalk::bgGreen` - Green background
- `Chalk::bgYellow` - Yellow background
- `Chalk::bgBlue` - Blue background
- `Chalk::bgMagenta` - Magenta background
- `Chalk::bgCyan` - Cyan background
-  `Chalk::bgWhite`- White background
### Text Styles
-  `Chalk::bold` - Bold text
-  `Chalk::faint` - Faint text
-  `Chalk::italic` - Italic text
- `Chalk::underline` - Underlined text
- `Chalk::slowBlink` - Slow blinking text
-  `Chalk::rapidBlink` - Rapid blinking text
- `Chalk::inverse` - Inverse colors
- `Chalk::strikethrough` - Strikethrough text
