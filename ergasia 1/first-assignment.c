

#include <stdio.h>

int main()
{
    float n1;
    float n2;
    char praksi;
    float apotelesma;

    scanf("%f %c %f",&n1,&praksi,&n2);
    if (praksi=='+')
    {
        apotelesma=n1+n2;
        printf("apotelesma=%f",apotelesma);
    }
     else if (praksi=='*')
    {
        apotelesma=n1*n2;
        printf("apotelesma=%f",apotelesma);
    }
    else if (praksi=='-')
    {
        apotelesma=n1-n2;
        printf("apotelesma=%f",apotelesma);
    }

    else if (praksi=='/')
    {
        if (n2!=0)
        {
            apotelesma=n1/n2;
            printf("apotelesma=%f",apotelesma);
        }
        else
        {
            printf("divide by zero error");
        }
    }
    else
    {
        printf("invalid operator");
    }

    return 0;
}




хела 2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float perimetrosTetragwnou(float x);

int main() {
	int epilogi;
	float perimetros;
	
	while(1==1){
		printf("\nepilekste ena apo ta parakatw\n0.eksodos\n1.tetragwno\n2.parallilogrammo\n3.orthogwnio trigwno\n4.kiklos\n");
		scanf("%d",&epilogi);
		if (epilogi==0){
		break;
		return 0;
		}
		if(epilogi==1){
		float pleura;
		printf("pleura=");
		scanf("%f",&pleura);
		perimetros=perimetrosTetragwnou(pleura);
		printf("perimetros=%f",perimetros);
		
		}
		else if(epilogi==2){
			float pleura1;
			float pleura2;
			printf("pleura1=");
			scanf("%f",&pleura1);
			printf("pleura2=");
			scanf("%f",&pleura2);
			perimetros=perimetrosParallilogrammou(pleura1,pleura2);
			printf("perimetros=%f",perimetros);
		}
		else if(epilogi==3){
			float pleura1;
			float pleura2;
			printf("pleura1=");
			scanf("%f",&pleura1);
			printf("pleura2=");
			scanf("%f",&pleura2);
			perimetros=perimetrosOrthogwniouTrigwnou(pleura1,pleura2);
			printf("perimetros=%f",perimetros);
			
		}
		if(epilogi==4){
			float pleura1;
			float pleura2;
			float r;
			printf("pleura1=");
			scanf("%f",&pleura1);
			printf("pleura2=");
			scanf("%f",&pleura2);
			printf("r=");
			scanf("%f",&r);
			perimetros=perimetrosKiklou(pleura1,pleura2,r);
			printf("perimetros=%f",perimetros);

			
		}
	
	}

		return 0;
}

float perimetrosTetragwnou(float x){
	return 4*x;
}
float perimetrosOrthogwniouTrigwnou(float x,float y){
	float pleura3;
	root=pleura1*pleura1+pleura2*pleura2
	pleura3=sqrt(root);
	perimetros=pleura1+pleura2+pleura3
	return perimetros;
}
float perimetrosKiklou(float x,float y,float z){
	float r;
	float П=3,14;
	return 2*П*r;
}
float perimetrosParallilogrammou(float x,float y){
	return 2*x+2*y;
}
}



хела 3


#include <stdio.h>
#include <stdlib.h>

int main() {
	int arithmos;
	scanf("%d",&arithmos);
	while(arithmos<=0){
		printf("\nerror\nepilekste neo arithmo\n");
		scanf("%d",&arithmos);
	
	}	
	int upoloipo;
	upoloipo=arithmos%2;
	if(upoloipo==1){
		printf("\n1");
	}
	else{
		printf("\n0");
	}
	arithmos=arithmos/2;
	
	
	
		return 0;	
}

хела 4

#include <stdio.h>
#include <stdlib.h>

int main(){
	int THE4343;
	int numberOfSeats=50;//kanonika edw diavazei apo to bus.txt arxeio
	int n=53;
	int i;
	int bus[n];
	if(validateNumberOfSeats(n)==true){
	for(i=0; i<=n; i++){
	bus[i]=0;
	}
	int epilogi;
	printf("epilekste apo ta parakatw\n1.plithos kenwn thesewn\n2.kratisi thesis\n3.kratisi thesis se parathiro\n4.akirwsi kratisis\n5.anazitisi sugkekrimenis thesis\n6.emfanisi listas kratimenwn thesewn\n7.emfanisi pinakidas kukloforias\n8.apothikeusi pinakidas kukloforias\n0.eksodos\n");
	scanf("%d",&epilogi);//zitaei apo to xristi na epileksei poia diadikasia tha akolouthisei
	while (1==1){//eksasfalizetai etsi h sinexeia tou programmatos wste na mhn termatizei prin dothei eksodos
	if(epilogi==1){
		int count;
		count=0;
		for(i==0;i<=n;i++){
			if(bus[i]==0){
			count++;   //metraei to plithow twn kenwn thesewn
			printf("%d,i");//ektupwnei kathe keni thesi
			}
		printf("arithmos kenwn thesewn=%d",count);//ektipwnei to plithos tvn kenwn thesewn
		}
	}
	else if(epilogi==2){
		int numberOfSeat;
		scanf("arithmos thesis=%d",&numberOfSeat);//zitaei apo to xristi na epileksei mia thesi
		if(numberOfSeat>0 && numberOfSeat<=53){//elegxei an o arithmos thesis einai apodektos
			if(bus[numberOfSeat]==0){
				bus[numberOfSeat]=1;//
			}		
		}
		printf("i thesi den einai diathesimi");
	}
	else if(epilogi==3){
		int x=0;
		int keniThesi=-1;
		while(x<n-5){//elegxei tis n-5 prwtes theseis
			if(bus[x]==0){
				keniThesi=x;
				break;
			}
			if(x%4==0){
				x=x+3;//proxvraei ton elegxo stiw theseis poy briskontai sta parathura
			}
			else{
			x=x+1;	
			}
			prinf("thesi %d",keniThesi);
		
		}
		if(bus[n-1]==0){//elegxei ti galaria!!
			printf("thesi %d",n-1);		
		}
		else if(bus[n-4]==0){
			printf("thesi %d",n-4);
		}
	}
	else if(epilogi==4){
		int numberOfSeat;
		scanf("arithmos thesis=%d",&numberOfSeat);//zitaei apo to xristi na eisagei arithmo thesis
		if(numberOfSeat>0 && numberOfSeat<=53){
			if(bus[numberOfSeat]==1){
				bus[numberOfSeat]=0;//akurwnei thn kratisi
			}		
		}
	}
	else if(epilogi==5){
		int numberOfSeat;
		scanf("arithmos thesis=%d",&numberOfSeat);//o xristiw eisagei ti thesi k elegxei an einai diathesimi i oxi
		if(numberOfSeat>0 && numberOfSeat<=53){
			if(bus[numberOfSeat]==0){
				printf("i thesi einai diathesimi");
			}
			else if(bus[numberOfSeat]==1){
				printf("i thesi den einai diathesimi")
			}
		}
	}
	break;	//teleiwnei i entoli while
	return 0;
	}
	}
	else{
		printf("lanthasmenos arithmos thesewn");
	}	
	return 0;
}

bool validateNumberOfSeats(int x){ //elegxei an o sinolikos arithmos thesewn einai n*4-5
	if(x>5 && x<53){
		if((x-5)%4=0)
		return true;
	}
	return false;
}	