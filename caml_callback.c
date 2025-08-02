#include "caml/mlvalues.h"
#include <caml/callback.h>

int fib(int n) {
  static const value * fib_closure = NULL;
  if (fib_closure == NULL) fib_closure = caml_named_value("fib");
  return Int_val(caml_callback(*fib_closure, Val_int(n)));
}