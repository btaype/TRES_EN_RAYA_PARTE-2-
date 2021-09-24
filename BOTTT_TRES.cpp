/*
Curso de Ciencia de la Computación I - CCOMP2 - 1
3 en Raya - Segunda Parte (Bot)
Alumnos:
-Albert Yerem Cáceres Marca
-Jhon Berly Taipe Alccaccahua
-Brian Jesse Bermudez Navarro
*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
int main(){
	std::cout << "\n\n*************************************************************\n********************TRES EN RAYA*****************************\n*************************************************************\n\n\n";

	// Declaracion de las diferentes celdas del cuadro
	char blok_1 = ' ', blok_2 = ' ', blok_3 = ' ', blok_4 = ' ', blok_5 = ' ', blok_6 = ' ', blok_7 = ' ', blok_8 = ' ', blok_9 = ' ';
	int blok_1_2 = 1,blok_2_2 = 2,blok_3_2 = 3,blok_4_2 = 4,blok_5_2 = 5,blok_6_2 = 6,blok_7_2 = 7,blok_8_2 = 8,blok_9_2 = 9;

	
	// Impresion del primer cuadro (con el numero que representa cada celda)

	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'1'<<" "<<"|"<<" "<<'2'<<" "<<"|"<<" "<<'3'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'4'<<" "<<"|"<<" "<<'5'<<" "<<"|"<<" "<<'6'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;
	std::cout <<" "<<'7'<<" "<<"|"<<" "<<'8'<<" "<<"|"<<" "<<'9'<<" "<<std::endl;
	std::cout <<"---+---+---"<<std::endl;

	char modo;

	while(true){
		std::cout << "Que modo quieres jugar:\n";
		std::cout << "\t- Multijugador ............................ (M)\n";
		std::cout << "\t- Contra la maquina ....................... (B)\n\n";
		std::cout << "¿Que modo eliges(M/B)?:\t";
		std::cin >> modo;

		if(modo == 'M'){
			break;
		} else if (modo == 'B'){
			while(true){
				std::cout << "\t\t- Principante ..................... (P)\n";
				std::cout << "\t\t- Avanzado ........................ (A)\n";
				std::cout << "\t\t- Dificil ............................ (D)\n\n";
				std::cout << "¿Que modo eliges(P/A/D)?:\t";
				std::cin >> modo;

				if(modo == 'P'){
					break;
				} else if(modo == 'A'){
					break;
				} else if(modo == 'D'){
					break;
				} else{
					std::cout << "ERROR ...Los modos solo puede ser M / P / A / D (En mayusculas pls)\n";
				}
			}
			break;
		} else{
			std::cout << "ERROR ...Los modos solo puede ser M / P / A / D (En mayusculas pls)\n";
		}
	}
	
	//Ingresamos los nombres de los usuarios y los guardamos en las variables
	std::string player1;
	std::string player2;

	if(modo == 'M'){
		std::cout << "\nIngrese su nombre: ";
		std::cin>>player1;
		std::cout << "\nIngrese su nombre: ";
		std::cin>>player2;
	} else if(modo == 'P' || modo == 'A' || modo == 'D'){
		std::cout << "\nIngrese su nombre: ";
		std::cin>>player1;
		player2="GROVY(BOT)";
		std::cout << "El nombre del bot es: " << player2 << std::endl;
	}

	
	// Definimos 2 variables del tipo caracter para los 2 simbolos que se usaran en el tablero
	char simbolo_player_1;
	char simbolo_player_2;

	/* Usamos un bucle While para preguntar que simbolo usara el primer jugador,
	y segun ello el segundo jugador se le asignara el otro simbolo,
	(Los simbolos necesariamente tienen que ser en mayusculas 'X' o 'O')*/

	while (true){
	
		std::cout << "\nIgrese el simbolo que usara " << player1 << " (O/X):";

		std::cin >> simbolo_player_1;
	
		if(simbolo_player_1 == 'O'){
			simbolo_player_2 = 'X';
			break;
		} else if(simbolo_player_1 == 'X'){
			simbolo_player_2 = 'O';
			break;
		} else{
			std::cout << "ERROR ...Los simbolos solo puede ser O / X (En mayusculas pls)\n";
		}
	}

	// Mensaje de inicio del juego
	std::cout << "\n\n**************************************************************\n************************BUENO EMPEZEMO************************\n**************************************************************\n\n\n";

	// Se muestran los simbolos elegidos por cada jugador
	std::cout << player1 << ":\t" << simbolo_player_1 << std::endl;
	std::cout << player2 << ":\t" << simbolo_player_2 << std::endl << std::endl;


	// variable varias
	int v_control = 1; 
	

	srand(time(0));
	v_control = 0 + rand() % (2);

	int contador = 0;

	int variable_de_pr=0, variable_de_pr_2;

	int ascii_1, ascii_2;

	ascii_1= simbolo_player_1;
	ascii_2= simbolo_player_2;


	while (true){
		// Dibujamos el tablero nuevamente
		std::cout << "\n==============================================================\n\n";
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_1<<" "<<"|"<<" "<<blok_2<<" "<<"|"<<" "<<blok_3<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_4<<" "<<"|"<<" "<<blok_5<<" "<<"|"<<" "<<blok_6<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl;
		std::cout <<" "<<blok_7<<" "<<"|"<<" "<<blok_8<<" "<<"|"<<" "<<blok_9<<" "<<std::endl;
		std::cout <<"---+---+---"<<std::endl<<std::endl;
		//Condiciones de victoria o empate
		if ((blok_1 == simbolo_player_1 && blok_2 == simbolo_player_1 && blok_3 == simbolo_player_1)||(blok_4 == simbolo_player_1 && blok_5== simbolo_player_1 && blok_6== simbolo_player_1)||(blok_7== simbolo_player_1 && blok_8== simbolo_player_1 && blok_9== simbolo_player_1)||(blok_1== simbolo_player_1 && blok_5== simbolo_player_1 && blok_9== simbolo_player_1)||(blok_3== simbolo_player_1 && blok_5== simbolo_player_1 && blok_7== simbolo_player_1)||(blok_1== simbolo_player_1 && blok_4== simbolo_player_1 && blok_7== simbolo_player_1)||(blok_2==simbolo_player_1 && blok_5== simbolo_player_1 && blok_8== simbolo_player_1)||(blok_3== simbolo_player_1 && blok_6== simbolo_player_1 && blok_9== simbolo_player_1)){
			std::cout<<"\n" << player1 << " es el ganador\n\n";
			break;
		} else if ((blok_1== simbolo_player_2 && blok_2== simbolo_player_2 && blok_3== simbolo_player_2)||(blok_4== simbolo_player_2 && blok_5== simbolo_player_2 && blok_6== simbolo_player_2)||(blok_7== simbolo_player_2 && blok_8== simbolo_player_2 && blok_9== simbolo_player_2)||(blok_1== simbolo_player_2 && blok_5== simbolo_player_2 && blok_9== simbolo_player_2)||(blok_3== simbolo_player_2 && blok_5== simbolo_player_2 && blok_7== simbolo_player_2)||(blok_1== simbolo_player_2 && blok_4== simbolo_player_2 && blok_7== simbolo_player_2)||(blok_2== simbolo_player_2 && blok_5== simbolo_player_2 && blok_8== simbolo_player_2)||(blok_3== simbolo_player_2 && blok_6== simbolo_player_2 && blok_9== simbolo_player_2)){
			std::cout<<"\n" << player2 << " es el ganador\n\n";
			break;
		} else if(contador == 9){
			std::cout<<"\nEMPATE\n\n";
			break;
		}
		contador = contador + 1;
		

		while(true){

			// Se verifica la variable de control, si es igual a 0 se pedira que el jugador 1 seleccione la posicion para su simbolo
			if (v_control == 0){
				std::cout << "Ingrese el numero de la posicion que desea (" << player1 << "): ";
				std::cin >> variable_de_pr;

				// si la posicion ingresada es un numero o letra diferente del 1 al 9
				// entonces nos da error para que se ingrese un numero del 1 al 9

				if ((variable_de_pr == ascii_1) || (variable_de_pr == ascii_2) ){
					std::cout<<"ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
					continue;
						
				// Se valida si el numero que ingreso el jugador 1 es igual al numero de bloque, 
				// entonces se coloca en el bloque elegido el simbolo del jugador 1.
				} else if (variable_de_pr == blok_1_2){
					blok_1 = simbolo_player_1;
					blok_1_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_2_2){
					blok_2 = simbolo_player_1;
					blok_2_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_3_2){
					blok_3 = simbolo_player_1;
					blok_3_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_4_2){
					blok_4 = simbolo_player_1;
					blok_4_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_5_2){
					blok_5 = simbolo_player_1;
					blok_5_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_6_2){
					blok_6 = simbolo_player_1;
					blok_6_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_7_2){
					blok_7 = simbolo_player_1;
					blok_7_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_8_2){
					blok_8 = simbolo_player_1;
					blok_8_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else if(variable_de_pr == blok_9_2){
					blok_9 = simbolo_player_1;
					blok_9_2 = simbolo_player_1;
					v_control = 1;
					break;
				} else {
					std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
					variable_de_pr=1;
				}}

			// Se verifica la variable de control, si es igual a 1 se pedira que el jugador 2 seleccione la posicion para su simbolo

			else if(v_control == 1){
				
				if(modo == 'M'){
					std::cout << "Ingrese el numero de la posicion que desea (" << player2 << "): ";
					std::cin >> variable_de_pr_2;
				} else if(modo == 'P'){
					srand(time(0));
					variable_de_pr_2= 1 + rand() % (9);
				} else if(modo == 'A'){
					if(blok_1 == ' ' && ((blok_2 == simbolo_player_1 && blok_3 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_4 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_1 = simbolo_player_2;
						blok_1_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_2 == ' ' && ((blok_1 == simbolo_player_1 && blok_3 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_8 == simbolo_player_1))){
						blok_2 = simbolo_player_2;
						blok_2_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_3 == ' ' && ((blok_1 == simbolo_player_1 && blok_2 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_6 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_3 = simbolo_player_2;
						blok_3_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_4 == ' ' && ((blok_1 == simbolo_player_1 && blok_7 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_6 == simbolo_player_1))){
						blok_4 = simbolo_player_2;
						blok_4_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_5 == ' ' && ((blok_1 == simbolo_player_1 && blok_9 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_3 == simbolo_player_1) || (blok_2 == simbolo_player_1 && blok_8 == simbolo_player_1) || (blok_4 == simbolo_player_1 && blok_6 == simbolo_player_1))){
						blok_5 = simbolo_player_2;
						blok_5_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_6 == ' ' && ((blok_3 == simbolo_player_1 && blok_9 == simbolo_player_1) || (blok_4 == simbolo_player_1 && blok_5 == simbolo_player_1))){
						blok_6 = simbolo_player_2;
						blok_6_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_7 == ' ' && ((blok_1 == simbolo_player_1 && blok_4 == simbolo_player_1) || (blok_3 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_8 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_7 = simbolo_player_2;
						blok_7_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_8 == ' ' && ((blok_2 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_8 = simbolo_player_2;
						blok_8_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_9 == ' ' && ((blok_1 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_3 == simbolo_player_1 && blok_6 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_8 == simbolo_player_1))){
						blok_9 = simbolo_player_2;
						blok_9_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else {
						srand(time(0));
						variable_de_pr_2= 1 + rand() % (9);
					}
				} else if(modo == 'D'){
					if(blok_1 == ' ' && ((blok_2 == simbolo_player_2 && blok_3 == simbolo_player_2) || 
					(blok_7 == simbolo_player_2 && blok_4 == simbolo_player_2) || (blok_5 == simbolo_player_2 && blok_9 == simbolo_player_2))){
						blok_1 = simbolo_player_2;
						blok_1_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_2 == ' ' && ((blok_1 == simbolo_player_2 && blok_3 == simbolo_player_2) || (blok_5 == simbolo_player_2 && blok_8 == simbolo_player_2))){
						blok_2 = simbolo_player_2;
						blok_2_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_3 == ' ' && ((blok_1 == simbolo_player_2 && blok_2 == simbolo_player_2) || (blok_7 == simbolo_player_2 && blok_5 == simbolo_player_2) || (blok_6 == simbolo_player_2 && blok_9 == simbolo_player_2))){
						blok_3 = simbolo_player_2;
						blok_3_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_4 == ' ' && ((blok_1 == simbolo_player_2 && blok_7 == simbolo_player_2) || (blok_5 == simbolo_player_2 && blok_6 == simbolo_player_2))){
						blok_4 = simbolo_player_2;
						blok_4_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_5 == ' ' && ((blok_1 == simbolo_player_2 && blok_9 == simbolo_player_2) || (blok_7 == simbolo_player_2 && blok_3 == simbolo_player_2) || (blok_2 == simbolo_player_2 && blok_8 == simbolo_player_2) || (blok_4 == simbolo_player_2 && blok_6 == simbolo_player_2))){
						blok_5 = simbolo_player_2;
						blok_5_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_6 == ' ' && ((blok_3 == simbolo_player_2 && blok_9 == simbolo_player_2) || (blok_4 == simbolo_player_2 && blok_5 == simbolo_player_2))){
						blok_6 = simbolo_player_2;
						blok_6_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_7 == ' ' && ((blok_1 == simbolo_player_2 && blok_4 == simbolo_player_2) || (blok_3 == simbolo_player_2 && blok_5 == simbolo_player_2) || (blok_8 == simbolo_player_2 && blok_9 == simbolo_player_2))){
						blok_7 = simbolo_player_2;
						blok_7_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_8 == ' ' && ((blok_2 == simbolo_player_2 && blok_5 == simbolo_player_2) || (blok_7 == simbolo_player_2 && blok_9 == simbolo_player_2))){
						blok_8 = simbolo_player_2;
						blok_8_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_9 == ' ' && ((blok_1 == simbolo_player_2 && blok_5 == simbolo_player_2) || (blok_3 == simbolo_player_2 && blok_6 == simbolo_player_2) || (blok_7 == simbolo_player_2 && blok_8 == simbolo_player_2))){
						blok_9 = simbolo_player_2;
						blok_9_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_1 == ' ' && ((blok_2 == simbolo_player_1 && blok_3 == simbolo_player_1) || 
					(blok_7 == simbolo_player_1 && blok_4 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_1 = simbolo_player_2;
						blok_1_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_2 == ' ' && ((blok_1 == simbolo_player_1 && blok_3 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_8 == simbolo_player_1))){
						blok_2 = simbolo_player_2;
						blok_2_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_3 == ' ' && ((blok_1 == simbolo_player_1 && blok_2 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_6 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_3 = simbolo_player_2;
						blok_3_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_4 == ' ' && ((blok_1 == simbolo_player_1 && blok_7 == simbolo_player_1) || (blok_5 == simbolo_player_1 && blok_6 == simbolo_player_1))){
						blok_4 = simbolo_player_2;
						blok_4_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_5 == ' ' && ((blok_1 == simbolo_player_1 && blok_9 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_3 == simbolo_player_1) || (blok_2 == simbolo_player_1 && blok_8 == simbolo_player_1) || (blok_4 == simbolo_player_1 && blok_6 == simbolo_player_1))){
						blok_5 = simbolo_player_2;
						blok_5_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_6 == ' ' && ((blok_3 == simbolo_player_1 && blok_9 == simbolo_player_1) || (blok_4 == simbolo_player_1 && blok_5 == simbolo_player_1))){
						blok_6 = simbolo_player_2;
						blok_6_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_7 == ' ' && ((blok_1 == simbolo_player_1 && blok_4 == simbolo_player_1) || (blok_3 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_8 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_7 = simbolo_player_2;
						blok_7_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_8 == ' ' && ((blok_2 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_9 == simbolo_player_1))){
						blok_8 = simbolo_player_2;
						blok_8_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else if(blok_9 == ' ' && ((blok_1 == simbolo_player_1 && blok_5 == simbolo_player_1) || (blok_3 == simbolo_player_1 && blok_6 == simbolo_player_1) || (blok_7 == simbolo_player_1 && blok_8 == simbolo_player_1))){
						blok_9 = simbolo_player_2;
						blok_9_2 = simbolo_player_2;
						v_control = 0;
						break;
					} else {
						if(blok_5 == ' '){
							blok_5 = simbolo_player_2;
							blok_5_2 = simbolo_player_2;
							v_control = 0;
							break;
						} else if(blok_8 == ' '){
							blok_8 = simbolo_player_2;
							blok_8_2 = simbolo_player_2;
							v_control = 0;
							break;}
						else if(blok_2 == ' '){
							blok_2 = simbolo_player_2;
							blok_2_2 = simbolo_player_2;
							v_control = 0;
							break;} 
						 else if(blok_3 == ' '){
							blok_3 = simbolo_player_2;
							blok_3_2 = simbolo_player_2;
							v_control = 0;
							break;}
						else if(blok_6 == ' '){
							blok_6 = simbolo_player_2;
							blok_6_2 = simbolo_player_2;
							v_control = 0;
							break;} 
						 else{
							srand(time(0));
							variable_de_pr_2 = 1 + rand() % (9);
						}}}

				// si la posicion ingresada es un numero o letra diferente del 1 al 9
				// entonces nos da error para que se ingrese un numero del 1 al 9
				if ((variable_de_pr_2 == ascii_1)||(variable_de_pr_2== ascii_2)){
					std::cout<<"ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
					continue;
        
				// Se valida si el numero que ingreso el jugador 2 es igual al numero de bloque, 
				// entonces se coloca en el bloque elegido el simbolo del jugador 2.

				} else if (variable_de_pr_2 == blok_1_2){		
					blok_1 = simbolo_player_2;
					blok_1_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_2_2){
					blok_2 = simbolo_player_2;
					blok_2_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_3_2){
					blok_3 = simbolo_player_2;
					blok_3_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_4_2){
					blok_4 = simbolo_player_2;
					blok_4_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_5_2){
					blok_5 = simbolo_player_2;
					blok_5_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_6_2){
					blok_6 = simbolo_player_2;
					blok_6_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_7_2){
					blok_7 = simbolo_player_2;
					blok_7_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_8_2){
					blok_8 = simbolo_player_2;
					blok_8_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else if(variable_de_pr_2 == blok_9_2){
					blok_9 = simbolo_player_2;
					blok_9_2 = simbolo_player_2;
					v_control = 0;
					break;
				} else {
					if (modo == 'M'){
						std::cout << "ERROR ... Deberia ser un numero del 1 al 9 y no estar ocupada por otro\n";
						int variable_de_pr_2;
					}}}}}	
	return 0;
}
