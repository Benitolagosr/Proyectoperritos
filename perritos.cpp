#include <stdio.h>
#include <string.h>

struct Perro{
    char nombre[15];
    int price;
    int color , mdr1;
    bool genre;
    int aux;
};

int main(){
    printf("Ingrese el nombre del perro:\n");
    return 0;
}

Perro crearPerro(){
    Perro a;
    
    printf("Ingrese el nombre del perro:\n");
    scanf("%s", a.nombre);
    printf("Sexo: 1.Hembra 2.Macho");
    scanf("%d",&(a.aux));
    if(a.aux == 1){
	a.genre = true;
	}else{
	a.genre = false;
}
    printf("Ingrese el gen:\n");
    scanf("%d", &(a.mdr1));
    printf("Ingrese  numero del color:\n");
    scanf("%d", &(a.color));
    printf("Ingrese el precio:\n");
    scanf("%d", &(a.price));
    return a;
}

// operaciones deterministicas con perro a
