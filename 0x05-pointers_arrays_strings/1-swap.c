/**
 * swap_int - swap the values of the variables
 *
 * @a: input pointer
 * @b: input pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;

	*b = *a;

	*a = tmp;
}
