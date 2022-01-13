#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

void PriMenu();
void opcion1(); 
void opcion2(); 
void opcion3(); 
void opcion4(); 
void opcion5();

int main(void)
{

int opc = 0; // variable para seleccionar en menú.

while (opc != 6)
{

    PriMenu();
    scanf("%i", &opc); // preguntar por opción.

    switch (opc)
     {
        case 1:
            opcion1();
            break;
        case 2:
            opcion2(); 
            break;
        case 3:
            opcion3();
            break; 
        case 4:
            opcion4(); 
            break;
        case 5:
            opcion5();
            break;
        case 6:
            break;
         default:
            printf("\n");
            printf("Lo siento, opción inválida. \n");
            printf("\n");
            break;
     }

}

}

void PriMenu() //Función para imprimir el menú.
{
    printf("\n");
    printf("Bienvenido al Menú \n");
    printf("\n");
    Sleep(1000);
    printf("Por favor seleccione una tarea.\n");
    printf("1. Convertir un string a minúscula.\n");
    printf("2. Convertir un string a mayúsucula.\n");
    printf("3. Letras intercaladas en mayúscula y minúsucula.\n");
    printf("4. Remplazar letra en string.\n");
    printf("5. Ejecutar comando en consola.\n");
    printf("6. Salir del Menú.\n");
    printf("\n");
    printf("Ingrese el número de la tarea que quiere ejecutar: ");
}

void opcion1() // Función para convertir un string en minúsculas.
{
    char pal[50];
    int palnum;

    printf("\n");
    printf("Escriba la palabra que quiere convertir: ");

    while(getchar() != '\n'); // Limpio el buffer.

    gets(pal);

    for (int i=0; pal[i] != 0; i++)
    {
        if (pal[i] >= 65 && pal[i] <= 90)
        {
            palnum = pal[i] + 32; //convierte de char a int y suma 32 para pasar a minúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
    }

    printf("\n");
    printf("Palabra en minúscula: %s \n", pal);
    Sleep(3000);

}

void opcion2() // Función para convertir un string en mayúsculas.
{
    char pal[50];

    int palnum;

    printf("\n");
    printf("Escriba la palabra que quiere convertir:");

    while(getchar() != '\n'); // Limpio el buffer.

    gets(pal);

    for (int i=0; pal[i] != 0; i++)
    {
         if (pal[i] >= 97 && pal[i] <= 122)
        {
            palnum = pal[i] - 32; //convierte de char a int y suma 32 para pasar a mayúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
    }

    printf("\n");
    printf("Palabra en mayúscula: %s \n", pal);
    Sleep(3000);

}

void opcion3() // Función para intercalar mayúsculas de minúsculas en un string.
{
    char pal[50];
    int palnum;

    printf("\n");
    printf("Escriba la palabra que quiere convertir: ");
    
    while(getchar() != '\n'); // Limpio el buffer.

    gets(pal);

    for (int i=0; pal[i] != 0; i++)
    {
        if (pal[i] >= 65 && pal[i] <= 90 && i % 2 == 0)
        {
            palnum = pal[i] + 32; //convierte de char a int y suma 32 para pasar a minúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
        else if (pal[i] >= 97 && pal[i] <= 122 && i % 2 != 0)
        {
            palnum = pal[i] - 32; //convierte de char a int y suma 32 para pasar a mayúsucula.
            pal[i] = '0' + palnum-48; //convierte de int a char.
        }
    }

    printf("\n");
    printf("Palabra convertida: %s \n", pal);
    Sleep(3000);
}

void opcion4() // Función que permite cambiar caracter por otro en string.
{
    char pal[50];
    char pal1[2];
    char pal2[2];

    printf("\n");
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la palabra que quiere editar: ");
    gets(pal);
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la letra dentro de la palabra que quiere remplazar: ");
    scanf("%s", pal1);
    while(getchar() != '\n'); // Limpio el buffer.
    printf("Escriba la letra o caracter que quiere poner: ");
    scanf("%s", pal2);

    for(int i = 0; pal[i] != 0; i++)
    {
        if (pal[i] == pal1[0])
        {
            pal[i] = pal2[0]; //Intercambiar la letra por el caracter nuevo.
        }
    }

    printf("\n");
    printf("Palabra editada: %s \n", pal);
    Sleep(3000);
}

void opcion5() // Función para ejecutar comandos en la consola.
{
    char pal[50];
    printf("\n");
    printf("Escriba el comando que quiera ejecutar: ");
    scanf("%s", pal);
    printf("\n");

    system(pal); // Ejecutar el comando.

    Sleep(3000);

}