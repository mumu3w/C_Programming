#ifndef __MYC_H__
#define __MYC_H__


extern void Error(const char *format, ...);
extern int read_line(char buffer[], int n, FILE **in_fp);


#endif