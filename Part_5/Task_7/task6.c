#include "func.h" 
_Bool insert(const char *src, const char *str,int index,char *dest,int len)
{
	unsigned int strLenght = strlen(str);
	unsigned int srcLen = strlen(src);

	if ((strLenght + srcLen > len) || (index > strLenght)) {return 0;}
	char *point = dest;
	
	strcpy(point,srcLen - index,src);
	point += index;

	strcpy(point,strLenght,str);
	point += strLenght;

	strcpy(point,len,src + index);

}