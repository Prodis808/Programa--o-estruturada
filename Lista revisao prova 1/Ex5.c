/*Escreva um programa que verifique a validade de uma senha, sendo a senha válida “teste”.
Se o usuário não acertar a senha o programa deve emitir a mensagem “Acesso negado”, caso
contrário “Acesso permitido”. Informar também o número de tentativas do usuário.*/

#include <stdio.h>

int verificador(char senhacorreta[], char senhausuario[], int tamanho){
    int i;

    for(i=0;i<tamanho;i++) {
        if(senhausuario[i] == senhacorreta[i]) {

        } else {
            printf("Senha incorreta.");
            break;
        }
    } 
    return 0;
}
    

int main() {
    char senha[] = "senha", sennha_usuario[6];

    printf("Digite a senha: ");
    fgets(senha,sizeof(senha), stdin);
    
    verificador(senha, sennha_usuario, 5);

    return 0;
}