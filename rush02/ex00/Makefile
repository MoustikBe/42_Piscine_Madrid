 
#le asignamos el nombre de la variable y el valor
NAME = rush02

#Le asignamos la variable y el valor
SRC = main.c atoi.c errors.c hash.c hashmap.c process_number.c read_bytes.c read_formated.c split_number.c strings.c write.c

#ahora damos el objeto y convertimos el .c en .o
OBJ = $(SRC:.C=.o)

#esta asigna los valores de la variable
CFLAGS = -Wall -Werror -Wextra

#este contiene la regla all la cual sigue la linea name la cual es la primera
all: $(NAME)

#esto cuando se ejecute el make all se compila el archivo y crea el ejecutable junto con las lineas y reglas asigna$
$(NAME): $(OBJ)
	cc $(CFLAGS) $(OBJ) -o $(NAME)

#Al añadir esto damos a entender que creamos el .o con el src que en este caso sería ft_swap.c pasa a ft_swap.o
$(OBJ): $(SRC)

#el clean lo que hace es borrar el fichero .o tras hacerlo
clean:
	rm -f *.o

#mientras que este sigue la cadena del clean y borra el principal
fclean: clean
	rm -f $(NAME)
