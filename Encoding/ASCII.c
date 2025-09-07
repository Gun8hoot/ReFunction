void	Decimal2ASCII(int *input, char *output)
{
	int i = 0;

	while (input[i]) {
		output[i] = (char)input[i];
		i++;
	}
	output[i] = '\0';
}

void ASCII2Decimal(const char* input, int *output)
{
	for (int i = 0; input[i]; i++) {
		output[i] = (int)input[i];
	}
}