#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define TAM 5

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    char descripcion[20];
}eTipo;

typedef struct
{
    int id;
    char nombreColor[20];
}eColor;

typedef struct
{
    int id;
    char nombre[20];
    //idTipo validar
    //idColor validar
    int edad;
}eMascota;

typedef struct
{
    int id;
    char descripcion[25];
    float precio;
}eServicio;

typedef struct
{
    int id;
    int idMascota;
    int idServisio;
    int fecha;
}eTrabajo;

char mostrarMenu();

int pedirDia();
int pedirMes();
int pedirAnio();
void pedirFechaDeIngreso(int dia,int mes,int anio);

int calcularIdDeTipo(int id,int i);
void pedirDescripcionDeTipo(char string[]);
void pedirTipoIngreso(int id,int i,char string[]);

int calcularIdDeColor(int id,int i);
void pedirNombreColor(char string[]);
void pedirColorIngreso(int id,int i,char string[]);

int calcularIdMascota(int id,int i);
void pedirNombreMascota(char string[]);
int validarIdTipo(int id,int i);
int validarIdColor(int id,int i);
int pedirEdadMascota();
void pedirMascotaIngresos(int id,int i,char string[],int edad);

int calcularIdServicio(int id,int i);
void pedirDescripcionServicio(char string[]);
float pedirPrecio();
void pedirServicioIngresos(int id,int i,char string[],float precio);

int calcularIdDeTrabajo(int id,int i);
int validarIdMascota(int id,int i);
int validarIdServicio(int id,int i);
void validarFecha(int dia,int mes,int anio);

void hardcodearArrayTipos(eTipo list[],int tam);
void hardcodearArrayColores(eTipo list[],int tam);
void hardcodearArrayServicios(eTipo list[],int tam);
void hardcodearLosArray(eTipo listTipo[],eColor listColores[],eServicio listServicios[],int tam);

int pedirIdParaModificarMascota();
int encontrarPosicionDelId(eTipo list[],int tam,int id);
void modificarMascotaTipo(eTipo list[],int tam,int id,char string[]);
int modificarMascotaEdad(eMascota list[],int tam,int id);
//
int pedirIdParaBajarMascota();
int encontrarPosicionDelId(eMascota list[],int tam,int id);
void realizarUnaBajaLogica(eMascota list[],int tam,int id,int posicion);//

void listarMascotas(eTipo list[],eMascota list[],int tam);

void listarSoloTipos(eTipo list[],int tam);

void listarSoloColores(eColor list[],int tam);

void listarSoloServicios(eServicio list[],int tam);

void listarSoloNombreMascotaYServicios(eMascota list[],eServicio list[],int tam);
??? altaTrabajo();
