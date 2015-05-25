#include <TinkerKit.h>

TKThermistor therm(I0);       

float C, F;		      

void setup()
{

  Serial.begin(9600);
}

void loop()
{
  C = therm.readCelsius();     	// Reading the temperature in Celsius degrees and store in the C variable
  F = therm.readFahrenheit();  	// Reading the temperature in Fahrenheit degrees and store in the F variable

  // Print the collected data in a row on the Serial Monitor
  Serial.print("Analog reading: ");	// Reading the analog value from the thermistor
  Serial.print(therm.read());
  Serial.print("\tC: ");
  Serial.print(C);
  Serial.print("\tF: ");
  Serial.println(F);

  delay(1000);                // Wait one second before get another temperature reading
}
