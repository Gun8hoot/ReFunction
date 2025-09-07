// NOT WORKING RN, I HAVE SOME PROBLEME W THE OUTPUT POINTER
// HAVE SOME PB TOO WHEN THE HEX STR IS ODDS BRUHH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
# define HEX "0123456789abcdef"

void	HEX2ASCII(char *input, char *output)
{
	int 			pos = 0;
	unsigned int 	length = strlen(input);
	int 			j;

	int 			*arr = malloc(sizeof(int) * length);
	if 				(arr == NULL) {
		return;
	}

	output = malloc(sizeof(char) * (length/2));
	if (output == NULL) {
		free(arr);
		return;
	}

	for (int arrPos = 0; arrPos < length; arrPos += 2)
	{
		arr[pos] = 0;
		unsigned int size = 2;
		for (int w = arrPos; w < arrPos+2; w++)
		{
			j = 0;
			size -= 1;
			while (HEX[j] != input[w])
			{
				j++;
			}
			arr[pos] += (j * (pow(16, size)));
		}
		output[pos] = (char)arr[pos];
		pos++;
	}
	output[pos] = '\0';
	printf("s = %s\n", output);
	free(arr);
}

int main(void)
{
	char 	*enco = "2b67";
	char 	*deco = NULL;
	HEX2ASCII(enco, deco);
	printf("\n%s -> %s\n", enco, deco);
	free(deco);
	return (0);
}