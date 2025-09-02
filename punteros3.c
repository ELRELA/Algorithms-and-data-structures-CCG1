#include <stdio.h>
#include <string.h>
	int i;
	//mensagem[]--arreglo de chars
	//*mensagem[]--arreglo de direciones

	char *mensagem[] = {  // Vector inicializado.
			"Archivo no encontrado",
			"Error de lectura",
			"Error de escritura",
			"No es posible crear el archivo"
		};
		void escreveMensagemDeErro(int num) {
			printf ("%s\n", mensagem[num]);
        }
		 int main () {

			for(i = 0; i<4; i++){
			escreveMensagemDeErro(i);
			//el nombre del vector caracter manda a la primera direccion de memoria del vector. 
			//cuando lo sumas uno pasa a la siguiente direecion de 1 byte
			//el p es una variable pointer	
        	printf("%p \n", mensagem + i);
        	printf("%p \n", mensagem[i]);
        }
        }
