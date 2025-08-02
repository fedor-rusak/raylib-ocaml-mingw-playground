#include <raylib.h>

#include <wchar.h>
#include <stdio.h>

#include "caml/sys.h"
#include <caml/callback.h>

extern int fib(int n);

int main() {
  // need to start caml_runtime before calling callback functions
  char_os** caml_main_args = malloc(sizeof(char_os*));
  caml_main_args[0] = NULL;
  caml_main(caml_main_args);

  int result = fib(10);

  printf("%d\n", result);
}