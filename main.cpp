#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {


    FILE *fichier;
    char t [107];


    fichier = fopen ("C:/Users/eddy7/Desktop/Calls.bin" , "r"  "b"  );



    for (int i =0 ; i<106;i++)

    {   fseek(fichier,i,SEEK_SET);
        t[i]=getc(fichier);

    }

    cout << t[5];






    fclose( fichier);





}