/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: On success 1.
 * On error, 0 for anything else
 */
int _isalpha(int c)
{
if ((c > 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
