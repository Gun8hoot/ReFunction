// NOT FINISH THE FUNCTION YET

#include <stdio.h>
#include <string.h>
#define BASE64 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

void	decodeBase64(const char *input, const unsigned int size, char *output)
{
	
}

int main(void)
{
	char *bs64e = "72bca9b68fc16ac7beeb8f849dca1d8a783e8acf9679bf9269f7bf";
	const unsigned int size = strlen(bs64e);
	char *bs64d;

	decodeBase64(bs64e, size, bs64d);
}