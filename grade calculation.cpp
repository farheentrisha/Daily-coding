#include	<iostream>
using	namespace	std;
int	main()
{
		int a ;
		cin>>a;
		if	(a	>=	80)
cout	<<	"A+		(GPA	5.00)";
else	if	(a	>=	70)	cout	<<	"A (GPA	4.00)";
else	if	(a	>=	60)	cout	<<	"A-	(GPA	3.50)";
else	if	(a	>=	50)	cout	<<	"B(GPA	3.00)";
else	if	(a	>=	40)	cout	<<	"C (GPA	2.00)";
else	if	(a	>=	33)	cout	<<	"D (GPA	1.00)";
else
cout	<<	"F			(GPA	0.00)";
}

