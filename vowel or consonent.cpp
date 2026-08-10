#include	<iostream>
using	namespace	std;
int	main()	{
				char	ch;
				cin	>>	ch;
				if	(ch	>=	'A'	&&	ch	<=	'Z')	ch	=	ch	+	32;			//	to	lowercase
				if	(ch	<	'a'	||	ch	>	'z')
								cout	<<	"Not	an	alphabet";
				else	if	(ch=='a'	||	ch=='e'	||	ch=='i'	||	ch=='o'	||	ch=='u')
								cout	<<	ch	<<	"	is	a	Vowel";
				else
								cout	<<	ch	<<	"	is	a	Consonant";
				return	0;
}
