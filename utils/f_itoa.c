#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int intlen(int number)
{
    int i = number;
    int c = 0;
    while (i != 0)
    {
        i /= 10;
        c++;
    }
    return (c);
}

char *f_itoa(int toConvert)
{
	int i = 0;
	int character = 0;
	char *strRevers = NULL;
    strRevers = malloc(sizeof(char) * intlen(toConvert) + 1);  // Max 3 int + \0 char
	char *str;

	while (toConvert != 0)
	{
		character = toConvert % 10;
		toConvert /= 10;
		strRevers[i++] = character + '0';
	}
	strRevers[i] = '\0';
	i = 0;
	if ((str = malloc(sizeof(char) * strlen(strRevers))) == NULL)
		return NULL;
	while (strRevers[i])
	{
        printf("%d : ", i);
		str[i++] = strRevers[(strlen(strRevers) - 1) - i];
        printf("%d\n", i);
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
    printf("%s\n", f_itoa(567));
}