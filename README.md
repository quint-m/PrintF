# ft_printf

`ft_printf` is a custom implementation of the C standard library function `printf`. Built from scratch, this project showcases a deep understanding of formatting and string manipulation in C. It relies on `libft`, a custom C standard library implementation, for many of its underlying functionalities.

## Features

- Supports standard `printf` conversions:
  - `%c` - Character
  - `%s` - String
  - `%p` - Pointer address
  - `%d` and `%i` - Signed integers
  - `%u` - Unsigned integers
  - `%x` and `%X` - Hexadecimal (lowercase and uppercase)
  - `%%` - Literal `%` symbol
- Handles basic flags, width, and precision specifications.
- Efficient and robust handling of edge cases.

## Requirements

- A functioning `libft` implementation (see [libft repository](#) for more details).
- GNU Make.
- A C compiler supporting the C99 standard or later (e.g., `gcc`).

## Installation

Clone the repository and compile the project using the Makefile:

```bash
git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
make
```

The `make` command will generate a `libftprintf.a` static library file.

## Usage

To use `ft_printf` in your project, include the header file and link against the static library:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```

Compile your program with the library:

```bash
gcc -o program main.c -L. -lftprintf
```
## Contribution

Contributions, bug reports, and suggestions are welcome. Please create an issue or open a pull request.
