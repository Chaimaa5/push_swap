/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cel-mhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:14:23 by cel-mhan          #+#    #+#             */
/*   Updated: 2022/03/03 13:22:50 by cel-mhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

# define TRUE 1
# define FALSE 0
# define UP 1
# define DOWN 0

typedef struct s_stack{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_op{
	char		*operation;
	struct s_op	*next;
}	t_op;

t_stack	*ft_lstnew(int content);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **alst, t_stack *new);
void	ft_lstadd_front(t_stack **alst, t_stack *new);
int		ft_atoi(const char *str);
void	print_stack(t_stack *stack, char *str);
void	print_operations(t_op *operations);
void	log_global_error(char *err);
size_t	ft_strlen(char *str);
void	shift_up(t_stack **stack);
void	shift_down(t_stack **stack);
int		is_sorted(t_stack *stack);
void	ft_swap(t_stack **stack);
void	ft_push(t_stack **from, t_stack **to);
void	pre_execute(char *operation, t_stack **a, t_stack **b, t_op **op);
int		max(t_stack *stack);
int		min(t_stack *stack);
int		is_duplicate(t_stack *stack);
void	sort_three(t_stack **a, t_stack **b, t_op **op);
void	sort(t_stack **a, t_stack **b, t_op **op);
void	sort_four(t_stack **a, t_stack **b, t_op **op);
int		min_element(t_stack *stack);
void	sort_five(t_stack **a, t_stack **b, t_op **op);
void	print_op(t_op	*op);
int		which_better(t_stack *stack, int index);
int		get_index(t_stack *stack, int key);
int		right_index(t_stack *stack, int key);
t_stack	*parser(char **argv);
int		check_number(char *num);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
int		is_duplicate(t_stack *stack);
int		ft_isdigit(int c);
t_op	*ft_lstnew_op(char *content);
int		ft_lstsize_op(t_op *lst);
t_op	*ft_lstlast_op(t_op *lst);
void	ft_lstadd_back_op(t_op **alst, t_op *new);
void	ft_lstadd_front_op(t_op **alst, t_op *new);
void	print_op(t_op	*op);
int		get_chunk_size(t_stack *stack);
int		*chunk_content(t_stack *stack, int size);
int		get_number(t_stack *stack, int index);
int		exists_in_chunk(int *chunk, int key, int size);
void	chunker(t_stack **a, t_stack **b, t_op **op);

#endif
