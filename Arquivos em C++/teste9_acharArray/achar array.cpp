#include <iostream>
#include <string>
int main(){
    std::string letras[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m"};
    int sizearr = sizeof(letras) / sizeof(letras[0]);
    std::string ans;
    std::cout << "\n\nInforme alguma letra de \"a\" ate \"m\"\nA: ";
    std::cin >> ans;
    int contador = 1;
    for(int i = 0;i<sizearr;i++){
        if(ans == letras[i]){
            std::cout << "\nA letra existe!";
            break;
        }else{
            contador++;
            if(ans != letras[i]){
                if(contador > sizearr){
                    std::cout << "\nA letra NAO existe!";
                }
                else{
                    continue;
                }
            }
        }
    }
    return 0;
}
