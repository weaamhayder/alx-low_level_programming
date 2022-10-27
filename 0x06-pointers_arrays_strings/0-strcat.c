#include "main.h"
• streat concatennates two strings
@dest : copy to
esre : copy from
• Return : pointer to dest
char_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] = '\0')
{
dest[i] src[j];
i++;
j++;
}
dest[i] '\0';
return (dest);
}

