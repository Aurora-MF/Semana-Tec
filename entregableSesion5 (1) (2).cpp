// Solución del escenario propuesto para el entregable de la empresa de transportes automovilísticos
// 2/06/2022
//Diego Alejandro Michel Castro || A01641907
//Daniela Aurora Martínez Fajardo || A01709293

#include <iostream>
#include <string_view>
using namespace std;

class Automovil   //Creamos la clase automóvil
{
private:   //Definimos sus carácterísticas privadas junto con su tipo de dato
  float kilometraje;
  int numPasajeros;
  float rendimientos;
  float capacidadTanque;
  float gasolinaEnTanque;

public:     //Definimos sus características públicas junto con su tipo de dato
  string marca;
  string modelo;
  int anio;
  int numPuertas;
  string color;

//Comenzamos a definir algunos constructores y usamos setters para datos privados
void imprimirDetalles() //Funcion para mostrar algunos datos publicos
  {
    cout<<"Marca: " << marca <<endl;
    cout<<"Modelo:  "<< modelo <<endl;
    cout<<"Anio: " << anio <<endl;
    cout<<"Número de puertas: "<< numPuertas << endl;
    cout<<"Color: " << color << endl;
  }

Automovil(float k,int numP,string m,string mod,int a,int numPuert,string c) // Hacemos un constructor para las principales características
  {
    kilometraje = k;   //Setter para el kilometraje, dato privado
    numPasajeros = numP; //Setter para el numero de pasajeros, dato privado
    marca = m;
    modelo = mod;
    anio = a;
    numPuertas = numPuert;
    color = c;
  }

//Usamos los respectivos constructores para lo que establecimos como privado
public:  
  float obtenerKilometraje()
  {
    return kilometraje;   //Getter para el kilometraje
  }

  int obtenerNumeroPasajeros()
  {
    return numPasajeros;  //Getter para el número de pasajeros
  }

  
};


int main()
{
Automovil auto1(2.22, 4, "Dodge", "Attitude", 2022, 4, "Rojo");
  auto1.imprimirDetalles(); 
  cout << "El kilometraje es: " << auto1.obtenerKilometraje() << " km";
  cout << "\nEl numero de pasajeros es: " << auto1.obtenerNumeroPasajeros();
return 0;
}
