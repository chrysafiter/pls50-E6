#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	struct Seats{
		char fullName[40];
		unsigned short telephone[10];
		unsigned int numberOfSeat[];
	}seat;
  FILE* f_in, *f_out;        /* metablites-deiktes se arxeio */
   int bus[53];               /* lewforeio me to polu 53 theseis */
   char license[8];           /* pinakida kykloforias, 7 grammata-arithmoi kai to '\0' */
   int seats;                 /* plithos thesewn */
   int i, choice, count;      /* boithitikes metablites */

   f_in = fopen("bus.txt", "r"); /* Anoigei to arxeio eisodou*/
   if(f_in == NULL) /* se periptwsi problimatos kata to anoigma */
   {
      printf("To arxeio bus.txt de mporese na anagnwstei\n");
      exit(1);      /* ejodos apo to programma */
   }
   fscanf(f_in,"%s %d", license, &seats);
   for (i=0;i<seats;i++)
   		if(bus[i]!=0){
   			struct Seats seati;
   			printf("Seat1 fullname:%char",Seati.fullname,\0')
   			printf("Seat1 telephone:%d",Seati.telephone,\0')
   			printf("Seat1 numberOfSeat:%d",Seati.numberOfSeat,\0')
		   };
   fclose(f_in);    /* kleisimo arxeiou eisodou */
   printf("%s %d\n", license, seats); /* ektypwsi pinakidas kai plithous thesewn */
   
   for (i=0;i<seats;i++)
     bus[i]=0; /* arxikopoiisi thesewn lewforeiou */
     
      choice = 1; /* arxiki timi gia eisodo sto loop */
   while (choice != 0) { /* mexri na epilegei termatismos */
      printf("1. emfanish synolikoy plhthous kenwn thesewn kai twn arithmwn  tous\n");
      printf("2. krathsh theshs me sygkekrimeno arithmo\n");
      printf("3. anazitisi kratimenis thesis me sigkekrimeno arithmo\n");
      printf("4. akyrwsh krathshs theshs me sygkekrimeno arithmo\n");
      printf("5. anazhthsh gia to an einai krathmenh thesh me sygkekrimeno arithmo\n");
      printf("0. termatismos\n");
      scanf("%d", &choice); printf("Epilogi: %d\n",choice);
      switch(choice) {
      	 case 1:
           count = 0;   /* arxikopoiisi metriti */
           for (i=0;i<seats;i++)
              if (bus[i] == 0) count++; /* an thesi eleutheri, aujise to metriti */
           printf("Plithos kenwn thesewn = %d apo %d\nArithmoi thesewn:\n",count,seats);
           for (i=0;i<seats;i++)
              if (bus[i] == 0)   /* an thesi eleutheri */
                printf("%d ",i+1); /* typwse ton arithmo tis */
           printf("\n");
           break;
        case 2:
           printf("dwse arithmo thesis\n");
           scanf("%d", &i);
           if (i<1 || i>seats) /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");
           else if (bus[i-1] == 0) {/* an einai eleutheri */
                  bus[i-1] =1;     /* kratise tin */
                  printf("thesi kratithike\n");
                }
                else
                  printf("thesi idi kateilhmmeni\n");
           break;
            case 4:
           printf("dwse arithmo thesis\n");
           scanf("%d", &i);
           if (i<1 || i>seats)   /* elegxos oti arithmos thesis entos oriwn */
              printf("arithmos thesis ektos oriwn\n");
           else if (bus[i-1] != 0) { /* an thesi kratimeni */
                  bus[i-1] = 0;    /* apodesmeuse tin */
                  printf("thesi apodesmeutike\n");
                }
                else
                  printf("thesi idi eleutheri\n");
           break;
            case 0:  /* min kaneis tipote */
           break;
        default:
           printf("akatallili epilogi\n");
      }

