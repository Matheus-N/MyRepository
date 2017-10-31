#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <errno.h>

struct ST_Fraction
{
	long long numerator;
	long long denominator;
};

struct ST_Fraction fraction_mul(struct ST_Fraction frac1, struct ST_Fraction frac2);
struct ST_Fraction fraction_sum(struct ST_Fraction frac1, struct ST_Fraction frac2);

int *read_number(char *buffer);
int read_message(char *buffer);
void show_key(int *key[2][2]);
void show_matrix(int lines, int columns, long long matrix[lines][columns]);
void show_matrix_c(int lines, int columns, char matrix[lines][columns]);
struct ST_Fraction read_fraction(char * buffer);

int main(void)
{
	char main_buffer[512];
	int message_size;
	int * key[2][2];

	printf("Digite quatro numeros para preencher a matriz chave: ");
	
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			key[i][j] = read_number(main_buffer);
			if (key[i][j] == NULL)
			{
				perror("Read");
				exit(1);
			}
		}

	memset(main_buffer, ' ', 512);
	
	printf("Digite uma frase a ser criptografada: ");
	
	message_size = read_message(main_buffer);
	if (message_size == 0)
	{
		perror("Read");
		exit(2);
	}

	if ((message_size % 2) != 0)
		message_size++;
		
	char matrix[2][message_size/2];
	memcpy(matrix[0], main_buffer, message_size/2);
	memcpy(matrix[1], main_buffer+(message_size/2), message_size/2);

	puts("======Matriz Chave===========");
	show_key(key);
	puts("=============================");
	
	puts("===============Matriz Menssagem=============");
	show_matrix_c(2, message_size/2, matrix);
	puts("============================================");

	long long crypt_matrix[2][message_size/2];

	
	puts("========Matriz Chave X Matriz Mensagem======");
	for (int j = 0; j<(message_size/2); j++)
	{
		//printf("matriz_resultante[0][%d] = (%d * %d) + (%d * %d)\n", j, *(key[0][0]), matrix[0][j],
		//	*(key[0][1]), matrix[1][j]);
		
		crypt_matrix[0][j] = (*(key[0][0]) * matrix[0][j]) + (*(key[0][1]) * matrix[1][j]);
		
		//printf("matriz_resultante[1][%d] = (%d * %d) + (%d * %d)\n", j, *(key[1][0]), matrix[0][j],
		//	*(key[1][1]), matrix[1][j]);
		
		crypt_matrix[1][j] = (*(key[1][0]) * matrix[0][j]) + (*(key[1][1]) * matrix[1][j]);
	}
	//puts("============================================");
	//puts("========Matriz Resultante===================");
	show_matrix(2, message_size/2, crypt_matrix);
	puts("============================================");

	//Calculando matriz inversa
	struct ST_Fraction inverse_matrix[2][2];
	long long aux_matrix[2][2];

	long long det = (*key[0][0] * *key[1][1]) - (*key[1][0] * *key[0][1]);
	
	puts("================Determinante da Matriz Chave========");
	printf("Determinante = %lld\n", det);

	aux_matrix[0][0] = (*(key[1][1]));
	aux_matrix[0][1] = -1 * (*(key[1][0]));
	aux_matrix[1][0] = -1 * (*(key[0][1]));
	aux_matrix[1][1] = (*(key[0][0]));

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			inverse_matrix[j][i].numerator = aux_matrix[i][j];
			inverse_matrix[i][j].denominator = det;
		}

	//printf("Entre com a matriz inversa: \n");
	//for (int i = 0; i < 2; i++)
	//	for (int j = 0; j < 2; j++)
	//		inverse_matrix[i][j] = read_fraction(main_buffer);

	puts("===========Matriz Inversa============");
	for (int i = 0; i < 2; i++)
	{
		putchar('|');
		for (int j = 0; j < 2; j++)
		{
			printf("%lld/%lld ", inverse_matrix[i][j].numerator, inverse_matrix[i][j].denominator);
			
		}
		puts("|");
	}
	
	struct ST_Fraction crypt_matrix_f[2][message_size/2];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < message_size/2; j++)
		{
			crypt_matrix_f[i][j].numerator = crypt_matrix[i][j];
			crypt_matrix_f[i][j].denominator = 1;
		}	 

	puts("========Matriz Inversa X Matriz Criptografada======");
	
	struct ST_Fraction result[2][message_size/2];
	
	for (int j = 0; j<(message_size/2); j++)
	{
		result[0][j] = fraction_sum(fraction_mul(inverse_matrix[0][0], crypt_matrix_f[0][j]), 
									fraction_mul(inverse_matrix[0][1], crypt_matrix_f[1][j]));
		result[1][j] = fraction_sum(fraction_mul(inverse_matrix[1][0], crypt_matrix_f[0][j]), 
									fraction_mul(inverse_matrix[1][1], crypt_matrix_f[1][j]));
	}
	
	for (int i = 0; i < 2; i++)
	{
		putchar('|');
		for (int j = 0; j < message_size/2; j++)
			printf("%lld/%lld ", result[i][j].numerator, result[i][j].denominator);
		puts("|");
	}

	puts("===========Matriz Inversa Simplificada=========");
	for (int i = 0; i < 2; i++)
	{
		putchar('|');
		for (int j = 0; j < message_size/2; j++)
			printf("%lld ", result[i][j].numerator / result[i][j].denominator);
		puts("|");
	}

	puts("==============Resultado=======================");
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < message_size/2; j++)
			printf("%c", (char)(result[i][j].numerator / result[i][j].denominator));
	putchar('\n'); 


	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			free(key[i][j]);
	fcloseall();	
	
	return 0;
}

