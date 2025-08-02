# raylib-ocaml-mingw-playground
[![license](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

What would be hard-fun project that allows me to write in C and OCaml while playing with excellent [Raylib](https://www.raylib.com/) library.

More detailed information at [project wiki](https://github.com/fedor-rusak/raylib-ocaml-mingw-playground/wiki/Welcome-to-the-playground!).

# Setup

[Ocaml/MinGW for Win10](https://github.com/fedor-rusak/raylib-ocaml-mingw-playground/wiki/Commentary:-How-to-setup-Ocaml-MinGW-environment-on-Windows-10)

# Run Ocaml

Run this command inside folder with project files to start ocaml interpreter:

```
ocaml
```

Run this command to load Ocaml module (include #):

```
#use "caml_callback.ml";;
```

Now you can call fib function from file:

```
fib 5;;
```

And command to exit (or Ctrl-C):

```
#quit;;
```