/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirci <ademirci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:41:03 by ademirci          #+#    #+#             */
/*   Updated: 2022/06/09 11:41:04 by ademirci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define SA 1
# define SB 2
# define PB 3
# define PA 4
# define RA 5
# define RRA 6
# define RB 7
# define RRB 8

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int				data[10000];
	int				data_count;
}					t_data;

typedef struct s_stacks
{
	int				data_count;
	t_stack			*a;
	t_stack			*b;
}					t_stacks;

//ft_validation_I.c
int					ft_number_control(char *arg);
int					ft_repeat_control(t_data *new);
int					ft_int_sort_control(t_data *new);
int					ft_validation(int argc, char **argv, t_data *new);

//ft_validation_II.c
void				ft_data_size_write(char **data_split, t_data *new);
void				ft_data_transfer(char **arg, t_data *new);

//ft_validation_utils.c
int					ft_min_int(int *numbers, int size);

char				*split_char(char *argv);

//ft_data_write
void				ft_data_write(t_stacks *stacks, t_data *new);

//push_swap_utils.c
long long			ft_atoi_long(const char *str);

int					ft_isdigit_negative(int c);
int					ft_list_size(t_stack *stack);

//movement_I.c
void				ft_sa_sb(t_stack **stack);
void				ft_rra_rrb(t_stack **stack);
void				ft_ra_rb(t_stack **stack);

//movement_II.c
void				ft_pa(t_stacks *stacks);
void				ft_pa_pivot(t_stacks *stacks);
void				ft_pb(t_stacks *stacks);
void				ft_pb_pivot(t_stacks *stacks);

//movement_utils.c
int					find_index(t_stack *stack, int ort_pivot);
int					is_revsorted(t_stack *stack);

t_stack				*ft_lastlst(t_stack *stack);
t_stack				*ft_add_front(t_stack *stack, int count);
t_stack				*ft_add_end_data(t_stack *stack, int data);

//ft_mission.c
void				ft_mission_a(t_stacks *stacks, int mission);
void				ft_mission_b(t_stacks *stacks, int mission);

//swap.c
void				ft_med_swap(t_stacks *stacks);
void				ft_mini_swap(t_stacks *stacks);

int					ft_sort_control(t_stack *stack);
//swap_utils.c
void				give_back(t_stacks *stacks);

int					find_index(t_stack *stack, int ort_pivot);
int					big_index(t_stack *stack);
int					ft_min_index(t_stack *stack);

//ft_pivot.c
int					ft_min(t_stack *stack);
int					ft_max(t_stack *stack);
int					where(t_stack *stack, long long average);
int					ft_pivot(t_stack *stack);

//ft_hard_sort.c
void				ft_hard_swap(t_stacks *stacks);

#endif
