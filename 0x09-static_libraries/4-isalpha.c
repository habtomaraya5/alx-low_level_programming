#include "main.h"
/**
 * _isalpha - function for alphabet checker for all
 * Description: check the alphabet is or not
 *@x: is used for input parameter at all
 * Return:0
 */
int _isalpha(int x)
{
if (x >= 'A' && x <= 'z' && !(x > 92 && x < 97))
return (1);
else
return (0);
}
