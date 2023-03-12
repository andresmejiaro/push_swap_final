/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amejia <amejia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:54:00 by amejia            #+#    #+#             */
/*   Updated: 2023/03/12 01:13:36 by amejia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# include "libft/libft.h"
# define PUSH_SWAP_H
# ifndef SEED_N
#  define SEED_N 658457
# endif
# ifndef DEBUG
#  define DEBUG 0
# endif
# ifndef BONUS
#  define BONUS 0
# endif

typedef struct s_game_node
{
	int					content;
	int					ordered_position;
	struct s_game_node	*next;
}	t_game_node;

typedef struct s_game
{
	t_game_node	*stack_a;
	t_game_node	*stack_b;
}	t_game;

typedef struct s_sort_params
{
	t_game	*game;
	int		start;
	int		end;
	int		elements;
	int		ascending;
	char	cstack;
	int		skip;
}	t_sort_params;

t_game_node		*ft_lstgn_new(int content);
void			ft_lstgn_add_back(t_game_node **lst, \
				t_game_node *new);
void			ft_lstgn_iter(t_game_node *lst, \
					void (*f)(int));
void			ft_lstgn_add_front(t_game_node **lst, \
					t_game_node *new);
t_game_node		*ft_lstgn_nnode(t_game_node *node, int position);
int				ft_lstgn_size(t_game_node *node);
void			ft_lstgn_clear(t_game_node *node);
int				read_and_validate_input(int argc, char **argv, \
					t_game_node **data);
int				check_uniqueness(t_game_node *data);
int				check_valid(int argc, char **argv);
void			game_start(t_game_node *data);
void			print_one(int content);
void			print_game_state(t_game *game);
char			lane_swich(char c);
t_sort_params	*sort_params(char cstack, int start, int end, \
				int ascending);
long			*list_from_params(t_sort_params *sortp);
long			*list_from_paramso(t_sort_params *sortp);
void			fill_order(t_sort_params *sortp);
t_game_node		*get_node(t_sort_params *sortp, char stack, \
				int position);
void			movement_orchestrator(t_game *game, char *mv);
int				movement_orchestrator_2(t_game *game, char *mv);
void			movement(t_sort_params *sortp, char stack, char *mv);
void			move_to(t_sort_params *sortp, char this, \
					int position);
int				find_value(t_sort_params *sortp, char this, \
					long value);
void			sa(t_game *game);
void			sb(t_game *game);
void			ss(t_game *game);
void			pa(t_game *game);
void			pb(t_game *game);
void			ra(t_game *game);
void			rb(t_game *game);
void			rr(t_game *game);
void			rra(t_game *game);
void			rrb(t_game *game);
void			rrr(t_game *game);
int				l_comparison(t_sort_params *sortp, char stack, \
					long value);
long			*list_quantiles_long(long *list, size_t len);
void			list_qsort(long *list, size_t len);
void			sort(t_sort_params *sortp);
int				check_sorted(t_sort_params *sortp);
void			list_qsort_int(int *list, size_t len);
void			movement2(t_sort_params *sortp, char stack, char *mv);
void			graceful_malloc_fail(void *ptr);
void			sort_insertionsort(t_sort_params *sortp);
void			sort_nquicksort(t_sort_params *sortp);
long			get_nodec(t_sort_params *sortp, char stack, int position);
int				get_nodep(t_sort_params *sortp, char stack, int position);
void			sort_efficient3_ascending(t_sort_params *sortp, long *list);
void			sort_efficient3_descending(t_sort_params *sortp, long *list);
void			sort_efficient2(t_sort_params *sortp);
void			small_efficient_sort(t_sort_params *sortp);
void			sort_ninsertionsort(t_sort_params *sortp);
void			sort_efficient3_ascending_cycle(t_sort_params *sortp, \
					long *list);
void			sort_smallchooser(t_sort_params *sortp);
void			sort_ninsertionsort_fill_upstairs(t_sort_params *sortp, \
					int *counter, int *position, long *list);
void			sort_ninsertionsort_bring_it_down_ex(t_sort_params *sortp, \
				int *counter, int *position);
void			push_places_2(t_sort_params *sortp, int from, int to);
int				sort_ninsertionsort_realcount(t_sort_params *sortp, \
					int from, int to);
void			sort_ninsertionsort_put_in_place(t_sort_params *sortp, \
					int from, int *position);
void			push_places_2_way(int *fromb_tob, int *way);
int				push3_way_process_u(t_sort_params *sortp, long *values, \
					int *counts, int *counter);
void			push3_way(t_sort_params *sortp, long *values, int *counts);

#endif