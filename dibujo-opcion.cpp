#include <stdio.h>

int main(){
int option;

printf("Escoja lo que desea ver:\n");
printf("1: Animal\n");
printf("2: Objeto\n");
printf("3: Salir del programa\n");
scanf("%d", &option);

if (option == 2) {
	printf("\n");
	printf("*__000000___000000\n");
	printf("*_00000000_00000000\n");
	printf("*_00000000000000000\n");
	printf("*__000000000000000\n");
	printf("*____00000000000\n");
	printf("*_______00000\n");
	printf("*_________0\n");
	printf("\n");
	} 
else if (option == 1) {
	printf("\n");
	printf("                 ______      \n");
	printf("               / >       >   \n");
	printf("              |    _   _|    \n");
	printf("                == __X_ )    \n");
	printf("             /         |     \n");
	printf("           /           |     \n");
	printf("          /    \       )     \n");
	printf("      ___|     |   |  |      \n");
	printf("    / __|      |   |  |      \n");
	printf("   | |__ |______ __)__)      \n");
	printf("    \_____)                  \n");
	printf("\n");
	} 
else if (option == 3){
	printf("Saliendo...\n");
	} 
else {
	printf("Por favor, digite un numero valido.\n");
	}
}
