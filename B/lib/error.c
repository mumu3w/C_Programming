#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "myc.h"


extern void Error(const char *format, ...){
	va_list ap;

	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);
	
	exit(EXIT_FAILURE);
}
