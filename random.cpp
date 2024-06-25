#include <iostream> //Inclui a biblioteca padrão de entrada e saída em C++, necessária para usar cin e cout
#include <cstdlib> //Inclui a biblioteca padrão C, que permite o uso da função rand() para geração de numeros aleatórios

using namespace std; //Permite o uso direto das funções e objetos do namespace std, como cout e cin, sem precisar prefixar com std::.

int main(){ // Função principal onde a execução do programa começa.
    
    //Gera um numero aleatorio entre 1 e 100
    // rand() % 100 gera um numero entre 0 e 99. Adicionando 1, temos o intervalo de 1 a 100.
    int numeroSecreto = rand() % 100 + 1;
    
    //Define o numero de tentativas
    int tentativas = 8;
    int palpite; //Declara uma variável para armazenar o palpite do usuario.
    
    // Loop para adivinhar o numero
    do { //Inicio de um loop do-while que continuará executando enquanto a condição do while for verdadeira.
        
       // Exibe o número da tentativa atual e solicita ao usuário que insira um número.
       cout << "Tentativa " << tentativas << "\nDigite um número: ";
       cin >> palpite; //Lê o palpite do usuário e armazena na variável palpite
       
       //Verifica se o palpite do usuário é menor que o numero secreto.
       if (palpite < numeroSecreto)
       {
           cout << "Muito baixo!" << endl; // Informa ao usuario que o palpite é muito baixo
       }
       // Verifica se o palpite do usuario é maior que o numero secreto
       else if (palpite > numeroSecreto)
       {
            
            cout << "Muito alto!" << endl; //Informaao usuarioque o palpite é muito alto.
       }
    tentativas--; // Decrementa o numero de tentativas restantes. 
} while (palpite != numeroSecreto && tentativas > 0); // Continua o loop enquanto o palpite não for o numero secreto e houver tentativas restantes
 //Apos sair do loop, verifica se o usuario adivinhou o numero secreto
 if (palpite== numeroSecreto)
 {
      //Informa ao usuario que ele eceitou o numeor secreto e msotra quantas tentativas foram usadas
      // Note que a variável tentativas aqui reflite as tentativasrestantes para mostrar quantas tentativas foram usadas, usamos 8 - tentativas
      cout << "Parabéns! você acertou o número com " << 8-tentativas << " tentativas(s)!" << endl;
      }
      else
      {
          // Informa ao usuario que ele não conseguiu adivinhar o numero e revela qual era o numero secreto.
          cout<< "Você não conseguiu adivinhar o numero. O numero secreto era: " << numeroSecreto << "!" << endl;
          } 
          return 0; // Retorna o indicando que o programa terminou com sucesso.
          }