# A simple justfile for building the C project

# Common aliases
alias b := build
alias r := run
alias c := clean

# list available recipes
default:
    @just --list --unsorted

# build specified {target}
build target:
    gcc -Wall -Wpedantic -Werror src/{{target}}.c -o target/{{target}}

# build and run specified {target}
run target: (build target)
    ./target/{{target}}

# remove all binaries
clean:
    rm -f target/**
