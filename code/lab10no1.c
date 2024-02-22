#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char *logindb, char *passdb); //function prototype

int main() 
{
	char login[5][64]={"user1","user2","user3","user4","user5"};
	char password[5][64]={"pass1","pass2","pass3","pass4","pass5"};
	//implement here
	int i,state = 0;
	char loginus[64], passwordus[64];
	printf("Enter login : "); gets(loginus);
	printf("Enter password : "); gets(passwordus);
	
	for(i=0;i<5;i++)
	{
		if(checkLogin(loginus, passwordus, login[i], password[i]) == 1) {
			state=1;
			break;
		} 
	}
	if(state)
	{
		printf("Welcome\n");
	}else{
		printf("incorrect login or password\n");
	}
}
int checkLogin(char *login, char *passwd, char *logindb, char *passdb)
{
	if(!strcmp(login, logindb) && !strcmp(passwd, passdb))
	{
		return 1;
	}
	else{
		return 0;
	}
}
	

