#ifndef function_pointers_h
#define function_pointers_h
	void print_name(char *name, void (*f)(char *));
	void array_iterator(int *array, size_t size, void (*action)(int));
#endif
