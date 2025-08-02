main-exe:
	ocamlopt -output-complete-obj caml_external.ml caml_callback.ml -o caml_callback_with_runtime.o
	x86_64-w64-mingw32-gcc -I D:/opam/default/lib/ocaml -c caml_callback.c -o caml_callback_interop.o
	x86_64-w64-mingw32-gcc -I D:/opam/default/lib/ocaml -c caml_external.c -o caml_external_interop.o
	x86_64-w64-mingw32-gcc -I D:/opam/default/lib/ocaml -I. -c main.c
	flexlink -exe -chain mingw64 -o main.exe -LD:/opam/default/lib/ocaml/flexdll -LD:/opam/default/lib/ocaml main.o caml_external_interop.o caml_callback_interop.o caml_callback_with_runtime.o libraylib.a -lwinmm -lgdi32 -lpthread -lws2_32 -lole32 -luuid -lversion -lshlwapi -lsynchronization  -l:libpthread.a