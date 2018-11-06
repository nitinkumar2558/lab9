question 1:: 
answer==
1.S ,value inside pointer p3
	
2.T ,value inside pointer p1
	
	
3.adress of c box which contain 'T'
	
4.S,value inside pointer p2
	
5.adress of d box which contain 's'
.....................................................................
question 2:: 

*p=75;  option D

.........................................................................
question 3:: 
c is a character where *p is double
	'
so *p cant point to a character which is of smaller size.
..............................................................
question 4::
temp = blocks[0]; 		// A
	
temp = *(blocks + 2);		// C
	
temp = *(ptr + 1);		// B
	
temp = *ptr;			// A

	
ptr = blocks + 1;		//address of second element
	
temp = *ptr;			// B
	
temp = *(ptr + 1);		// C

	
ptr = blocks;			// address of first element
	
temp = *++ptr;			// B
	
temp = ++*ptr;			// C
	
temp = *ptr++;			// C
	
temp = *ptr;			// C

