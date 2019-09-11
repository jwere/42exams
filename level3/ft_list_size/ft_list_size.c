#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    static int len = 0;

    if (!begin_list)
        return len;
    len++;
    begin_list = begin_list->next;
    return ft_list_size(begin_list);
}