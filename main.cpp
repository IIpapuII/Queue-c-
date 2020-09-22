#include <iostream>
#include <string>
#define v 5
using namespace std;

int values[v];
int front = -1;
int rear =-1;
void Impre(int D)
{
    if (values[D] == 0)
    {
        cout <<"N";
    }else
    {
        cout<<values[D];
    }
}
void FormaImpre()
{
    cout<<"***************************************"<<endl;
    cout<<"*      *       *       *       *      *"<<endl;
   cout<<"*   "; Impre(0); cout<<"  *    "; Impre(1); cout<<"  *   "; Impre(2);
   cout<<"   *    "; Impre(3);cout<<"  *  "; Impre(4); cout<<"   *     " << endl;
    cout<<"*      *       *       *       *      *"<<endl;
     cout<<"***************************************"<<endl;
}
float RandomGenerator()
{
    int ca;
    for(int x=1; x <= 1; x++)
    {
        return 1 + (rand()%9);
    }

}
void enQueue(int value)
{
    if(rear == v-1)
    {
        cout<< " Nuestro Queue esta lleno"<<endl;
    }else
    {
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        values[rear]=value;
        cout<<"se inserto el valor "<< value<<" correctamente"<<endl;
        FormaImpre();
            }
}
void deQueue()
{
    if(front ==-1)
    {
        cout<< "el Queue esta vacio"<< endl;
    }else
    {
        cout<<"Se elimino el valor "<<values[front]<<endl;
         values[front]=NULL;
        front++;
        if(front > rear)
        {
            front = rear = -1;
        }
    }
}
int main()
{
    char car=' ';
    cout<<"ingrese de su teclado con la letra w ingresa valor y  con e retira valor. Con q se termina elel programa"<<endl;
    bool var = true;
    while (var == true)
    {
        cout<<"Tecla Ingresada: ";
        cin>> car;
        if(car == 'q')
        {
            var = false;
        }else if (car == 'w')
        {
            enQueue(RandomGenerator());
        }else if (car == 'e')
        {
            deQueue();
            FormaImpre();
        }
    }
    return 0;
}
