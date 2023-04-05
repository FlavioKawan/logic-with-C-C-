#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
    char work[30], letter[1], secret[30];
    int size,i,chances,hits;
    bool hit = false;

    hits =6;
    size=0;
    i=0;
    chances=0;

    cout << "digite a palavra" << endl;
    cin >> work;
    system("cls");
    

    while(work[i] != '\0'){
        i++;
        size++;

    }

    for(i=0;i<30;i++){
        secret[i] ='-';
    }

    while((chances > 0) && (hits < size))   {
        cout << "Chances Restantes " << chances << "\n\n";
        cout << "Palavra";
        for(i=0;i<size;i++){
            cout << secret[i];
        }

        cout << "\n\n Digite uma letra ";
        cin >> letter[0];
        for(i=0;i<size; i++){
            if(work[i] == letter[0]){
                hit=true;
                secret[i]=work[i];
                hits++;    
            }
        }
        if(hit){
            chances--;
        }
        hit=false;
        system("cls");

        if(hits==size){
            cout << "Você venceu";
        }else{
            cout << "Voce perdeu";
        }


}
    return 0 ;

}