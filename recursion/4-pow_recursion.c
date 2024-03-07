#include "main.h"

/**
 *  _pow_recursion - Calcule la valeur de x élev�et la puissance de y
 *  @x: La valeur a multiplier
 *  @y: Le nombre de fois où la valeur doit être multipli
 *
 *  Description: Cette fonction calcule de manière récursi
 *
 *  Return: La valeur de x élev�a la puissance de y
 */







int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
