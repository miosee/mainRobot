const tileStatusType initialMap[MAP_SIZE] =
{	OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, UNPR, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, UNPR, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, OBST, UNPR, UNPR, OBST, OBST, OBST, 
 	OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, 
 	OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST, OBST 
 	};