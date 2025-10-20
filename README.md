# Linked Lists

C implementations of classic linked list problems from the (Stanford CS Education Library)[https://cslibrary.stanford.edu/105].

## Build Instructions

This project uses [just](https://github.com/casey/just) as a build tool. Make sure you have `just` and `gcc` installed.

### Prerequisites
- GCC compiler
- just command runner
- Linux/WSL environment

## Build & Run

```bash
# Build and run build123
❯ just run test_utils

# Or build only
❯ just build test_utils

# Clean binaries
❯ just clean
```

## Output

```
❯ just run test_utils
gcc -Wall -Wpedantic -Werror src/test_utils.c -o target/test_utils
./target/test_utils
BEFORE: List[0]: head -> NULL
AFTER : List[3]: head -> [10] -> [20] -> [30] -> NULL
```
