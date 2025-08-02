#include <stdio.h>

#include "caml/mlvalues.h"
#include <caml/callback.h>

CAMLprim value caml_hello(value unit)
{
  CAMLparam1 (unit);
  printf("Hello world\n");
  CAMLreturn (Val_unit);
}