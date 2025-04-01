# include <stdio.h>

int main (){

     // Aqui eu declaro as variaveis da primeira carta
char estado;
char codigo [3];
char cidade[15];
int populacao [200];
float area;
float pib;
int pontos_t [4];

    // Aqui eu declaro as variaveis da segunda carta
char estado2;
char codigo2 [2];
char cidade2[16];
int populacao2 [204];
float area2 ;
float pib2;
int pontos_t2 [2];

// Peço para o usuario digitar os dados da carta 1
printf ("coloque a primeira letra do seu estado:\n");
scanf ("%c",&estado);


printf ("coloque o codigo da sua cidade de '1' a'5':\n");
scanf ("%s",&codigo);


printf ("nome da sua  cidade:\n");
scanf ("%s",&cidade);

printf("quantos habitantes tem na sua cidade\n");
scanf ("%d",&populacao);

printf ("quantos km² tem na sua cidade:\n");
scanf ("%f",&area);

printf ("qual o pib da sua cidade:\n");
scanf ("%f",&pib);

printf ("quantos pontos turisticos tem na sua cidade:\n");
scanf ("%d",&pontos_t);

// Peço para o usuario digitar os dados da carta 1
printf ("coloque a primeira letra do seu segundo estado:\n");
scanf ("%c",&estado2);
getchar(); // precisei colocar getchar para dar espaço dos dados da primeira cidade para a segunda cidade!


printf ("coloque o codigo da sua segunda  cidade de '2' a'6':\n");
scanf ("%s",&codigo2);


printf ("nome da sua segunda cidade:\n");
scanf ("%s",&cidade2);

printf("quantos habitantes tem na sua segunda cidade\n");
scanf ("%d",&populacao2);

printf ("quantos km² tem na sua segunda cidade:\n");
scanf ("%f",&area2);

printf ("qual o pib da sua segunda cidade:\n");
scanf ("%f",&pib2);

printf ("quantos pontos turisticos tem na sua segunda cidade:\n");
scanf ("%d",&pontos_t2);




return 0;




}













