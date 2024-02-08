#include "main.h"

int _islower(int c)
{
	if(c >= 'a'  && c <= 'z')
	{
		return(1);
	} else{
		return(0);
	}
}

/*{
	return (c >= 97 && c <= 122);
}*/
