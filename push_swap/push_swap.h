#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

/* Stack Struct */
typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

/* Operations */
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* Utils */
void	free_stack(t_stack **stack);
int		get_abs(int nb);
long int	ft_atoi(char *str);
void	ft_putstr(char *str);
void	exit_error(t_stack **stack_a, t_stack **stack_b);

/* Stack Utils */
t_stack	*get_stack_tail(t_stack *stack);
t_stack *get_stack_before_tail(t_stack *stack);
int		get_stack_size(t_stack *stack);
void	add_stack_tail(t_stack **stack, t_stack *new);
t_stack *new_stack(int val);

/* Cost */
void	do_cheapest_move(t_stack **stack_a, t_stack **stack_b);
void	get_cost(t_stack **stack_a, t_stack **stack_b);

/* Do Move */
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

/* Init */
t_stack	*fill_stack_values(int ac, char **av);
void	assign_index(t_stack *stack_a, int stack_size);

/* Position */
int		get_lowest_index_position(t_stack **stack);
void	get_target_position(t_stack **a, t_stack **b);

/* Sort */
void	sort(t_stack **stack_a, t_stack **stack_b);
void	tiny_sort(t_stack **stack);

/* Input Check */
int		is_correct_input(char **av);
int		is_digit(char c);
int		is_sign(char c);
int		nbstr_cmp(const char *s1, const char *s2);

/* Main */
int		is_sorted(t_stack *stack);

#endif