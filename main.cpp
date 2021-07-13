/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* METODO DE ORDENAMIENTO SELECCION
*/
#include<iostream>
using namespace std;
int main()
{


    int t;
    cout<<"ORDENAMIENTO METODO DE SELECCION"<<endl;
    cout<<endl;
    cout<<"TAMANIO:";
    cin>>t;
    cout<<endl;
    int n[t];
    for(int i=0;i<t;i++)
    {

        cout<<"POSICION:"<<"["<<i<<"]"<<":";
        cin>>n[i];
    }
    cout<<"\n i" << "\tmin" << "\tj" << "\tlista[j]"<< "\tlista[min]"<< "\taux"<< "\tlista[i]" << "\tlista[min]"<< "\tLista" <<endl;

    for(int i=0;i<t;i++)
    {
        cout << " "<< i;
        int min = i;
        cout << "\t"<< min;
        for(int j=i+1;j<t;j++)
        {
            cout << "\t"<< j;
            cout << "\t"<< n[j];
            cout << "\t\t"<<n[min];
            if(n[j] < n[min])

            {
                min = j;
            }
            cout << "\t\t\t\t\t\t\t";
            for(int k=0;k<t;k++)
            {

                cout<< n[k]<< " ";
            }
            cout << endl << "\t";
        }
        if (i !=min)
        {

            int aux = n[i];
            n[i] = n[min];
            n[min] = aux;
            cout<< "\t\t\t\t\t\t"<< aux;
            cout<< "\t" << n[i];
            cout<< "\t\t"<<n[min];
            cout<< "\t\t";
            for(int k=0;k<t;k++)
            {
                cout<< n[k]<< " ";
            }
        }
        cout<< endl;
    }
    cout<<endl;
   cout<<"Resultado :"<<endl;

       cout<<"[";
       for(int i=0;i<t;i++)
       {
           cout<<" "<<n[i];
       }
       cout<<" ]";
       cout<<endl;
}