int *read_number(char *buffer)
{
	int *ret = (int *)malloc(sizeof(int));
	
	fgets(buffer, 512, stdin);
	*ret = (int)strtol(buffer, (char **)NULL, 10);
	
	if ( (errno == EINVAL) || (errno == ERANGE) )
	{
		free(ret);
		return NULL;
	}
	else
		return ret;
}

int read_message(char *buffer)
{
	int size;
	if (fgets(buffer, 512, stdin) == NULL)
		return 0;
	else
	{
		size = strnlen(buffer, 512);
		buffer[size-1] = ' ';
		return strnlen(buffer, 512)-1;
	}
}

void show_key(int *key[2][2])
{
	printf("|%d %d|\n"
		   "|%d %d|\n",

		   *key[0][0], *key[0][1],
		   *key[1][0], *key[1][1]
	); 
}

void show_matrix(int lines, int columns, long long matrix[lines][columns])
{
	for (int i = 0; i < lines; i ++)
	{
		putchar('|');
		for (int j = 0; j < columns; j++)
		{
				printf("%lld ", matrix[i][j]);
				//printf("%c ", (char)matrix[i][j]);
		}
		putchar('|');
		putchar('\n');
	}
}

void show_matrix_c(int lines, int columns, char matrix[lines][columns])
{
	for (int i = 0; i < lines; i ++)
	{
		putchar('|');
		for (int j = 0; j < columns; j++)
		{
				printf("%d ", matrix[i][j]);
				//printf("%c ", (char)matrix[i][j]);
		}
		putchar('|');
		putchar('\n');
	}
}

struct ST_Fraction read_fraction(char * buffer)
{
	fflush(stdin);
	bzero(buffer, 512);

	struct ST_Fraction ret;
	
	printf("Entre com o numerador: ");
	fgets(buffer, 512, stdin);
	ret.numerator = strtoll(buffer, (char **)NULL, 10);
	bzero(buffer, 512);
	fflush(stdin);
	printf("Entre com o denominador: ");
	fgets(buffer, 512, stdin);
	ret.denominator = strtoll(buffer, (char **)NULL, 10);
	bzero(buffer, 512);
	
	return ret;	
	
}

struct ST_Fraction fraction_mul(struct ST_Fraction frac1, struct ST_Fraction frac2)
{
	struct ST_Fraction result;
	result.numerator   = frac1.numerator * frac2.numerator;
	result.denominator = frac1.denominator * frac2.denominator;

	return result;
}

struct ST_Fraction fraction_sum(struct ST_Fraction frac1, struct ST_Fraction frac2)
{
	struct ST_Fraction result;
	result.numerator   = ( (frac1.numerator * frac2.denominator) + 
						  (frac1.denominator * frac2.numerator) );
	result.denominator = frac1.denominator * frac2.denominator;

	return result;
}