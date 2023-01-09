#include<stdio.h>

// Funktions-Prototypen


//Hauptprogramm
int main () {

	/*
	* Berechnung des Notendurchschnitts über ein Array
	*/

	printf("\n *********************************** ");
	printf("\n *   ^,,,,^   *                    * ");
	printf("\n *  ( o x o)  *  Notendurchschnitt * ");
	printf("\n *  ( 7   7)  *                    * ");
	printf("\n *   ´´´´´´   *            ©S.Buch * ");
	printf("\n *********************************** \n\n");
	
	//Variablen
  int i, noten[10];
  float notenberechnung=0;
  
  //Werte einlesen
  for (i=0; i<10; i++) {
    printf("Bitte geben Sie die %d.Zahl ein: \n",i+1);
    scanf("%d", &noten[i]);
    notenberechnung += noten[i];
  }
  
  //Wert ausgeben
  printf("\nDer Notendurchschnitt lautet %.2f.\n", notenberechnung/10);    
  
  //Ende
  printf("\n\n");
  return 0;
}

//Funktionen
