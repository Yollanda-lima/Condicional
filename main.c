//QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

  int num;
  srand(time(NULL));
  int a= rand() %11 + 1;
  int b;
  puts("Adivinhe um número:");
  scanf("%i",&b);

  if(a == b){
    printf("Parabéns, você acertou!");
  }else if(b < a){
    printf("Você errou, chute baixo!\n");
  }else{
    printf("Você errou, chute alto!");
  }
  getchar();
  printf("O número era:%i\n",a);
  puts("Fim do Jogo");
  
return 0;
}

//QUESTÃO 2

#include <stdio.h>
int main() {
  int num1;
  int num2;
  int soma;
  puts("Digite o primeiro valor");
  scanf("%i",&num1);
  puts("Digite o segundo valor");
  scanf("%i",&num2);
  soma=num1+num2;

  if((soma>5)&&(soma<=10)){
    printf("Resultado %i",soma+5);
  }else if(soma-3){
    printf("Resultado %i",soma-3);
  }
  return 0;
}

//QUESTÃO 3

#include <stdio.h>
int main() {
  float altura,massa,IMC;
  puts("Digite sua massa:");
  scanf("%f",&massa);
  puts("Digite sua altura:");
  scanf("%f",&altura);
  IMC = massa / (altura * altura);
  printf("Seu IMC é %.2f\n",IMC);

  if(IMC<10){
    puts("Desnutrição Grau V");}
  if((IMC>=10)&&(IMC<13)){
    puts("Desnutrição Grau IV");} 
  if((IMC>=13)&&(IMC<16)){
    puts("Desnutrção Grau III");}
  if((IMC>=16)&&(IMC<17)){
    puts("Desnutrição Grau II");}
  if((IMC>=17)&&(IMC<18.5)){
    puts("Desnutrição Grau I");}
  if((IMC>=18.5)&&(IMC<25)){
    puts("Normal");}
  if((IMC>=25)&&(IMC<30)){
    puts("Oré-Obesidade");}
  if((IMC>=30)&&(IMC<35)){
    puts("Obesidade Grau I");}
  if((IMC>=35)&&(IMC<40)){
    puts("Obesidade Grau II(Severa)");}
  if(IMC>=40){
    puts("Obesidade Grau III(Mórbida)");}

    return 0;
    }

// QUESTÃO 4

#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c, x1,x2,delta,xv,yv;
puts("Digite o valor a:");
scanf("%f",&a);
puts("Digite o valor b:");
scanf("%f",&b);
puts("Digite o valor c:");
scanf("%f",&c);

if(a>0){
  puts("Parábola voltada para cima");
}else if(a<0){
  puts("Prábola voltada para baixo");
}else if(a==0){
  puts("Equação de 1° Grau");
}

delta=pow(b, 2)-(4*a*c);
x1=(-b + sqrt(delta))/2*a;
x2=(-b - sqrt(delta))/2*a;

if (delta>0){
  puts("Duas raizes");
  printf("Raízes: %.2f %.2f\n",x1,x2);
}else if (delta==0){
  puts("Uma única raiz");
  printf("Raizes: %.2f %.2f\n",x1,x2);
}else if (delta<0){
  puts("A parábola não toca a reta x");
}
xv=-b/2*a;
yv=-delta/4*a;
printf("Vértice:,%.2f %.2f",xv,yv);

return 0;
}
// QUESTÃO 5

#include <stdio.h>
#include <math.h>

int main(){
  float salario,aliquota = 0;
  puts("Digite seu salário: ");
  scanf("%f",&salario);

  if ((salario >= 0)&&(salario <= 1100)){
    aliquota = aliquota + salario * 0.075;

  }else if ((salario >= 1100.01)&&(salario <= 2203.45)){
    aliquota = aliquota + 82.50;
    aliquota = aliquota + (salario-1100)*0.09;

  }else if ((salario >= 2203.49)&&(salario <= 3300.22)){
    aliquota = aliquota + 82.50 + 99.31;
    aliquota = aliquota + (salario - 2203.48)*0.12;

  }else if ((salario >= 3305.23)&&(salario <= 6433.57)){
    aliquota = aliquota + 82.50 + 99.31 + 132.21;
    aliquota = aliquota + (salario - 3305.23)*0.14;

  }else{
    aliquota = aliquota + 82.50 + 99.31 + 132.21 + 437.97;
  }
  printf("Alíquota do INSS: %.2f", aliquota);

return 0;
}