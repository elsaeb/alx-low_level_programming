/**
 * _strlen - give the length of string
 * @s: input character pointer
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
