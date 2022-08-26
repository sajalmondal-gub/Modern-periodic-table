#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int data;
    struct node *next;
} * head;


void createList(int n);
void displayList();
int  search(int key);
//int sajal();
void table();
void number();

int main(){
system ("color cf");
    int c;
      do
      {
        int n;
       printf("Please choice :");
       printf("\n\n1. Preiodic Table.\n\n2. Search Atomic number.\n\n3. Search Atomic name.\n\n");
       scanf("%d",&n);
       printf("\n\n");
       if(n==1)
       {
           table();
       }
       else if (n==2)
       {
           number();
       }
       else if (n==3)
       {

           sajal();
       }

    printf("\n\nEnter 'Y' to continue else any letter\n");

 fflush(stdin);
 c=getche();
 printf("\n");
 }while(c=='Y' || c=='y');

      return 0;
    }
 void table()
 {
       system ("color 2f");
      int i,n=7;
    for(i=1;i<=18;i++) {
        printf("  %d       ",i);
        }
    for(i=1;i<=n;i++)
    {
        if(i=1)
        {
             //printf("\n\n\n\n IA\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                                            VIIIA");
             printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n  1\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t                                                                            2 ");
            printf("\n  H      IIA\t\t\t\t\t\t\t\t\t\t\t\t\t             IIIA        IVA        VA        VIA       VIIA        He");
        }
        if(i=2)
        {
              printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n  3        4\t\t\t\t\t\t\t\t\t\t\t\t\t               5          6           7         8         9         10");
            printf("\n Li       Be\t\t\t\t\t\t\t\t\t\t\t\t\t               B          C           N         O         F         Ne");
        }
        if(i=3)
        {
             printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n 11\t  12\t\t\t\t\t\t\t\t\t\t\t\t\t              13         14          15        16        17         18");
            printf("\n Na\t  Mg\t\t\t\t\t\t\t\t\t\t\t\t\t              Al         Si           P         S        Cl         Ar");
        }
        if(i=4)
        {

            printf("\n\n\t\t     IIIB      IVB\t  VB\t   VIB\t    VIIB     VIIIB     VIIIB\tVIIIB\t       IB\t  IIB   ");
             printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n 19\t  20         21\t        22\t  23\t    24\t      25        26\t 27\t   28\t       29          30         31\t 32\t     33\t       34\t 35\t    36");
            printf("\n  K\t  Ca         Sc\t        Ti\t   V\t    Cr\t      Mn        Fe\t CO\t   Ni\t       Cu          Zn         Ga\t Ge\t     As\t       Se\t Br\t    Kr");
        }
        if(i=5)
        {
             printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            printf("\n\n 19\t  37         38\t        39\t  40\t    41\t      42        43\t 44\t   45\t       46          47         48\t 49\t     50\t       51\t 52\t    53");
           printf("\n Rb\t  Sr          Y\t        Zr\t  Nb\t    Mo\t      Tc        Ru\t Rh\t   Pd\t       Ag          Cd         In\t Sn\t     Sb\t       Te\t  I\t    Xe");
        }
    if(i=6)
    {
         printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        printf("\n\n 19\t  37         38\t        39\t  40\t    41\t      42        43\t 44\t   45\t       46          47         48\t 49\t     50\t       51\t 52\t    53");
         printf("\n Cs\t  Ba      57-71\t        Hf\t  Ta\t     W\t      Re        Os\t Ir\t   Pt\t       Au          Hg         Tl\t Pb\t     Bi\t       Po\t At\t    Rn");
    }
    if(i=7)
    {
         printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
           printf("\n\n 54\t  55         56\t       104\t 105\t   106\t     107       108\t109\t  110\t      111         112        113\t114\t    115\t      116\t117\t   118");
           printf("\n Fr\t  Ra     89-103\t        Rf\t  Db\t    Sg\t      Bh        Hs\t Mt\t   Ds\t       Rg          Cn         Nh\t Fl\t     Mc\t       Lv\t Ts\t    Og");
           printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    }
    }
 }
 void createList(int n)
{
    struct node *newNode, *temp;

    int i, dat[118]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118};

    head = malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Unable to allocate memory. Exiting from app.");
        exit(0);
    }

    head->data = dat[0];
    head->next = NULL;

    temp = head;
    for (i = 2; i <= n; i++)
    {
        newNode = malloc(sizeof(struct node));

        if (newNode == NULL)
        {
            printf("Unable to allocate memory. Exiting from app.");
            exit(0);
        }



        newNode->data = dat[i-1];
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }

}


