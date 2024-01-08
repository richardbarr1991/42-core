size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*dst = *src;
		i++;
	}
	return (i);
}
