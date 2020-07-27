#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define TERM '\0'
# define NL '\n'
# define NO_NL -1

int		get_next_line(int fd, char **line);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlen(const char *s);
size_t	ft_linelen(const char *s);
char	*ft_strjoin_s2(char *s1, const char *s2, int start_pos, int finish_pos);
int		ft_strchr_pos(const char *s, char c, size_t pos_start);
char	*ft_linedup(const char *src, int start_pos, int pos_finish);

#endif
