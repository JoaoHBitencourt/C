#include <stdio.h>

int main(){

char nome[50];
double valorHora, pagamento;
int horasTrabalhadas;

printf("Nome: ");
fseek(stdin, 0, SEEK_END);//não necessario nesse modelo somente se ja tiver feito uma leitura de dados onde vc aperta o ENTER antes.
gets(nome);

printf("Valor por hora: ");
scanf("%lf", &valorHora);

printf("Horas trabalhadas: ");
scanf("%d", &horasTrabalhadas);

pagamento = valorHora * horasTrabalhadas;

printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;
}