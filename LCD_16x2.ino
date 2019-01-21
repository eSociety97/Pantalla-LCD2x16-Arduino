/**********************************************Capitulo 11 - Pantalla LCD 2x16*****************************************************
*                                                                                                                                 *
*     En este onceavo capitulo aprenderemos a utilizar una pantalla LCD 2x16. Una pantalla LCD es un dispositivo en el cual       *
*  podemos desplegar mensajes. La pantalla nos brinda un espacio 16 columnas por 2 filas.                                         *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 LCD 2x16                                                                                                                    *
*  -1 Potenciometro de 5k                                                                                                         *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/ 



//Incluimos la libreria para utilizar nuestra pantalla 
#include <LiquidCrystal.h>

//Declaramos nuestro objeto y le ingresamos los pines que utilizaremos 
LiquidCrystal lcd(12,11,5,4,3,2); //En el siguiente Orden RS, Enable, D4, D5, D6, D7

void setup(){
  //Inicializamos la lcd y le asignamos el tamaño de la misma. 
  lcd.begin(16,2);
  lcd.clear(); //Limpiamos la pantalla 
  lcd.print(" Hola Mundo");
  delay(1000);
  }

void loop(){
// Desplazarse 13 posiciones (longitud de la cadena) hacia la izquierda
  // para moverlo fuera de la pantalla a la izquierda:
  for(int posicion = 0; posicion <= 12; posicion++ ){
    lcd.scrollDisplayLeft();
    delay(200);
    }
// desplazarse 29 posiciones (longitud de la cadena + longitud de la pantalla) hacia la derecha
  // para moverlo fuera de la pantalla a la derecha:    
  for(int posicion = 0; posicion <= 28; posicion++ ){
    lcd.scrollDisplayLeft();
    delay(200);
    }
// Desplazarse 16 posiciones (longitud de visualización + longitud de la cadena) hacia la izquierda
  // para moverlo de vuelta al centro:
    for(int posicion = 0; posicion <= 15; posicion++ ){
    lcd.scrollDisplayLeft();
    delay(200);
    }
    delay(1000);
  }
