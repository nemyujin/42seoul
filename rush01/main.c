/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjhong <youjhong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:32:53 by seungule          #+#    #+#             */
/*   Updated: 2023/01/22 18:26:02 by youjhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	char_to_int(int *col_row, char **argv);
int		valid_check(char **argv);
int		main(int argc, char **argv)
{
	int	col_row[16];   //입력받은 인자를 저장할 int형 배열
	int	valid;

	valid = 0;
	if (argc != 2)   //입력받은 인자가 1개가 아니라면 오류 출력후 0리턴 ("2928328" "28298" 이럴 경우)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	valid = valid_check(argv); //입력받는 인자가 규칙에 맞지 않는 입력 값이라면 오류 출력
	if (valid)
		char_to_int(col_row, argv);
	else
	{	
		write(1, "Error\n", 6);
		return (0);
	}
	ft_skyscrape(col_row);
}

int	valid_check(char **argv) //입력받은 숫자 체크
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (argv[1][check])
		check++;
	if (check != 31)
		return (0);
	while (argv[1][i])
	{
		if (i % 2 == 0 && (argv[1][i] < '0' || argv[1][i] > '4'))
			return (0);
		else if (i % 2 == 1 && argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
void    char_to_int(int *col_row, char **argv) //입력받기 위해 문자형 정수를 바꿔서 배열에 때려박기위해 만든 함수
{
	int argv_i;
	int col_row_i;

	argv_i = 0;
	col_row_i = 0;
	while(argv[1][argv_i])
	{
		if(argv_i % 2 == 0)
		{
			col_row[col_row_i] = argv[1][argv_i] - '0';
			col_row_i++;
		}
		argv_i++;
	}
}
