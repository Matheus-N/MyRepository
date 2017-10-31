,
//Calculando matriz inversa 2x2

long long det = (key[0][0] * key[1][1]) - (key[1][0] * key[0][1]);


long long aux_matrix[2][2];
aux_matrix[0][0] = key[1][1];
aux_matrix[0][1] = -1 * key[1][0];
aux_matrix[1][0] = -1 * key[0][1];
aux_matrix[1][1] = key[0][0];

long long inverse_matrix[2][2];
for (int i = 0; i < 2; i++)
	for (int j = 0; j < 2; j++)
		inverse_matrix[j][i] = aux_matrix[i][j] / det;  
