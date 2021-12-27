#ifndef FUNC_H
#define FUNC_H


//Task 1
unsigned int strlen(const char *str);
//Task 2
char *find(const char* str, const char* substr);
//Task 3
void delete(char *str, const char *substr);
//Task 4
void strcpy(char *dest, int len, const char* src);
//Task 5
void strcat(char *dest, int len, const char *first, const char *second);
//Task 6
_Bool insert(const char *src, const char *str,int index,char *dest,int len);
#endif
