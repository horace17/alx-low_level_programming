#incude "main.h"
/**
 * _sqrt_recursion - raiz cuadrada natural
 * @n: number radicando
 * Return: resultado
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
