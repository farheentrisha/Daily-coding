#include	<iostream>
using	namespace	std;
int	main()	{
				int	n;
				unsigned	long	long	fact	=	1;
				cin	>>	n;
				if	(n	<	0)	{	cout	<<	"Factorial	not	defined	for	negatives";	return	0;	}
				for	(int	i	=	1;	i	<=	n;	i++)
								fact	*=	i;
				cout	<<	"Factorial	of	"	<<	n	<<	"	=	"	<<	fact	<<	endl;
				return	0;
}
