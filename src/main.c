#include "lem_in.h"
#include "libft.h"

void	error(static char *str)
{
	if (str == "NO_START")
		ft_putendl("Error : no start or end");
	else if (str == "NO_ANTS")
		ft_putendl("Error : invalid ants format");
	else if (str == "NO_ROOMS")
		ft_putendl("Error : no rooms");
	else if (str == "ILLEGAL_NAME")
		ft_putendl("Error : Illegal name");
	else if (str == "NO_FILE")
		ft_putendl("Error : No or empty file");
	else if (str == "NO_PATH")
		ft_putendl("Error : no path");
	else if (str == "INVALID_ROOM")
		ft_putendl("Error : invalid room");
}

void	parse_ants(t_ant *info)
{
	char	*line;
	int		i;

	i = 0;
	if (!get_next_line(0, &line))
	{
		error("NO_FILE");
		return ;
	}
	info->number = ft_atoi(line);
	while (line[i])
	{
		if (!ft_isdigit(line[i]) || info->number <= 0)
		{
			error("NO_ANTS")
			return ;
		}
		i++;
	}
	ft_putendl(line);
	free(line);
}

void	parse_input(t_ant *ants)
{
	parse_ants(ants);
}

int		main(void)
{
	t_ant	ants;

	parse_input(&ants);
	return (0);
}
