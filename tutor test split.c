include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

static size_t ft_strlen(const char *s)
{
  size_t    i;

  i = 0;
  while (s[i] != '\0')
    i++;
  return (i);
}

static char *ft_strdup(const char *s)
{
  char *ns;
  int i;

  i = 0;
  ns = malloc(sizeof(char) * ft_strlen(s) + 1);
  if (!ns)
    return (NULL);
  while (s[i] != '\0')
  {
    ns[i] = s[i];
    i++;
  }
  ns[i] = '\0';
  return (ns);
}

static char *ft_substr(const char *s, unsigned int start, size_t len)
{
  size_t i;
  char *ps;
  char *dest;
  size_t length;
  
  length = ft_strlen(s);
  if (!s)
    return (NULL);
  if (start > length)
    return (ft_strdup(""));
  if (len > length - start)
    len = length - start;
  i = 0;
  ps = (char *)s;
  dest = malloc((len * sizeof(char)) + 1);
  if (!dest)
    return (NULL);
  if (dest != NULL)
  {
    while (i < len && ps[i] != '\0')
    {
      dest[i] = ps[i + start];
      i++;
    }
    dest[i] = '\0';
  }
  return (dest);
}

static int      ft_cptw(const char *s, int c)
 {
          size_t  i;
          int             cptw;
          i = 0;
          cptw = 0;
          while (s[i])
          {
                  while (s[i] == c)
                          i++;
                  if (s[i] != '\0')
                  cptw++;
                  while (s[i] != c && s[i])
                         i++;
          }
          return (cptw);
  }
  
 static char     **ft_free(char **s)
  {
          int     i;
  
          i = 0;
          while (s[i] != NULL)
          {
                  free (s[i]);
                  i++;
          }
          free(s);
          return (NULL);
  }
  
  static  char    **ft_putword(const char *s, int c)
  {
    size_t  i;
    size_t  j;
    int     k;
    char    **result;
    int     cptw;
  
    i = 0;
    k = 0;
    cptw = ft_cptw(s, c);
    result = malloc(sizeof(char *) * (cptw + 1));
    if (!result)
    return (NULL);
    while (k != cptw)
    {
    while (s[i] && s[i] == c)
    i++;
    j = i;
    while (s[i] != c && s[i])
       i++;
   if (i > j)
      result[k] = ft_substr(s, j, i - j);
   if (!result[k])
      return (ft_free(result));
   k++;
  }
    result[k++] = NULL;
    return (result);
  }
 
 char    **ft_split(char const *s, char c)
  {
          char    **result;
  
          if (!s)
                  return (NULL);
          result = ft_putword(s, c);
          return (result);

}
int main()
{
  ft_split("  tripouille  42  ", ' ');
}
