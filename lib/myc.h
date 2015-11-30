#ifndef __MYC_H__
#define __MYC_H__



#ifndef TRUE
typedef int BOOL;
#define TRUE (1 == 1)
#define FALSE (0 == 1)
#endif

extern void Error(const char *format, ...);
extern int read_line(char buffer[], int n, FILE *in_fp);


#endif