void displayList()
{
    struct node *temp;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int search(int key)
{
    int index;
    struct node *curNode;

    index = 0;
    curNode = head;


    while (curNode != NULL && curNode->data != key)
    {
        index++;
        curNode = curNode->next;
    }


    return (curNode != NULL) ? index : -1;
}
void number()
{
    system ("color 9f");
     int n=118, keyToSearch, index;


      createList(n);
  // printf("\nData in list: \n");
   // displayList();
printf("\nEnter element to search: ");
    scanf("%d", &keyToSearch);
    index = search(keyToSearch);

    if (index >= 0)
    {


        printf("The Atomic number %d\n", index+1);
    }
    else
        printf("%d not found in the list.\n", keyToSearch);


     if(index+1==1)
 {
     printf("Atomic symbol: H\n\n Atomic name : Hydrogen\n \nGrup : 1\n\n Period :1\n\n Atomic weight:1.008\n\n Density : 0.00008988\n\nMelting point :14.01\n\nBoilling point20.28\n\nC[1]: 14.304\n\nElectronegativity: 2.20\n\nAbundance in Earth's crust:1400");
 }
else if (index+1==3)
{
     printf("Atomic symbol: Li\n\n Atomic name :Lithium\n Grup : 1\n\n Period :2\n\n Atomic weight:6.94\n\n Density : 0.053\n\nMelting point :453.69\n\nBoilling point: 1560\n\nC[1]: 3.582\n\nElectronegativity: 0.98\n\nAbundance in Earth's crust:20\n");
}
else if (index+1==2)
{
     printf("Atomic symbol: He\n\n Atomic name :Helium\n\n Grup : 18\n\n Period :1\n\n Atomic weight:4.002602\n\n Density : 0.0001785\n\nMelting point :0\n\nBoilling point: 4.22\n\nC[1]: 5.193\n\nElectronegativity: --\n\nAbundance in Earth's crust:0.008\n");
}
else if (index+1==4)
{
     printf("Atomic symbol: Be\n\n Atomic name :Beryllium\n\n Grup : 2\n\n Period :2\n Atomic weight:9.0121831\n\n Density : 1.83\n\nMelting point :1560\n\nBoilling point: 2742\n\nC[1]: 14.825\n\nElectronegativity: 1.57\n\nAbundance in Earth's crust:2.8\n");
}
else if (index+1==5)
{
     printf("Atomic symbol: B\n\n Atomic name :Boron\n\n Grup :13\n\n Period :2\n\n Atomic weight:10.81\n\n Density : 2.34\n\nMelting point :2349\n\nBoilling point: 4200\n\nC[1]: 1.026\n\nElectronegativity:2.04\n\nAbundance in Earth's crust: 10\n");
}
else if (index+1==6)
{
     printf("Atomic symbol: C\n\n Atomic name :Carbon\n \nGrup : 14\n\n Period :2\n\n Atomic weight:12.011\n\n Density : 2.267\n\nMelting point :3800\n\nBoilling point: 4300\n\nC[1]: 0.709\n\nElectronegativity: 2.55\n\nAbundance in Earth's crust:200\n");
}
else if (index+1==7)
{
     printf("Atomic symbol: N\n\n Atomic name :Nitrogen\n\n Grup : 15\n\n Period :2\n\n Atomic weight:14.007\n\n Density : 0.0012506\n\nMelting point :63.15\n\nBoilling point: 77.36\n\nC[1]: 1.04\n\nElectronegativity: 3.04\n\nAbundance in Earth's crust:19\n");
}
else if (index+1==8)
{
     printf("Atomic symbol: O\n\n Atomic name :Oxyzen\n\n Grup : 16\n\n Period :2\n\n Atomic weight:15.999\n\n Density : 0.001249\n\nMelting point :54.36\n\nBoilling point: 90.20\n\nC[1]: 0.918\n\nElectronegativity: 3.44\n\nAbundance in Earth's crust:461000\n");
}
else if (index+1==9)
{
     printf("Atomic symbol: F\n\n Atomic name :Flourin\n\n Grup : 17\n\n Period :2\n\n Atomic weight: 18.9898403163\n\n Density : 0.001696\n\nMelting point :53.53\n\nBoilling point: 85.03\n\nC[1]: 0.824\n\nElectronegativity: 3.98\n\nAbundance in Earth's crust:585\n");
}
else if (index+1==10)
{
     printf("Atomic symbol: Ne\n\n Atomic name :Neon\n\n Grup : 18\n\n Period :2\n\n Atomic weight:20.1797\n\n Density : 0.0008999\n\nMelting point :24.56\n\nBoilling point: 27.07\n\nC[1]: 1.03\n\nElectronegativity: -\n\nAbundance in Earth's crust:0.005\n");
}
else if (index+1==11)
{
     printf("Atomic symbol: Na\n\n Atomic name :Sodium\n\n Grup : 1\n\n Period :3\n\n Atomic weight:22.98976928\n\n Density : 0.971\n\nMelting point :370.87\n\nBoilling point:1156\n\nC[1]:1.228\n\nElectronegativity: 0.93\n\nAbundance in Earth's crust:23600\n");
}
else if (index+1==12)
{
     printf("Atomic symbol: Mg\n\n Atomic name :Magnesium\n\n Grup : 2\n\n Period :3\n\n Atomic weight:24.305\n\n Density : 1.738\n\nMelting point :923\n\nBoilling point: 1363\n\nC[1]: 1.023\n\nElectronegativity: 1.31\n\nAbundance in Earth's crust:23300\n");

}
else if (index+1==13)
{
     printf("Atomic symbol: Al\n\n Atomic name :Aluminium\n\n Grup : 13\n\n Period :3\n\n Atomic weight:26.9815384\n\n Density : 2.698\n\nMelting point :933.47\n\nBoilling point: 2792\n\nC[1]: 0.897\n\nElectronegativity: 1.61\n\nAbundance in Earth's crust:82300\n");
}
else if (index+1==14)
{
     printf("Atomic symbol: Si\n\n Atomic name :Silicon\n\n Grup : 14\n\n Period :3\n\n Atomic weight :28.085\n\n Density : 2.3296\n\nMelting point :1687\n\nBoilling point: 3538\n\nC[1]: 0.705\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust:282000\n");
}
else if (index+1==15)
{
     printf("Atomic symbol: P\n\n Atomic name :Phosphorus\n\n Grup : 15\n\n Period :3\n\n Atomic weight:30.973761998\n\n Density : 1.82\n\nMelting point :317.30\n\nBoilling point: 550\n\nC[1]: 0.769\n\nElectronegativity: 2.19\n\nAbundance in Earth's crust:1050\n");
}
else if (index+1==16)
{
     printf("Atomic symbol: S\n\n Atomic name :Sulfur\n\n Grup : 16\n\n Period :3\n\n Atomic weight:32.06\n\n Density : \n\nMelting point :54.36\n\nBoilling point: 90.20\n\nC[1]: 0.918\n\nElectronegativity: 3.44\n\nAbundance in Earth's crust:461000\n");
}
else if (index+1==17)
{
     printf("Atomic symbol: Cl\n\n Atomic name :Chlorine\n Group : 17\n\n Period : 3\n\n Atomic weight: 35.45\n\n Density : 0.003214\n\nMelting point : 171.6\n\nBoilling point: 239.11\n\nC[1]: 0.479\n\nElectronegativity: 3.16\n\nAbundance in Earth's crust: 145");

}
else if (index+1==18)
{
     printf("Atomic symbol: Ar\n\n Atomic name : Argon\n Group : 18\n\n Period : 3\n\n Atomic weight: 39.948\n\n Density : 0.0017837\nMelting point : 83.80\n\nBoilling point: 87.30\n\nC[1]: 0.52\n\nElectronegativity: --\n\nAbundance in Earth's crust: 3.5");

}
else if (index+1==19)
{
     printf("Atomic symbol: K\n\n Atomic name : Potassium\n Group : 1\n\n Period : 4\n\n Atomic weight: 39.0983\n\n Density : 0.862\nMelting point : 336.53\n\nBoilling point: 1032\n\nC[1]: 0.757\n\nElectronegativity: 0.82\n\nAbundance in Earth's crust: 20900\n");

}
else if (index+1==20)
{
     printf("Atomic symbol: Ca\n\n Atomic name : Calcium\n Group : 2\n\n Period : 4\n\n Atomic weight: 40.078\n\n Density : 1.54\nMelting point : 1115\n\nBoilling point: 1757\n\nC[1]: 0.647\n\nElectronegativity: 1\n\nAbundance in Earth's crust: 41500\n");

}
else if (index+1==21)
{
     printf("Atomic symbol: Sc\n\n Atomic name : Scandium\n Group : 3\n\n Period : 4\n\n Atomic weight: 44.955908\n\n Density : 2.989\nMelting point : 1814 \n\nBoilling point: 3109\n\nC[1]: 0.568\n\nElectronegativity: 1.36\n\nAbundance in Earth's crust: 22\n");

}
else if (index+1==22)
{
     printf("Atomic symbol: Ti\n\n Atomic name : Titanium\n Group : 4\n\n Period : 4\n\n Atomic weight: 47.867\n\n Density : 4.54\nMelting point : 1941\n\nBoilling point: 3560\n\nC[1]: 0.523\n\nElectronegativity: 1.54\n\nAbundance in Earth's crust: 5650\n");

}
else if (index+1==23)
{
     printf("Atomic symbol: V\n\n Atomic name : Vanadium\n Group : 5\n\n Period : 4\n\n Atomic weight: 50.9415\n\n Density : 6.11\nMelting point : 2183\n\nBoilling point: 3680\n\nC[1]: 0.489\n\nElectronegativity: 1.63\n\nAbundance in Earth's crust: 120\n");

}
else if (index+1==24)
{
     printf("Atomic symbol: Cr\n\n Atomic name : Chromium\n Group : 6\n\n Period : 4\n\n Atomic weight: 51.9961\n\n Density : 7.15\nMelting point : 2180 \n \nBoilling point: 2944\n\nC[1]: 0.449\n\nElectronegativity: 1.66\n\nAbundance in Earth's crust: 102\n");

}
else if (index+1==25)
{
     printf("Atomic symbol: Mn\n\n Atomic name : Manganese\n Group : 7\n\n Period : 4\n\n Atomic weight: 54.938043\n\n Density : 7.44\nMelting point : 1519\n\nBoilling point: 2334\n\nC[1]: 0.479\n\nElectronegativity: 1.55\n\nAbundance in Earth's crust: 950\n");

}
else if (index+1==26)
{
     printf("Atomic symbol: Fe\n\n Atomic name : Iron\n Group : 8\n\n Period : 4\n\n Atomic weight: 55.845\n\n Density : 7.874\nMelting point : 1811 \n\nBoilling point: 3134\n\nC[1]: 0.449\n\nElectronegativity: 1.83\n\nAbundance in Earth's crust: 56300\n");

}
else if (index+1==27)
{
     printf("Atomic symbol: Co\n\n Atomic name : Cobalt\n Group : 9\n\n Period : 4\n\n Atomic weight: 58.933194\n\n Density : 8.86\nMelting point : 1768\n\nBoilling point: 3200\n\nC[1]: 0.421\n\nElectronegativity: 1.88\n\nAbundance in Earth's crust: 25\n");

}
else if (index+1==28)
{
     printf("Atomic symbol: Ni\n\n Atomic name : Nickel\n Group : 10\n\n Period : 4\n\n Atomic weight: 58.6934\n\n Density : 8.912\nMelting point : 1728\n\nBoilling point: 3186\n\nC[1]: 0.444\n\nElectronegativity: 1.91\n\nAbundance in Earth's crust: 84\n");

}
else if (index+1==29)
{
     printf("Atomic symbol: Cu\n\n Atomic name : Copper\n Group : 11\n\n Period : 4\n\n Atomic weight: 63.546\n\n Density : 8.96\nMelting point : 1357.77 \n\nBoilling point: 2835\n\nC[1]: 0.385\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: 60\n");

}
else if (index+1==30)
{
     printf("Atomic symbol: Zn\n\n Atomic name : Zinc\n Group : 12\n\n Period : 4\n\n Atomic weight: 65.38\n\n Density : 7.134\nMelting point : 692.88\n\nBoilling point: 1180\n\nC[1]: 0.388\n\nElectronegativity: 1.65\n\nAbundance in Earth's crust: 70\n");

}
else if (index+1==31)
{
     printf("Atomic symbol: Ga\n\n Atomic name : Gallium\n Group : 13\n\n Period : 4\n\n Atomic weight: 69.723\n\n Density : 5.907\nMelting point : 302.9146\n\nBoilling point: 2673\n\nC[1]: 0.371\n\nElectronegativity: 1.81\n\nAbundance in Earth's crust: 19\n");

}
else if (index+1==32)
{
     printf("Atomic symbol: Ge\n\n Atomic name : Germanium\n Group : 14\n\n Period : 4\n\n Atomic weight: 72.630\n\n Density : 5.323\nMelting point : 1211.40 \n\nBoilling point: 3106\n\nC[1]: 0.32\n\nElectronegativity: 2.01\n\nAbundance in Earth's crust: 1.5\n");

}
else if (index+1==33)
{
     printf("Atomic symbol: As\n\n Atomic name : Arsenic\n Group : 15\n\n Period : 4\n\n Atomic weight: 74.921595\n\n Density : 5.776\nMelting point : 1090 \n\nBoilling point: 887\n\nC[1]: 0.329\n\nElectronegativity: 2.18\n\nAbundance in Earth's crust: 1.8\n");

}
else if (index+1==34)
{
     printf("Atomic symbol: Se\n\n Atomic name : Selenium\n Group : 16\n\n Period : 4\n\n Atomic weight: 78.971\n\n Density : 4.809\nMelting point : 453\n \nBoilling point: 958\n\nC[1]: 0.321\n\nElectronegativity: 2.55\n\nAbundance in Earth's crust: 0.05\n");

}
else if (index+1==35)
{
     printf("Atomic symbol: Br\n\n Atomic name : Bromine\n Group : 17\n\n Period : 4\n\n Atomic weight: 79.904\n\n Density : 3.122\nMelting point : 265.8\n\nBoilling point: 332.0\n\nC[1]: 0.474\n\nElectronegativity: 2.96\n\nAbundance in Earth's crust: 2.4\n");

}
else if (index+1==36)
{
     double crust=1*pow(10,-4);
     printf("Atomic symbol: Kr\n\n Atomic name : Krypton\n Group : 18\n\n Period : 4\n\n Atomic weight: 83.798\n\n Density : 0.003733\nMelting point : 115.79\n\nBoilling point: 119.93\n\nC[1]: 0.248\n\nElectronegativity: 3\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==37)
{
     printf("Atomic symbol: Rb\n\n Atomic name : Rubidium\n\n Group : 1\n\n Period : 5\n\n Atomic weight: 85.4678\n\n Density : 1.532\n\nMelting point : 312.46\n\nBoilling point: 961\n\nC[1]: 0.363\n\nElectronegativity: 0.82\n\nAbundance in Earth's crust: 90\n");

}
else if (index+1==38)
{
     printf("Atomic symbol: Sr\n\n Atomic name : Strontium\n\n Group : 2\n\n Period : 5\n\n Atomic weight: 87.62\n\n Density : 2.64\n\nMelting point : 1050\n\nBoilling point: 1655\n\nC[1]: 0.301\n\nElectronegativity: 0.95\n\nAbundance in Earth's crust: 370\n");

}
else if (index+1==39)
{
     printf("Atomic symbol: Y\n\n Atomic name : Yttrium\n\n Group : 3\n\n Period : 5\n\n Atomic weight: 88.90584\n\n Density : 4.469\n\nMelting point : 1799\n\nBoilling point: 3609\n\nC[1]: 0.298\n\nElectronegativity: 1.22\n\nAbundance in Earth's crust: 33\n");

}
else if (index+1==40)
{
     printf("Atomic symbol: Zr\n\n Atomic name : Zirconium\n\n Group : 4\n\n Period : 5\n\n Atomic weight: 91.224\n\n Density : 6.506\n\nMelting point : 2128\n\nBoilling point: 4682\n\nC[1]: 0.278\n\nElectronegativity: 1.33\n\nAbundance in Earth's crust: 165\n");

}
else if (index+1==41)
{
     printf("Atomic symbol: Nb\n\n Atomic name : Niobium\n\n Group : 5\n\n Period : 5\n\n Atomic weight: 92.90637\n\n Density : 8.57\n\nMelting point : 2750\n\nBoilling point: 5017\n\nC[1]: 0.265\n\nElectronegativity: 1.6\n\nAbundance in Earth's crust: 20\n");

}
else if (index+1==42)
{
     printf("Atomic symbol: Mo\n\n Atomic name : Molybdenum\n\n Group : 6\n\n Period : 5\n\n Atomic weight: 95.95\n\n Density : 10.22\n\nMelting point : 2896\n\nBoilling point: 4912\n\nC[1]: 0.251\n\nElectronegativity: 2.16\n\nAbundance in Earth's crust: 1.2\n");

}
else if (index+1==43)
{
     double crust=3*pow(10,-9);
     printf("Atomic symbol: Tc\n\n Atomic name : Technetium\n\n Group : 7\n\n Period : 5\n\n Atomic weight: 98\n\n Density : 11.5\n\nMelting point : 2430\n\nBoilling point: 4538\n\nC[1]: --\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: ~ lf\n",crust);

}
else if (index+1==44)
{
     printf("Atomic symbol: Ru\n\n Atomic name : Ruthenium\n \nGroup : 8\n\n Period : 5\n\n Atomic weight: 101.07\n\n Density : 12.37\n\nMelting point : 2607 \n\nBoilling point: 4423\n\nC[1]: 0.238\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.001\n");

}
else if (index+1==45)
{
     printf("Atomic symbol: Rh\n\n Atomic name : Rhodium\n\n Group : 9\n\n Period : 5\n\n Atomic weight: 102.90549\n\n Density : 12.41\n\nMelting point : 2237 \n\nBoilling point: 3968\n\nC[1]: 0.243\n\nElectronegativity: 2.28\n\nAbundance in Earth's crust: 0.001\n");

}
else if (index+1==46)
{
     printf("Atomic symbol: Pd\n\n Atomic name : Palladium\n\n Group : 10\n\n Period : 5\n\n Atomic weight: 106.42\n\n Density : 12.02\n\nMelting point : 1828.05\n\nBoilling point: 3236\n\nC[1]: 0.244\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.015\n");

}
else if (index+1==47)
{
     printf("Atomic symbol: Ag\n\n Atomic name : Silver\n\nGroup : 11\n\n Period : 5\n\n Atomic weight: 107.8682\n\n Density : 10.501\n\nMelting point : 1234.93\n\nBoilling point: 2435\n\nC[1]: 0.235\n\nElectronegativity: 1.93\n\nAbundance in Earth's crust: 0.075\n");

}
else if (index+1==48)
{
     printf("Atomic symbol: Cd\n\n Atomic name : Cadmium\n\n Group : 12\n\n Period : 5\n\n Atomic weight: 112.414\n\n Density : 8.69\n\nMelting point : 594.22 \n\nBoilling point: 1040\n\nC[1]: 0.232\n\nElectronegativity: 1.69\n\nAbundance in Earth's crust: 0.159\n");

}
else if (index+1==49)
{
     printf("Atomic symbol: In\n\n Atomic name : Indium\n\n Group : 13\n\n Period : 5\n\n Atomic weight: 114.818\n\n Density : 7.31\n\nMelting point : 429.75\n\nBoilling point: 2345\n\nC[1]: 0.233\n\nElectronegativity: 1.78\n\nAbundance in Earth's crust: 0.25\n");

}
else if (index+1==50)
{
     printf("Atomic symbol: Sn\n\n Atomic name : Tin\n \nGroup : 14\n\n Period : 5\n\n Atomic weight: 118.710\n\n Density : 7.287\n\nMelting point : 505.08\n\nBoilling point: 2875\n\nC[1]: 0.228	\n\nElectronegativity: 1.96\n\nAbundance in Earth's crust: 2.3\n");

}
else if (index+1==51)
{
     printf("Atomic symbol: Sb\n\n Atomic name : Antimony\n\n Group : 15\n\n Period : 5\n\n Atomic weight: 121.760\n\n Density : 6.685\n\nMelting point : 903.78 \n\nBoilling point: 1860\n\nC[1]: 0.207\n\nElectronegativity: 2.05\n\nAbundance in Earth's crust: 0.2\n");

}
else if (index+1==52)
{
     printf("Atomic symbol: Te\n\n Atomic name : Tellurium\n \nGroup : 16\n\n Period : 5\n\n Atomic weight: 127.60\n\n Density : 6.232\n\nMelting point : 722.66\n\nBoilling point: 1261\n\nC[1]: 0.202\n\nElectronegativity: 2.1\n\nAbundance in Earth's crust: 0.001\n");

}
else if (index+1==53)
{
     printf("Atomic symbol: I\n\n Atomic name : Iodine\n \nGroup : 17\n\n Period : 5\n\n Atomic weight: 126.90447\n\n Density : 4.93\n\nMelting point : 386.85\n \nBoilling point: 457.4\n\nC[1]: 0.214	\n\nElectronegativity: 2.66\n\nAbundance in Earth's crust: 0.45\n");

}
else if (index+1==54)
{
     double crust=3*pow(10,-5);
     printf("Atomic symbol: Xe\n\n Atomic name : Xenon\n\n Group : 18\n\n Period : 5\n\n Atomic weight: 131.293\n\n Density : 0.005887\n\nMelting point : 161.4  \n \nBoilling point: 165.03\n\nC[1]: 0.158\n\nElectronegativity: 2.6\n\nAbundance in Earth's crust: lf\n",crust);

}
else if (index+1==55)
{
     printf("Atomic symbol: Cs\n\n Atomic name : Caesium\n Group : 1\n\n Period : 6\n\n Atomic weight: 132.90545196\n\n Density : 1.873\nMelting point : 301.59\n\nBoilling point: 944\n\nC[1]: 0.242\n\nElectronegativity: 0.79\n\nAbundance in Earth's crust: 3\n");

}
else if (index+1==56)
{
     printf("Atomic symbol: Ba\n\n Atomic name : Barium\n\n Group : 2\n\n Period : 6\n\n Atomic weight: 137.327\n\n Density : 3.594\n\nMelting point : 1000\n\nBoilling point: 2170\n\nC[1]: 0.204\n\nElectronegativity: 0.89\n\nAbundance in Earth's crust: 425\n");

}
else if (index+1==57)
{
     printf("Atomic symbol: La\n\n Atomic name : Lanthanum\n \nGroup : 3\n\n Period : 6\n\n Atomic weight: 138.90547\n\n Density : 6.145\n\nMelting point : 1193\n\nBoilling point: 3737\n\nC[1]: 0.195\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: 39\n");

}
else if (index+1==58)
{
     printf("Atomic symbol: Ce\n\n Atomic name : Cerium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 140.116\n\n Density : 6.77\n\nMelting point : 1068\n\nBoilling point: 3716\n\nC[1]: 0.192\n\nElectronegativity: 1.12\n\nAbundance in Earth's crust: 66.5\n");

}
else if (index+1==59)
{
     printf("Atomic symbol: Pr\n\n Atomic name : Praseodymium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 140.90766\n\n Density : 6.773\n\nMelting point : 1208\n\nBoilling point: 3793\n\nC[1]: 0.193\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: 9.2\n");

}
else if (index+1==60)
{
     printf("Atomic symbol: Nd\n\n Atomic name : Neodymium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 144.242\n\n Density : 7.007\n\nMelting point : 1297\n\nBoilling point: 3347\n\nC[1]: 0.19\n\nElectronegativity: 1.14\n\nAbundance in Earth's crust: 41.5\n");

}
else if (index+1==61)
{
     double crust=2*pow(10,-19);
     printf("Atomic symbol: Pm\n\n Atomic name : Promethium\n\n Group : \n\n Period : 6\n\n Atomic weight: 145\n\n Density : 7.26\n\nMelting point : 1315 \n\nBoilling point: 3273\n\nC[1]: -–\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==62)
{
     printf("Atomic symbol: Sm\n\n Atomic name : Samarium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 150.36\n\n Density : 7.52\n\nMelting point : 1345\n\nBoilling point: 2067\n\nC[1]: 0.197\n\nElectronegativity: 1.17\n\nAbundance in Earth's crust: 7.05\n");

}
else if (index+1==63)
{
     printf("Atomic symbol: Eu\n\n Atomic name : Europium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 151.964\n\n Density : 5.243\n\nMelting point : 1099\n\nBoilling point: 1802\n\nC[1]: 0.182\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 2\n");

}
else if (index+1==64)
{
     printf("Atomic symbol: Gd\n\n Atomic name : Gadolinium\n\n Group : \n\n Period : 6\n\n Atomic weight: 157.25\n\n Density : 7.895\n\nMelting point : 1585\n\nBoilling point: 3546\n\nC[1]: 0.236\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 6.2\n");

}
else if (index+1==65)
{
     printf("Atomic symbol: Tb\n\n Atomic name : Terbium\n\n Group : \n\n Period : 6\n\n Atomic weight: 158.925354\n\n Density : 8.229\n\nMelting point : 1629\n\nBoilling point: 3503\n\nC[1]: 0.182\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 1.2\n");

}
else if (index+1==66)
{
     printf("Atomic symbol: Dy\n\n Atomic name : Dysprosium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 162.500\n\n Density : 8.55\n\nMelting point : 1680\n\nBoilling point: 2840\n\nC[1]: 0.17\n\nElectronegativity: 1.22\n\nAbundance in Earth's crust: 5.2\n");

}
else if (index+1==67)
{
     printf("Atomic symbol: Ho\n\n Atomic name : Holmium\n\n Group : \n\n Period : 6\n\n Atomic weight: 164.930328\n\n Density : 8.795\n\nMelting point : 1734\n\nBoilling point: 2993\n\nC[1]: 0.165\n\nElectronegativity: 1.23\n\nAbundance in Earth's crust: 1.3\n");

}
else if (index+1==68)
{
     printf("Atomic symbol: Er\n\n Atomic name : Erbium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 167.259\n\n Density : 9.066\n\nMelting point : 1802\n \nBoilling point: 3141\n\nC[1]: 0.168\n\nElectronegativity: 1.24\n\nAbundance in Earth's crust: 3.5\n");

}
else if (index+1==69)
{
     printf("Atomic symbol: Tm\n\n Atomic name : Thulium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 168.934218\n\n Density : 9.321\n\nMelting point : 1818\n\nBoilling point: 2223\n\nC[1]: 0.16\n\nElectronegativity: 1.25\n\nAbundance in Earth's crust: 0.52\n");

}
else if (index+1==70)
{
     printf("Atomic symbol: Yb\n\n Atomic name : Ytterbium\n\n Group : \n\n Period : 6\n\n Atomic weight: 173.045\n\n Density : 6.965\n\nMelting point : 1097\n\nBoilling point: 1469\n\nC[1]: 0.155\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: 3.2\n");

}
else if (index+1==71)
{
     printf("Atomic symbol: Lu\n\n Atomic name : Lutetium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 174.9668\n\n Density : 9.84\n\nMelting point : 1925\n\nBoilling point: 3675\n\nC[1]: 0.154\n\nElectronegativity: 1.27\n\nAbundance in Earth's crust: 0.8\n");

}
else if (index+1==72)
{
     printf("Atomic symbol: Hf\n\n Atomic name : Hafnium\n \nGroup : 4\n\n Period : 6\n\n Atomic weight: 178.49\n\n Density : 13.31\n\nMelting point : 2506  \n\nBoilling point: 4876\n\nC[1]: 0.144\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 3\n");

}
else if (index+1==73)
{
     printf("Atomic symbol: Ta\n\n Atomic name : Tantalum\n\n Group : 5\n\n Period : 6\n\n Atomic weight: 180.94788\n\n Density : 16.654\n\nMelting point : 3290\n\nBoilling point: 5731\n\nC[1]: 0.14\n\nElectronegativity: 1.5\n\nAbundance in Earth's crust: 2\n");

}
else if (index+1==74)
{
     printf("Atomic symbol: W\n\n Atomic name : Tungsten\n\n Group : 6\n\n Period : 6\n\n Atomic weight: 183.84\n\n Density : 19.25\n\nMelting point : 3695\n\nBoilling point: 5828\n\nC[1]: 0.132\n\nElectronegativity: 2.36\n\nAbundance in Earth's crust: 1.3\n");

}
else if (index+1==75)
{
     double crust=7*pow(10,-4);
     printf("Atomic symbol: Re\n\n Atomic name : Rhenium\n\n Group : 7\n\n Period : 6\n\n Atomic weight: 186.207\n\n Density : 21.02\n\nMelting point : 3459 \n\nBoilling point: 5869\n\nC[1]: 0.137\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==76)
{
     printf("Atomic symbol: Os\n\n Atomic name : Osmium\n \nGroup : 8\n\n Period : 6\n\n Atomic weight: 190.23\n\n Density : 22.61\n\nMelting point : 3306 \n\nBoilling point: 5285\n\nC[1]: 0.13\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.002\n");

}
else if (index+1==77)
{
     printf("Atomic symbol: Ir\n\n Atomic name : Iridium\n \nGroup : 9\n\n Period : 6\n\n Atomic weight: 192.217\n\n Density : 22.56\n\nMelting point : 2719\n\nBoilling point: 4701\n\nC[1]: 0.131\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.001\n");

}
else if (index+1==78)
{
     printf("Atomic symbol: Pt\n\n Atomic name : Platinum\n \nGroup : 10\n\n Period : 6\n\n Atomic weight: 195.084\n\n Density : 21.46\n\nMelting point : 2041.4\n\nBoilling point: 4098\n\nC[1]: 0.133\n\nElectronegativity: 2.28\n\nAbundance in Earth's crust: 0.005\n");

}
else if (index+1==79)
{
     printf("Atomic symbol: Au\n\n Atomic name : Gold\n\n Group : 11\n\n Period : 6\n\n Atomic weight: 196.966570\n\n Density : 19.282\n\nMelting point : 1337.33 \n\nBoilling point: 3129\n\nC[1]: 0.129\n\nElectronegativity: 2.54\n\nAbundance in Earth's crust: 0.004\n");

}
else if (index+1==80)
{
     printf("Atomic symbol: Hg\n\n Atomic name : Mercury\n \nGroup : 12\n\n Period : 6\n\n Atomic weight: 200.592\n\n Density : 13.5336\n\nMelting point : 234.43\n\nBoilling point: 629.88\n\nC[1]: 0.14\n\nElectronegativity: 2\n\nAbundance in Earth's crust: 0.085\n");

}
else if (index+1==81)
{
     printf("Atomic symbol: Tl\n\n Atomic name : Thallium\n\n Group : 13\n\n Period : 6\n\n Atomic weight: 204.38\n\n Density : 11.85\n\nMelting point : 577\n\nBoilling point: 1746\n\nC[1]: 0.129\n\nElectronegativity: 1.62\n\nAbundance in Earth's crust: 0.85\n");

}
else if (index+1==82)
{
     printf("Atomic symbol: Pb\n\n Atomic name : Lead\n\n Group : 14\n\n Period : 6\n\n Atomic weight: 207.2\n\n Density : 11.342\n\nMelting point : 600.61\n\nBoilling point: 2022\n\nC[1]: 0.129\n\nElectronegativity: 1.87\n\nAbundance in Earth's crust: 14\n");

}
else if (index+1==83)
{
     printf("Atomic symbol: Bi\n\n Atomic name : Bismuth\n \nGroup : 15\n\n Period : 6\n\n Atomic weight: 208.98040\n\n Density : 9.807\n\nMelting point : 544.7\n\nBoilling point: 1837\n\nC[1]: 0.122\n\nElectronegativity: 2.02\n\nAbundance in Earth's crust: 0.009\n");

}
else if (index+1==84)
{
     double crust=2*pow(10,-10);
     printf("Atomic symbol: Po\n\n Atomic name : Polonium\n\n Group : 16\n\n Period : 6\n\n Atomic weight: 209\n\n Density : 9.32\n\nMelting point : 527  \n\nBoilling point: 1235\n\nC[1]: –\n\nElectronegativity: 2.0\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==85)
{
    double crust=3*pow(10,-20);
     printf("Atomic symbol: At\n\n Atomic name : Astatine\n \nGroup : 17\n\n Period : 6\n\n Atomic weight: 210\n\n Density : 7\n\nMelting point : – \n\nBoilling point: 500\n\nC[1]: –\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==86)
{
    //double crust=4*pow(10,-13)
     printf("Atomic symbol: Rn\n\n Atomic name : Radon\n \nGroup : 18\n\n Period : 6\n\n Atomic weight: 222\n\n Density : 0.00973\n\nMelting point : 202\n\nBoilling point: 211.3\n\nC[1]: 0.094\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: \n");

}
else if (index+1==87)
{
    double crust=1*pow(10,-18);
     printf("Atomic symbol: Fr\n\n Atomic name : Francium\n \nGroup : 1\n\n Period : 7\n\n Atomic weight: 223\n\n Density : 1.87\n\nMelting point : 281.0 \n\nBoilling point: 890\nC[1]: –\n\nElectronegativity: 0.7\n\nAbundance in Earth's crust: ~%lf\n",crust);

}
else if (index+1==88)
{
    double crust=9*pow(10,-7);
     printf("Atomic symbol: Ra\n\n Atomic name : Radium\n\n Group : 2\n\n Period : 7\n\n Atomic weight: 226\n\n Density : 5.5\n\nMelting point : 973 \n\nBoilling point: 2010\n\nC[1]: 0.094\n\nElectronegativity: 0.9\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==89)
{
    double crust=5.5*pow(10,-10);
     printf("Atomic symbol: Ac\n\n Atomic name : Actinium\n \nGroup : 3\n\n Period : 7\n\n Atomic weight: 227\n\n Density : 10.07\n\nMelting point : 1323\n\nBoilling point: 3471\n\nC[1]: 0.12\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==90)
{
     printf("Atomic symbol: Th\n\n Atomic name : Thorium\n\n Group : \n\n Period : 7\n\n Atomic weight: 232.0377\n\n Density : 11.72\n\nMelting point : 2115 \n\nBoilling point: 5061\n\nC[1]: 0.113\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 9.6\n");

}
else if (index+1==91)
{
     double crust=1.4*pow(10,-6);
     printf("Atomic symbol: Pa\n\n Atomic name : Protactinium\n\n Group : \n\n Period : 7\n\n Atomic weight: 231.03588\n\n Density : 15.37\nMelting point : 1841  \nBoilling point: 4300\nC[1]: –\nElectronegativity: 1.5\nAbundance in Earth's crust: %lf\n",crust);

}
else if (index+1==92)
{
     printf("Atomic symbol: U\n\n Atomic name : Uranium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 238.02891\n\n Density : 18.95\n\nMelting point : 1405.3       \n\nBoilling point: 4404\nC[1]: 0.116\n\nElectronegativity: 1.38\n\nAbundance in Earth's crust: 2.7\n");

}
else if (index+1==93)
{
    double crust=3*pow(10,-12);
     printf("Atomic symbol: Np\n\n Atomic name : Neptunium\n\n Group : \n\n Period : 7\n\n Atomic weight: 237\n\n Density : 20.45\n\nMelting point : 917\n\nBoilling point: 4273\n\nC[1]: –\n\nElectronegativity: 1.36\n\nAbundance in Earth's crust: ≤%lf\n",crust);

}
else if (index+1==94)
{
    double crust=3*pow(10,-11);
     printf("Atomic symbol: Pu\n\n Atomic name : Plutonium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 244\n\n Density : 19.84\n\nMelting point : 912.5 \n\nBoilling point: 3501\n\nC[1]: –\n\nElectronegativity: 1.28\n\nAbundance in Earth's crust: ≤%lf\n",crust);

}
else if (index+1==95)
{
     printf("Atomic symbol: Am\n\n Atomic name : Americium\n\n Group : \n\n Period : 7\n\n Atomic weight: 243\n\n Density : 13.69\n\nMelting point : 1449\n\nBoilling point: 2880\n\nC[1]: –\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==96)
{
     printf("Atomic symbol: Cm\n\n Atomic name : Curium\n\n Group : \n\n Period : 7\n\n Atomic weight: 247\n\n Density : 13.51\n\nMelting point : 1613  \n \nBoilling point: 3383\n\nC[1]: –\n\nElectronegativity: 1.28\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==97)
{
     printf("Atomic symbol: Bk\n\n Atomic name : Berkelium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 247\n\n Density : 14.79\n\nMelting point : 1259\n\nBoilling point: 2900\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==98)
{
     printf("Atomic symbol: Cf\n\n Atomic name : Californium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 251\n\n Density : 15.1\n\nMelting point : 1173  \n\nBoilling point: 1743\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==99)
{
     printf("Atomic symbol: Es\n\n Atomic name : Einsteinium\n\n Group : \n\n Period : 7\n\n Atomic weight: 252\n\n Density : 8.84\n\nMelting point : 1133 \n\nBoilling point: 1269\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==100)
{
     printf("Atomic symbol: Fm\n\n Atomic name : Fermium\n\n Group : \n\n Period : 7\n\n Atomic weight: 257\n\n Density : 9.7\n\nMelting point : 1125 \n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==101)
{
     printf("Atomic symbol: Md\n\n Atomic name : Mendelevium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 258\n\n Density : 10.3\n\nMelting point : 1100\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==102)
{
     printf("Atomic symbol: No\n\n Atomic name : Nobelium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 259\n\n Density : 9.9\n\nMelting point : 1100\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");
}

else if (index+1==103)
{
     printf("Atomic symbol: Lr\n\n Atomic name : Lawrencium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 266\n\n Density : 15.6\n\nMelting point : 1900\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==104)
{
     printf("Atomic symbol: Rf\n\n Atomic name : Rutherfordium\n \nGroup : 4\n\n Period : 7\n\n Atomic weight: 267\n\n Density : 23.2\n\nMelting point : 2400\n\nBoilling point: 5800\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==105)
{
     printf("Atomic symbol: Db\n\n Atomic name : Dubnium\n\n Group : 5\n\n Period : 7\n\n Atomic weight: 268\n\n Density : 29.3\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==106)
{
     printf("Atomic symbol: Sg\n\n Atomic name : Seaborgium\n \nGroup : 6\n\n Period : 7\n\n Atomic weight: 269\n\n Density : 35.0\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==107)
{
     printf("Atomic symbol: Bh\n\n Atomic name : Bohrium\n\n Group : 7\n\n Period : 7\n\n Atomic weight: 270\n\n Density : 37.1\n\nMelting point : -    \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==108)
{
     printf("Atomic symbol: Hs\n\n Atomic name : Hassium\n \nGroup : 8\n\n Period : 7\n\n Atomic weight: 270\n\n Density : 40.7\n\nMelting point : -     \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==109)
{
     printf("Atomic symbol: Mt\n\n Atomic name : Meitnerium\n \nGroup : 9\n\n Period : 7\n\n Atomic weight: 278\n\n Density : 37.4\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==110)
{
     printf("Atomic symbol: Ds\n\n Atomic name : Darmstadtium\n\n Group : 10\n\n Period : 7\n\n Atomic weight: 281\n\n Density : 34.8\n\nMelting point : - \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");
}

else if (index+1==111)
{
     printf("Atomic symbol: Rg\n\n Atomic name : Roentgenium\n\n Group : 11\n\n Period : 7\n\n Atomic weight: 282\n\n Density : 28.7\n\nMelting point : -  \n \nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==112)
{
     printf("Atomic symbol: Cn\n\n Atomic name : Copernicium\n \nGroup : 12\n\n Period : 7\n\n Atomic weight: 285\n\n Density : 14.0\n\nMelting point : 283     \n\nBoilling point: 340\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==113)
{
     printf("Atomic symbol: Nh\n\n Atomic name : Nihonium\n\n Group : 13\n\n Period : 7\n\n Atomic weight: 286\n\n Density : 16\n\nMelting point : 700\n\nBoilling point: 1400\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==114)
{
     printf("Atomic symbol: Fl\n\n Atomic name : Flerovium\n\n Group : 14\n\n Period : 7\n\n Atomic weight: 289\n\n Density : 14\n\nMelting point : -\n\nBoilling point: ~210\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==115)
{
     printf("Atomic symbol: Mc\n\n Atomic name : Moscovium\n \nGroup : 15\n\n Period : 7\n\n Atomic weight: 290\n\n Density : 13.5\n\nMelting point : 700     \n\nBoilling point: 1400\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==116)
{
     printf("Atomic symbol: Lv\n\n Atomic name : Livermorium\n \nGroup : 16\n\n Period : 7\n\n Atomic weight: 293\n\n Density : 12.9\n\nMelting point : 700  \n\nBoilling point: 1100\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (index+1==117)
{
     printf("Atomic symbol: Ts\n\n Atomic name : Tennessine\n\n Group : 17\n\n Period : 7\n\n Atomic weight: 294\n\n Density : 7.2\n\nMelting point : 700  \n\nBoilling point: 883\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0");
}

else if (index+1==118)
{
     printf("Atomic symbol: Og\n\n Atomic name : Oganesson\n\n Group : 18\n\n Period : 7\n\n Atomic weight: 294\n\n Density : 5.0\n\nMelting point : 320 \n\nBoilling point: ~350\n\nC[1]: – \n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}



}
void sajal()
{
    system ("color 0f");
//printf("i am in");
  size_t length;
    char specificName[100];

 char *names[200]={" ","H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr","Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Ti","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fi","Mc","Lv","Ts","Og"};

    length = sizeof names / sizeof *(names + 0);
//printf("%d",  length);
    printf("Type a name to be searched:> ");
    char co;
    scanf("%c",&co);
    if( fgets (specificName, 100, stdin) == NULL){
        printf("Error!\n");
    }

    specificName[strcspn(specificName, "\n")] = 0;
    int ne;
    ne=searchh(names,specificName,length);
    if(ne){
        printf(" \n\nAtomic number : %d  \n\n",ne);
    }else{
        printf("There was no Record Found.\n");
    }
    if(ne==1)
 {
     printf("Atomic symbol: H\n\nAtomic name : Hydrogen\n \nGrup : 1\n\nPeriod :1\n\nAtomic weight:1.008\n\nDensity : 0.00008988\n\nMelting point :14.01\n\nBoilling point20.28\n\nC[1]: 14.304\n\nElectronegativity: 2.20\n\nAbundance in Earth's crust:1400");
 }
else if (ne==3)
{
     printf("Atomic symbol: Li\n\n Atomic name :Lithium\n Grup : 1\n\n Period :2\n\n Atomic weight:6.94\n\n Density : 0.053\n\nMelting point :453.69\n\nBoilling point: 1560\n\nC[1]: 3.582\n\nElectronegativity: 0.98\n\nAbundance in Earth's crust:20\n");
}
else if (ne==2)
{
     printf("Atomic symbol: He\n\n Atomic name :Helium\n\n Grup : 18\n\n Period :1\n\n Atomic weight:4.002602\n\n Density : 0.0001785\n\nMelting point :0\n\nBoilling point: 4.22\n\nC[1]: 5.193\n\nElectronegativity: --\n\nAbundance in Earth's crust:0.008\n");
}
else if (ne==4)
{
     printf("Atomic symbol: Be\n\n Atomic name :Beryllium\n\n Grup : 2\n\n Period :2\n Atomic weight:9.0121831\n\n Density : 1.83\n\nMelting point :1560\n\nBoilling point: 2742\n\nC[1]: 14.825\n\nElectronegativity: 1.57\n\nAbundance in Earth's crust:2.8\n");
}
else if (ne==5)
{
     printf("Atomic symbol: B\n\n Atomic name :Boron\n\n Grup :13\n\n Period :2\n\n Atomic weight:10.81\n\n Density : 2.34\n\nMelting point :2349\n\nBoilling point: 4200\n\nC[1]: 1.026\n\nElectronegativity:2.04\n\nAbundance in Earth's crust: 10\n");
}
else if (ne==6)
{
     printf("Atomic symbol: C\n\n Atomic name :Carbon\n \nGrup : 14\n\n Period :2\n\n Atomic weight:12.011\n\n Density : 2.267\n\nMelting point :3800\n\nBoilling point: 4300\n\nC[1]: 0.709\n\nElectronegativity: 2.55\n\nAbundance in Earth's crust:200\n");
}
else if (ne==7)
{
     printf("Atomic symbol: N\n\n Atomic name :Nitrogen\n\n Grup : 15\n\n Period :2\n\n Atomic weight:14.007\n\n Density : 0.0012506\n\nMelting point :63.15\n\nBoilling point: 77.36\n\nC[1]: 1.04\n\nElectronegativity: 3.04\n\nAbundance in Earth's crust:19\n");
}
else if (ne==8)
{
     printf("Atomic symbol: O\n\n Atomic name :Oxyzen\n\n Grup : 16\n\n Period :2\n\n Atomic weight:15.999\n\n Density : 0.001249\n\nMelting point :54.36\n\nBoilling point: 90.20\n\nC[1]: 0.918\n\nElectronegativity: 3.44\n\nAbundance in Earth's crust:461000\n");
}
else if (ne==9)
{
     printf("Atomic symbol: F\n\n Atomic name :Flourin\n\n Grup : 17\n\n Period :2\n\n Atomic weight: 18.9898403163\n\n Density : 0.001696\n\nMelting point :53.53\n\nBoilling point: 85.03\n\nC[1]: 0.824\n\nElectronegativity: 3.98\n\nAbundance in Earth's crust:585\n");
}
else if (ne==10)
{
     printf("Atomic symbol: Ne\n\n Atomic name :Neon\n\n Grup : 18\n\n Period :2\n\n Atomic weight:20.1797\n\n Density : 0.0008999\n\nMelting point :24.56\n\nBoilling point: 27.07\n\nC[1]: 1.03\n\nElectronegativity: -\n\nAbundance in Earth's crust:0.005\n");
}
else if (ne==11)
{
     printf("Atomic symbol: Na\n\n Atomic name :Sodium\n\n Grup : 1\n\n Period :3\n\n Atomic weight:22.98976928\n\n Density : 0.971\n\nMelting point :370.87\n\nBoilling point:1156\n\nC[1]:1.228\n\nElectronegativity: 0.93\n\nAbundance in Earth's crust:23600\n");
}
else if (ne==12)
{
     printf("Atomic symbol: Mg\n\n Atomic name :Magnesium\n\n Grup : 2\n\n Period :3\n\n Atomic weight:24.305\n\n Density : 1.738\n\nMelting point :923\n\nBoilling point: 1363\n\nC[1]: 1.023\n\nElectronegativity: 1.31\n\nAbundance in Earth's crust:23300\n");

}
else if (ne==13)
{
     printf("Atomic symbol: Al\n\n Atomic name :Aluminium\n\n Grup : 13\n\n Period :3\n\n Atomic weight:26.9815384\n\n Density : 2.698\n\nMelting point :933.47\n\nBoilling point: 2792\n\nC[1]: 0.897\n\nElectronegativity: 1.61\n\nAbundance in Earth's crust:82300\n");
}
else if (ne==14)
{
     printf("Atomic symbol: Si\n\n Atomic name :Silicon\n\n Grup : 14\n\n Period :3\n\n Atomic weight :28.085\n\n Density : 2.3296\n\nMelting point :1687\n\nBoilling point: 3538\n\nC[1]: 0.705\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust:282000\n");
}
else if (ne==15)
{
     printf("Atomic symbol: P\n\n Atomic name :Phosphorus\n\n Grup : 15\n\n Period :3\n\n Atomic weight:30.973761998\n\n Density : 1.82\n\nMelting point :317.30\n\nBoilling point: 550\n\nC[1]: 0.769\n\nElectronegativity: 2.19\n\nAbundance in Earth's crust:1050\n");
}
else if (ne==16)
{
     printf("Atomic symbol: S\n\n Atomic name :Sulfur\n\n Grup : 16\n\n Period :3\n\n Atomic weight:32.06\n\n Density : \n\nMelting point :54.36\n\nBoilling point: 90.20\n\nC[1]: 0.918\n\nElectronegativity: 3.44\n\nAbundance in Earth's crust:461000\n");
}
else if (ne==17)
{
     printf("Atomic symbol: Cl\n\n Atomic name :Chlorine\n Group : 17\n\n Period : 3\n\n Atomic weight: 35.45\n\n Density : 0.003214\n\nMelting point : 171.6\n\nBoilling point: 239.11\n\nC[1]: 0.479\n\nElectronegativity: 3.16\n\nAbundance in Earth's crust: 145");

}
else if (ne==18)
{
     printf("Atomic symbol: Ar\n\n Atomic name : Argon\n Group : 18\n\n Period : 3\n\n Atomic weight: 39.948\n\n Density : 0.0017837\nMelting point : 83.80\n\nBoilling point: 87.30\n\nC[1]: 0.52\n\nElectronegativity: --\n\nAbundance in Earth's crust: 3.5");

}
else if (ne==19)
{
     printf("Atomic symbol: K\n\n Atomic name : Potassium\n Group : 1\n\n Period : 4\n\n Atomic weight: 39.0983\n\n Density : 0.862\nMelting point : 336.53\n\nBoilling point: 1032\n\nC[1]: 0.757\n\nElectronegativity: 0.82\n\nAbundance in Earth's crust: 20900\n");

}
else if (ne==20)
{
     printf("Atomic symbol: Ca\n\n Atomic name : Calcium\n Group : 2\n\n Period : 4\n\n Atomic weight: 40.078\n\n Density : 1.54\nMelting point : 1115\n\nBoilling point: 1757\n\nC[1]: 0.647\n\nElectronegativity: 1\n\nAbundance in Earth's crust: 41500\n");

}
else if (ne==21)
{
     printf("Atomic symbol: Sc\n\n Atomic name : Scandium\n Group : 3\n\n Period : 4\n\n Atomic weight: 44.955908\n\n Density : 2.989\nMelting point : 1814 \n\nBoilling point: 3109\n\nC[1]: 0.568\n\nElectronegativity: 1.36\n\nAbundance in Earth's crust: 22\n");

}
else if (ne==22)
{
     printf("Atomic symbol: Ti\n\n Atomic name : Titanium\n Group : 4\n\n Period : 4\n\n Atomic weight: 47.867\n\n Density : 4.54\nMelting point : 1941\n\nBoilling point: 3560\n\nC[1]: 0.523\n\nElectronegativity: 1.54\n\nAbundance in Earth's crust: 5650\n");

}
else if (ne==23)
{
     printf("Atomic symbol: V\n\n Atomic name : Vanadium\n Group : 5\n\n Period : 4\n\n Atomic weight: 50.9415\n\n Density : 6.11\nMelting point : 2183\n\nBoilling point: 3680\n\nC[1]: 0.489\n\nElectronegativity: 1.63\n\nAbundance in Earth's crust: 120\n");

}
else if (ne==24)
{
     printf("Atomic symbol: Cr\n\n Atomic name : Chromium\n Group : 6\n\n Period : 4\n\n Atomic weight: 51.9961\n\n Density : 7.15\nMelting point : 2180 \n \nBoilling point: 2944\n\nC[1]: 0.449\n\nElectronegativity: 1.66\n\nAbundance in Earth's crust: 102\n");

}
else if (ne==25)
{
     printf("Atomic symbol: Mn\n\n Atomic name : Manganese\n Group : 7\n\n Period : 4\n\n Atomic weight: 54.938043\n\n Density : 7.44\nMelting point : 1519\n\nBoilling point: 2334\n\nC[1]: 0.479\n\nElectronegativity: 1.55\n\nAbundance in Earth's crust: 950\n");

}
else if (ne=26)
{
     printf("Atomic symbol: Fe\n\n Atomic name : Iron\n Group : 8\n\n Period : 4\n\n Atomic weight: 55.845\n\n Density : 7.874\nMelting point : 1811 \n\nBoilling point: 3134\n\nC[1]: 0.449\n\nElectronegativity: 1.83\n\nAbundance in Earth's crust: 56300\n");

}
else if (ne==27)
{
     printf("Atomic symbol: Co\n\n Atomic name : Cobalt\n Group : 9\n\n Period : 4\n\n Atomic weight: 58.933194\n\n Density : 8.86\nMelting point : 1768\n\nBoilling point: 3200\n\nC[1]: 0.421\n\nElectronegativity: 1.88\n\nAbundance in Earth's crust: 25\n");

}
else if (ne==28)
{
     printf("Atomic symbol: Ni\n\n Atomic name : Nickel\n Group : 10\n\n Period : 4\n\n Atomic weight: 58.6934\n\n Density : 8.912\nMelting point : 1728\n\nBoilling point: 3186\n\nC[1]: 0.444\n\nElectronegativity: 1.91\n\nAbundance in Earth's crust: 84\n");

}
else if (ne==29)
{
     printf("Atomic symbol: Cu\n\n Atomic name : Copper\n Group : 11\n\n Period : 4\n\n Atomic weight: 63.546\n\n Density : 8.96\nMelting point : 1357.77 \n\nBoilling point: 2835\n\nC[1]: 0.385\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: 60\n");

}
else if (ne=30)
{
     printf("Atomic symbol: Zn\n\n Atomic name : Zinc\n Group : 12\n\n Period : 4\n\n Atomic weight: 65.38\n\n Density : 7.134\nMelting point : 692.88\n\nBoilling point: 1180\n\nC[1]: 0.388\n\nElectronegativity: 1.65\n\nAbundance in Earth's crust: 70\n");

}
else if (ne==31)
{
     printf("Atomic symbol: Ga\n\n Atomic name : Gallium\n Group : 13\n\n Period : 4\n\n Atomic weight: 69.723\n\n Density : 5.907\nMelting point : 302.9146\n\nBoilling point: 2673\n\nC[1]: 0.371\n\nElectronegativity: 1.81\n\nAbundance in Earth's crust: 19\n");

}
else if (ne==32)
{
     printf("Atomic symbol: Ge\n\n Atomic name : Germanium\n Group : 14\n\n Period : 4\n\n Atomic weight: 72.630\n\n Density : 5.323\nMelting point : 1211.40 \n\nBoilling point: 3106\n\nC[1]: 0.32\n\nElectronegativity: 2.01\n\nAbundance in Earth's crust: 1.5\n");

}
else if (ne==33)
{
     printf("Atomic symbol: As\n\n Atomic name : Arsenic\n Group : 15\n\n Period : 4\n\n Atomic weight: 74.921595\n\n Density : 5.776\nMelting point : 1090 \n\nBoilling point: 887\n\nC[1]: 0.329\n\nElectronegativity: 2.18\n\nAbundance in Earth's crust: 1.8\n");

}
else if (ne==34)
{
     printf("Atomic symbol: Se\n\n Atomic name : Selenium\n Group : 16\n\n Period : 4\n\n Atomic weight: 78.971\n\n Density : 4.809\nMelting point : 453\n \nBoilling point: 958\n\nC[1]: 0.321\n\nElectronegativity: 2.55\n\nAbundance in Earth's crust: 0.05\n");

}
else if (ne==35)
{
     printf("Atomic symbol: Br\n\n Atomic name : Bromine\n Group : 17\n\n Period : 4\n\n Atomic weight: 79.904\n\n Density : 3.122\nMelting point : 265.8\n\nBoilling point: 332.0\n\nC[1]: 0.474\n\nElectronegativity: 2.96\n\nAbundance in Earth's crust: 2.4\n");

}
else if (ne==36)
{
     double crust=1*pow(10,-4);
     printf("Atomic symbol: Kr\n\n Atomic name : Krypton\n Group : 18\n\n Period : 4\n\n Atomic weight: 83.798\n\n Density : 0.003733\nMelting point : 115.79\n\nBoilling point: 119.93\n\nC[1]: 0.248\n\nElectronegativity: 3\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne=37)
{
     printf("Atomic symbol: Rb\n\n Atomic name : Rubidium\n\n Group : 1\n\n Period : 5\n\n Atomic weight: 85.4678\n\n Density : 1.532\n\nMelting point : 312.46\n\nBoilling point: 961\n\nC[1]: 0.363\n\nElectronegativity: 0.82\n\nAbundance in Earth's crust: 90\n");

}
else if (ne==38)
{
     printf("Atomic symbol: Sr\n\n Atomic name : Strontium\n\n Group : 2\n\n Period : 5\n\n Atomic weight: 87.62\n\n Density : 2.64\n\nMelting point : 1050\n\nBoilling point: 1655\n\nC[1]: 0.301\n\nElectronegativity: 0.95\n\nAbundance in Earth's crust: 370\n");

}
else if (ne==39)
{
     printf("Atomic symbol: Y\n\n Atomic name : Yttrium\n\n Group : 3\n\n Period : 5\n\n Atomic weight: 88.90584\n\n Density : 4.469\n\nMelting point : 1799\n\nBoilling point: 3609\n\nC[1]: 0.298\n\nElectronegativity: 1.22\n\nAbundance in Earth's crust: 33\n");

}
else if (ne==40)
{
     printf("Atomic symbol: Zr\n\n Atomic name : Zirconium\n\n Group : 4\n\n Period : 5\n\n Atomic weight: 91.224\n\n Density : 6.506\n\nMelting point : 2128\n\nBoilling point: 4682\n\nC[1]: 0.278\n\nElectronegativity: 1.33\n\nAbundance in Earth's crust: 165\n");

}
else if (ne=41)
{
     printf("Atomic symbol: Nb\n\n Atomic name : Niobium\n\n Group : 5\n\n Period : 5\n\n Atomic weight: 92.90637\n\n Density : 8.57\n\nMelting point : 2750\n\nBoilling point: 5017\n\nC[1]: 0.265\n\nElectronegativity: 1.6\n\nAbundance in Earth's crust: 20\n");

}
else if (ne==42)
{
     printf("Atomic symbol: Mo\n\n Atomic name : Molybdenum\n\n Group : 6\n\n Period : 5\n\n Atomic weight: 95.95\n\n Density : 10.22\n\nMelting point : 2896\n\nBoilling point: 4912\n\nC[1]: 0.251\n\nElectronegativity: 2.16\n\nAbundance in Earth's crust: 1.2\n");

}
else if (ne==43)
{
     double crust=3*pow(10,-9);
     printf("Atomic symbol: Tc\n\n Atomic name : Technetium\n\n Group : 7\n\n Period : 5\n\n Atomic weight: 98\n\n Density : 11.5\n\nMelting point : 2430\n\nBoilling point: 4538\n\nC[1]: --\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: ~ lf\n",crust);

}
else if (ne==44)
{
     printf("Atomic symbol: Ru\n\n Atomic name : Ruthenium\n \nGroup : 8\n\n Period : 5\n\n Atomic weight: 101.07\n\n Density : 12.37\n\nMelting point : 2607 \n\nBoilling point: 4423\n\nC[1]: 0.238\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.001\n");

}
else if (ne==45)
{
     printf("Atomic symbol: Rh\n\n Atomic name : Rhodium\n\n Group : 9\n\n Period : 5\n\n Atomic weight: 102.90549\n\n Density : 12.41\n\nMelting point : 2237 \n\nBoilling point: 3968\n\nC[1]: 0.243\n\nElectronegativity: 2.28\n\nAbundance in Earth's crust: 0.001\n");

}
else if (ne==46)
{
     printf("Atomic symbol: Pd\n\n Atomic name : Palladium\n\n Group : 10\n\n Period : 5\n\n Atomic weight: 106.42\n\n Density : 12.02\n\nMelting point : 1828.05\n\nBoilling point: 3236\n\nC[1]: 0.244\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.015\n");

}
else if (ne==47)
{
     printf("Atomic symbol: Ag\n\n Atomic name : Silver\n\nGroup : 11\n\n Period : 5\n\n Atomic weight: 107.8682\n\n Density : 10.501\n\nMelting point : 1234.93\n\nBoilling point: 2435\n\nC[1]: 0.235\n\nElectronegativity: 1.93\n\nAbundance in Earth's crust: 0.075\n");

}
else if (ne==48)
{
     printf("Atomic symbol: Cd\n\n Atomic name : Cadmium\n\n Group : 12\n\n Period : 5\n\n Atomic weight: 112.414\n\n Density : 8.69\n\nMelting point : 594.22 \n\nBoilling point: 1040\n\nC[1]: 0.232\n\nElectronegativity: 1.69\n\nAbundance in Earth's crust: 0.159\n");

}
else if (ne==49)
{
     printf("Atomic symbol: In\n\n Atomic name : Indium\n\n Group : 13\n\n Period : 5\n\n Atomic weight: 114.818\n\n Density : 7.31\n\nMelting point : 429.75\n\nBoilling point: 2345\n\nC[1]: 0.233\n\nElectronegativity: 1.78\n\nAbundance in Earth's crust: 0.25\n");

}
else if (ne==50)
{
     printf("Atomic symbol: Sn\n\n Atomic name : Tin\n \nGroup : 14\n\n Period : 5\n\n Atomic weight: 118.710\n\n Density : 7.287\n\nMelting point : 505.08\n\nBoilling point: 2875\n\nC[1]: 0.228	\n\nElectronegativity: 1.96\n\nAbundance in Earth's crust: 2.3\n");

}
else if (ne==51)
{
     printf("Atomic symbol: Sb\n\n Atomic name : Antimony\n\n Group : 15\n\n Period : 5\n\n Atomic weight: 121.760\n\n Density : 6.685\n\nMelting point : 903.78 \n\nBoilling point: 1860\n\nC[1]: 0.207\n\nElectronegativity: 2.05\n\nAbundance in Earth's crust: 0.2\n");

}
else if (ne==52)
{
     printf("Atomic symbol: Te\n\n Atomic name : Tellurium\n \nGroup : 16\n\n Period : 5\n\n Atomic weight: 127.60\n\n Density : 6.232\n\nMelting point : 722.66\n\nBoilling point: 1261\n\nC[1]: 0.202\n\nElectronegativity: 2.1\n\nAbundance in Earth's crust: 0.001\n");

}
else if (ne==53)
{
     printf("Atomic symbol: I\n\n Atomic name : Iodine\n \nGroup : 17\n\n Period : 5\n\n Atomic weight: 126.90447\n\n Density : 4.93\n\nMelting point : 386.85\n \nBoilling point: 457.4\n\nC[1]: 0.214	\n\nElectronegativity: 2.66\n\nAbundance in Earth's crust: 0.45\n");

}
else if (ne==54)
{
     double crust=3*pow(10,-5);
     printf("Atomic symbol: Xe\n\n Atomic name : Xenon\n\n Group : 18\n\n Period : 5\n\n Atomic weight: 131.293\n\n Density : 0.005887\n\nMelting point : 161.4  \n \nBoilling point: 165.03\n\nC[1]: 0.158\n\nElectronegativity: 2.6\n\nAbundance in Earth's crust: lf\n",crust);

}
else if (ne==55)
{
     printf("Atomic symbol: Cs\n\n Atomic name : Caesium\n Group : 1\n\n Period : 6\n\n Atomic weight: 132.90545196\n\n Density : 1.873\nMelting point : 301.59\n\nBoilling point: 944\n\nC[1]: 0.242\n\nElectronegativity: 0.79\n\nAbundance in Earth's crust: 3\n");

}
else if (ne==56)
{
     printf("Atomic symbol: Ba\n\n Atomic name : Barium\n\n Group : 2\n\n Period : 6\n\n Atomic weight: 137.327\n\n Density : 3.594\n\nMelting point : 1000\n\nBoilling point: 2170\n\nC[1]: 0.204\n\nElectronegativity: 0.89\n\nAbundance in Earth's crust: 425\n");

}
else if (ne==57)
{
     printf("Atomic symbol: La\n\n Atomic name : Lanthanum\n \nGroup : 3\n\n Period : 6\n\n Atomic weight: 138.90547\n\n Density : 6.145\n\nMelting point : 1193\n\nBoilling point: 3737\n\nC[1]: 0.195\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: 39\n");

}
else if (ne==58)
{
     printf("Atomic symbol: Ce\n\n Atomic name : Cerium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 140.116\n\n Density : 6.77\n\nMelting point : 1068\n\nBoilling point: 3716\n\nC[1]: 0.192\n\nElectronegativity: 1.12\n\nAbundance in Earth's crust: 66.5\n");

}
else if (ne==59)
{
     printf("Atomic symbol: Pr\n\n Atomic name : Praseodymium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 140.90766\n\n Density : 6.773\n\nMelting point : 1208\n\nBoilling point: 3793\n\nC[1]: 0.193\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: 9.2\n");

}
else if (ne==60)
{
     printf("Atomic symbol: Nd\n\n Atomic name : Neodymium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 144.242\n\n Density : 7.007\n\nMelting point : 1297\n\nBoilling point: 3347\n\nC[1]: 0.19\n\nElectronegativity: 1.14\n\nAbundance in Earth's crust: 41.5\n");

}
else if (ne==61)
{
     double crust=2*pow(10,-19);
     printf("Atomic symbol: Pm\n\n Atomic name : Promethium\n\n Group : \n\n Period : 6\n\n Atomic weight: 145\n\n Density : 7.26\n\nMelting point : 1315 \n\nBoilling point: 3273\n\nC[1]: -–\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==62)
{
     printf("Atomic symbol: Sm\n\n Atomic name : Samarium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 150.36\n\n Density : 7.52\n\nMelting point : 1345\n\nBoilling point: 2067\n\nC[1]: 0.197\n\nElectronegativity: 1.17\n\nAbundance in Earth's crust: 7.05\n");

}
else if (ne==63)
{
     printf("Atomic symbol: Eu\n\n Atomic name : Europium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 151.964\n\n Density : 5.243\n\nMelting point : 1099\n\nBoilling point: 1802\n\nC[1]: 0.182\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 2\n");

}
else if (ne==64)
{
     printf("Atomic symbol: Gd\n\n Atomic name : Gadolinium\n\n Group : \n\n Period : 6\n\n Atomic weight: 157.25\n\n Density : 7.895\n\nMelting point : 1585\n\nBoilling point: 3546\n\nC[1]: 0.236\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 6.2\n");

}
else if (ne==65)
{
     printf("Atomic symbol: Tb\n\n Atomic name : Terbium\n\n Group : \n\n Period : 6\n\n Atomic weight: 158.925354\n\n Density : 8.229\n\nMelting point : 1629\n\nBoilling point: 3503\n\nC[1]: 0.182\n\nElectronegativity: 1.2\n\nAbundance in Earth's crust: 1.2\n");

}
else if (ne==66)
{
     printf("Atomic symbol: Dy\n\n Atomic name : Dysprosium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 162.500\n\n Density : 8.55\n\nMelting point : 1680\n\nBoilling point: 2840\n\nC[1]: 0.17\n\nElectronegativity: 1.22\n\nAbundance in Earth's crust: 5.2\n");

}
else if (ne==67)
{
     printf("Atomic symbol: Ho\n\n Atomic name : Holmium\n\n Group : \n\n Period : 6\n\n Atomic weight: 164.930328\n\n Density : 8.795\n\nMelting point : 1734\n\nBoilling point: 2993\n\nC[1]: 0.165\n\nElectronegativity: 1.23\n\nAbundance in Earth's crust: 1.3\n");

}
else if (ne==68)
{
     printf("Atomic symbol: Er\n\n Atomic name : Erbium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 167.259\n\n Density : 9.066\n\nMelting point : 1802\n \nBoilling point: 3141\n\nC[1]: 0.168\n\nElectronegativity: 1.24\n\nAbundance in Earth's crust: 3.5\n");

}
else if (ne==69)
{
     printf("Atomic symbol: Tm\n\n Atomic name : Thulium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 168.934218\n\n Density : 9.321\n\nMelting point : 1818\n\nBoilling point: 2223\n\nC[1]: 0.16\n\nElectronegativity: 1.25\n\nAbundance in Earth's crust: 0.52\n");

}
else if (ne==70)
{
     printf("Atomic symbol: Yb\n\n Atomic name : Ytterbium\n\n Group : \n\n Period : 6\n\n Atomic weight: 173.045\n\n Density : 6.965\n\nMelting point : 1097\n\nBoilling point: 1469\n\nC[1]: 0.155\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: 3.2\n");

}
else if (ne==71)
{
     printf("Atomic symbol: Lu\n\n Atomic name : Lutetium\n \nGroup : \n\n Period : 6\n\n Atomic weight: 174.9668\n\n Density : 9.84\n\nMelting point : 1925\n\nBoilling point: 3675\n\nC[1]: 0.154\n\nElectronegativity: 1.27\n\nAbundance in Earth's crust: 0.8\n");

}
else if (ne==72)
{
     printf("Atomic symbol: Hf\n\n Atomic name : Hafnium\n \nGroup : 4\n\n Period : 6\n\n Atomic weight: 178.49\n\n Density : 13.31\n\nMelting point : 2506  \n\nBoilling point: 4876\n\nC[1]: 0.144\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 3\n");

}
else if (ne==73)
{
     printf("Atomic symbol: Ta\n\n Atomic name : Tantalum\n\n Group : 5\n\n Period : 6\n\n Atomic weight: 180.94788\n\n Density : 16.654\n\nMelting point : 3290\n\nBoilling point: 5731\n\nC[1]: 0.14\n\nElectronegativity: 1.5\n\nAbundance in Earth's crust: 2\n");

}
else if (ne==74)
{
     printf("Atomic symbol: W\n\n Atomic name : Tungsten\n\n Group : 6\n\n Period : 6\n\n Atomic weight: 183.84\n\n Density : 19.25\n\nMelting point : 3695\n\nBoilling point: 5828\n\nC[1]: 0.132\n\nElectronegativity: 2.36\n\nAbundance in Earth's crust: 1.3\n");

}
else if (ne==75)
{
     double crust=7*pow(10,-4);
     printf("Atomic symbol: Re\n\n Atomic name : Rhenium\n\n Group : 7\n\n Period : 6\n\n Atomic weight: 186.207\n\n Density : 21.02\n\nMelting point : 3459 \n\nBoilling point: 5869\n\nC[1]: 0.137\n\nElectronegativity: 1.9\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==76)
{
     printf("Atomic symbol: Os\n\n Atomic name : Osmium\n \nGroup : 8\n\n Period : 6\n\n Atomic weight: 190.23\n\n Density : 22.61\n\nMelting point : 3306 \n\nBoilling point: 5285\n\nC[1]: 0.13\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.002\n");

}
else if (ne==77)
{
     printf("Atomic symbol: Ir\n\n Atomic name : Iridium\n \nGroup : 9\n\n Period : 6\n\n Atomic weight: 192.217\n\n Density : 22.56\n\nMelting point : 2719\n\nBoilling point: 4701\n\nC[1]: 0.131\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: 0.001\n");

}
else if (ne==78)
{
     printf("Atomic symbol: Pt\n\n Atomic name : Platinum\n \nGroup : 10\n\n Period : 6\n\n Atomic weight: 195.084\n\n Density : 21.46\n\nMelting point : 2041.4\n\nBoilling point: 4098\n\nC[1]: 0.133\n\nElectronegativity: 2.28\n\nAbundance in Earth's crust: 0.005\n");

}
else if (ne==79)
{
     printf("Atomic symbol: Au\n\n Atomic name : Gold\n\n Group : 11\n\n Period : 6\n\n Atomic weight: 196.966570\n\n Density : 19.282\n\nMelting point : 1337.33 \n\nBoilling point: 3129\n\nC[1]: 0.129\n\nElectronegativity: 2.54\n\nAbundance in Earth's crust: 0.004\n");

}
else if (ne==80)
{
     printf("Atomic symbol: Hg\n\n Atomic name : Mercury\n \nGroup : 12\n\n Period : 6\n\n Atomic weight: 200.592\n\n Density : 13.5336\n\nMelting point : 234.43\n\nBoilling point: 629.88\n\nC[1]: 0.14\n\nElectronegativity: 2\n\nAbundance in Earth's crust: 0.085\n");

}
else if (ne==81)
{
     printf("Atomic symbol: Tl\n\n Atomic name : Thallium\n\n Group : 13\n\n Period : 6\n\n Atomic weight: 204.38\n\n Density : 11.85\n\nMelting point : 577\n\nBoilling point: 1746\n\nC[1]: 0.129\n\nElectronegativity: 1.62\n\nAbundance in Earth's crust: 0.85\n");

}
else if (ne==82)
{
     printf("Atomic symbol: Pb\n\n Atomic name : Lead\n\n Group : 14\n\n Period : 6\n\n Atomic weight: 207.2\n\n Density : 11.342\n\nMelting point : 600.61\n\nBoilling point: 2022\n\nC[1]: 0.129\n\nElectronegativity: 1.87\n\nAbundance in Earth's crust: 14\n");

}
else if (ne==83)
{
     printf("Atomic symbol: Bi\n\n Atomic name : Bismuth\n \nGroup : 15\n\n Period : 6\n\n Atomic weight: 208.98040\n\n Density : 9.807\n\nMelting point : 544.7\n\nBoilling point: 1837\n\nC[1]: 0.122\n\nElectronegativity: 2.02\n\nAbundance in Earth's crust: 0.009\n");

}
else if (ne==84)
{
     double crust=2*pow(10,-10);
     printf("Atomic symbol: Po\n\n Atomic name : Polonium\n\n Group : 16\n\n Period : 6\n\n Atomic weight: 209\n\n Density : 9.32\n\nMelting point : 527  \n\nBoilling point: 1235\n\nC[1]: –\n\nElectronegativity: 2.0\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==85)
{
    double crust=3*pow(10,-20);
     printf("Atomic symbol: At\n\n Atomic name : Astatine\n \nGroup : 17\n\n Period : 6\n\n Atomic weight: 210\n\n Density : 7\n\nMelting point : – \n\nBoilling point: 500\n\nC[1]: –\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==86)
{
    //double crust=4*pow(10,-13)
     printf("Atomic symbol: Rn\n\n Atomic name : Radon\n \nGroup : 18\n\n Period : 6\n\n Atomic weight: 222\n\n Density : 0.00973\n\nMelting point : 202\n\nBoilling point: 211.3\n\nC[1]: 0.094\n\nElectronegativity: 2.2\n\nAbundance in Earth's crust: \n");

}
else if (ne==87)
{
    double crust=1*pow(10,-18);
     printf("Atomic symbol: Fr\n\n Atomic name : Francium\n \nGroup : 1\n\n Period : 7\n\n Atomic weight: 223\n\n Density : 1.87\n\nMelting point : 281.0 \n\nBoilling point: 890\nC[1]: –\n\nElectronegativity: 0.7\n\nAbundance in Earth's crust: ~%lf\n",crust);

}
else if (ne==88)
{
    double crust=9*pow(10,-7);
     printf("Atomic symbol: Ra\n\n Atomic name : Radium\n\n Group : 2\n\n Period : 7\n\n Atomic weight: 226\n\n Density : 5.5\n\nMelting point : 973 \n\nBoilling point: 2010\n\nC[1]: 0.094\n\nElectronegativity: 0.9\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==89)
{
    double crust=5.5*pow(10,-10);
     printf("Atomic symbol: Ac\n\n Atomic name : Actinium\n \nGroup : 3\n\n Period : 7\n\n Atomic weight: 227\n\n Density : 10.07\n\nMelting point : 1323\n\nBoilling point: 3471\n\nC[1]: 0.12\n\nElectronegativity: 1.1\n\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==90)
{
     printf("Atomic symbol: Th\n\n Atomic name : Thorium\n\n Group : \n\n Period : 7\n\n Atomic weight: 232.0377\n\n Density : 11.72\n\nMelting point : 2115 \n\nBoilling point: 5061\n\nC[1]: 0.113\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 9.6\n");

}
else if (ne==91)
{
     double crust=1.4*pow(10,-6);
     printf("Atomic symbol: Pa\n\n Atomic name : Protactinium\n\n Group : \n\n Period : 7\n\n Atomic weight: 231.03588\n\n Density : 15.37\nMelting point : 1841  \nBoilling point: 4300\nC[1]: –\nElectronegativity: 1.5\nAbundance in Earth's crust: %lf\n",crust);

}
else if (ne==92)
{
     printf("Atomic symbol: U\n\n Atomic name : Uranium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 238.02891\n\n Density : 18.95\n\nMelting point : 1405.3       \n\nBoilling point: 4404\nC[1]: 0.116\n\nElectronegativity: 1.38\n\nAbundance in Earth's crust: 2.7\n");

}
else if (ne==93)
{
    double crust=3*pow(10,-12);
     printf("Atomic symbol: Np\n\n Atomic name : Neptunium\n\n Group : \n\n Period : 7\n\n Atomic weight: 237\n\n Density : 20.45\n\nMelting point : 917\n\nBoilling point: 4273\n\nC[1]: –\n\nElectronegativity: 1.36\n\nAbundance in Earth's crust: ≤%lf\n",crust);

}
else if (ne==94)
{
    double crust=3*pow(10,-11);
     printf("Atomic symbol: Pu\n\n Atomic name : Plutonium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 244\n\n Density : 19.84\n\nMelting point : 912.5 \n\nBoilling point: 3501\n\nC[1]: –\n\nElectronegativity: 1.28\n\nAbundance in Earth's crust: ≤%lf\n",crust);

}
else if (ne==95)
{
     printf("Atomic symbol: Am\n\n Atomic name : Americium\n\n Group : \n\n Period : 7\n\n Atomic weight: 243\n\n Density : 13.69\n\nMelting point : 1449\n\nBoilling point: 2880\n\nC[1]: –\n\nElectronegativity: 1.13\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==96)
{
     printf("Atomic symbol: Cm\n\n Atomic name : Curium\n\n Group : \n\n Period : 7\n\n Atomic weight: 247\n\n Density : 13.51\n\nMelting point : 1613  \n \nBoilling point: 3383\n\nC[1]: –\n\nElectronegativity: 1.28\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==97)
{
     printf("Atomic symbol: Bk\n\n Atomic name : Berkelium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 247\n\n Density : 14.79\n\nMelting point : 1259\n\nBoilling point: 2900\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==98)
{
     printf("Atomic symbol: Cf\n\n Atomic name : Californium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 251\n\n Density : 15.1\n\nMelting point : 1173  \n\nBoilling point: 1743\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==99)
{
     printf("Atomic symbol: Es\n\n Atomic name : Einsteinium\n\n Group : \n\n Period : 7\n\n Atomic weight: 252\n\n Density : 8.84\n\nMelting point : 1133 \n\nBoilling point: 1269\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==100)
{
     printf("Atomic symbol: Fm\n\n Atomic name : Fermium\n\n Group : \n\n Period : 7\n\n Atomic weight: 257\n\n Density : 9.7\n\nMelting point : 1125 \n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==101)
{
     printf("Atomic symbol: Md\n\n Atomic name : Mendelevium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 258\n\n Density : 10.3\n\nMelting point : 1100\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==102)
{
     printf("Atomic symbol: No\n\n Atomic name : Nobelium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 259\n\n Density : 9.9\n\nMelting point : 1100\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");
}

else if (ne==103)
{
     printf("Atomic symbol: Lr\n\n Atomic name : Lawrencium\n \nGroup : \n\n Period : 7\n\n Atomic weight: 266\n\n Density : 15.6\n\nMelting point : 1900\n\nBoilling point: –\n\nC[1]: –\n\nElectronegativity: 1.3\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==104)
{
     printf("Atomic symbol: Rf\n\n Atomic name : Rutherfordium\n \nGroup : 4\n\n Period : 7\n\n Atomic weight: 267\n\n Density : 23.2\n\nMelting point : 2400\n\nBoilling point: 5800\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==105)
{
     printf("Atomic symbol: Db\n\n Atomic name : Dubnium\n\n Group : 5\n\n Period : 7\n\n Atomic weight: 268\n\n Density : 29.3\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==106)
{
     printf("Atomic symbol: Sg\n\n Atomic name : Seaborgium\n \nGroup : 6\n\n Period : 7\n\n Atomic weight: 269\n\n Density : 35.0\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==107)
{
     printf("Atomic symbol: Bh\n\n Atomic name : Bohrium\n\n Group : 7\n\n Period : 7\n\n Atomic weight: 270\n\n Density : 37.1\n\nMelting point : -    \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==108)
{
     printf("Atomic symbol: Hs\n\n Atomic name : Hassium\n \nGroup : 8\n\n Period : 7\n\n Atomic weight: 270\n\n Density : 40.7\n\nMelting point : -     \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==109)
{
     printf("Atomic symbol: Mt\n\n Atomic name : Meitnerium\n \nGroup : 9\n\n Period : 7\n\n Atomic weight: 278\n\n Density : 37.4\n\nMelting point : -\n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==110)
{
     printf("Atomic symbol: Ds\n\n Atomic name : Darmstadtium\n\n Group : 10\n\n Period : 7\n\n Atomic weight: 281\n\n Density : 34.8\n\nMelting point : - \n\nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");
}

else if (ne==111)
{
     printf("Atomic symbol: Rg\n\n Atomic name : Roentgenium\n\n Group : 11\n\n Period : 7\n\n Atomic weight: 282\n\n Density : 28.7\n\nMelting point : -  \n \nBoilling point: -\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==112)
{
     printf("Atomic symbol: Cn\n\n Atomic name : Copernicium\n \nGroup : 12\n\n Period : 7\n\n Atomic weight: 285\n\n Density : 14.0\n\nMelting point : 283     \n\nBoilling point: 340\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==113)
{
     printf("Atomic symbol: Nh\n\n Atomic name : Nihonium\n\n Group : 13\n\n Period : 7\n\n Atomic weight: 286\n\n Density : 16\n\nMelting point : 700\n\nBoilling point: 1400\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==114)
{
     printf("Atomic symbol: Fl\n\n Atomic name : Flerovium\n\n Group : 14\n\n Period : 7\n\n Atomic weight: 289\n\n Density : 14\n\nMelting point : -\n\nBoilling point: ~210\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==115)
{
     printf("Atomic symbol: Mc\n\n Atomic name : Moscovium\n \nGroup : 15\n\n Period : 7\n\n Atomic weight: 290\n\n Density : 13.5\n\nMelting point : 700     \n\nBoilling point: 1400\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==116)
{
     printf("Atomic symbol: Lv\n\n Atomic name : Livermorium\n \nGroup : 16\n\n Period : 7\n\n Atomic weight: 293\n\n Density : 12.9\n\nMelting point : 700  \n\nBoilling point: 1100\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}
else if (ne==117)
{
     printf("Atomic symbol: Ts\n\n Atomic name : Tennessine\n\n Group : 17\n\n Period : 7\n\n Atomic weight: 294\n\n Density : 7.2\n\nMelting point : 700  \n\nBoilling point: 883\n\nC[1]: –\n\nElectronegativity: -\n\nAbundance in Earth's crust: 0");
}

else if (ne==118)
{
     printf("Atomic symbol: Og\n\n Atomic name : Oganesson\n\n Group : 18\n\n Period : 7\n\n Atomic weight: 294\n\n Density : 5.0\n\nMelting point : 320 \n\nBoilling point: ~350\n\nC[1]: – \n\nElectronegativity: -\n\nAbundance in Earth's crust: 0\n");

}

}
int searchh(char **names,char *specificName, size_t length){

    int i,found=0;
    for(i=0;i<length;i++){
        if (strcmp(*(names + i),specificName)==0){

            return i;
        }
    }

    return found ;
}
