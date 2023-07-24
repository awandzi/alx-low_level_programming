#include
/**
 *char *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * @dest: copy to
 *  @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (l x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
