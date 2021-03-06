
/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino


int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
Serial.begin(9600);
}
//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
  Serial.print("Valor Ldr 0 = ");
  Serial.println(valLdr0);
  Serial.print("Valor Ldr 1 = ");
  Serial.println(valLdr1);
  Serial.print("Valor Ldr 2 = ");
  Serial.println(valLdr2);
  Serial.println(" ");
  delay(2000);
}
