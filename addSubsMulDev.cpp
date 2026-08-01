#include	<iostream>
using	namespace	std;
int	main()	{
				float	a,	b;
				cout	<<	"Enter	two	numbers:	";
				cin	>>	a	>>	b;
				cout	<<	"Sum =	"	<<	a	+	b	<<	endl;
				cout	<<	"Difference	=	"	<<	a	-	b	<<	endl;
				cout	<<	"Product				=	"	<<	a	*	b	<<	endl;
				if	(b	!=	0)
								cout	<<	"Quotient			=	"	<<	a	/	b	<<	endl;
				else
								cout	<<	"Division	by	zero	not	allowed"	<<	endl;
				return	0;
}
