# 🧮 push_swap

**push_swap** es un proyecto de 42 cuyo objetivo es ordenar una pila de números enteros utilizando un conjunto limitado de instrucciones, en el menor número de movimientos posible.

---

## 📚 Descripción

El programa recibe una serie de números como argumentos y utiliza un algoritmo para ordenarlos usando únicamente las siguientes operaciones:  
`sa`, `sb`, `ss`, `pa`, `pb`, `ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`.

El proyecto se divide en dos partes:

1. **`push_swap`**: genera una lista de instrucciones para ordenar los números.
2. **`checker`** (opcional): comprueba si la secuencia de instrucciones realmente ordena la pila.

---

## 🛠️ Estructura

```bash
.
├── includes/
│   └── push_swap.h
├── libs/
│   ├── libft/
│   └── ft_printf/
├── src/
│   ├── main.c
│   ├── push.c
│   ├── swap.c
│   ├── rotate.c
│   ├── rrotate.c
│   ├── arguments_check.c
│   ├── stack_manage.c
│   ├── smallsort.c
│   ├── bigsort.c
│   └── chunksort.c
├── Makefile
└── README.md

🧠 Algoritmos implementados
🧩 Chunk Sort: Para manejar grandes cantidades de números.

🪄 Mini-sorts: Optimizaciones específicas para 2 a 6 elementos.

🧼 Validación de argumentos, manejo de errores y memoria.

⚙️ Compilación
Compila el proyecto ejecutando:

make

Limpieza de objetos:

make clean

Limpieza total:

make fclean

Recompilación:

make re

🚀 Uso

./push_swap 3 2 1

O bien con comillas:

./push_swap "3 2 1"

🧪 Testeo automático
El Makefile incluye una regla test que genera argumentos aleatorios y valida con checker_linux:

make test

Opcionalmente, puedes cambiar la cantidad de números modificando NUM_QTY y MAX_MOVES al principio del Makefile.

✅ Reglas de rendimiento
Para que el proyecto sea considerado correcto, se deben cumplir los siguientes límites:

Cantidad de números	Movimientos máximos
3	3
5	12
100	700
500	5500

📂 Formato del input
El programa acepta únicamente números enteros, sin duplicados, en un solo string o separados por espacios:

./push_swap 2 1 3 6 5 8
./push_swap "2 1 3 6 5 8"

✍️ Autor
👤 alphbarr

🏫 42 Network

📫 GitHub: @alphbarr (o el enlace que prefieras)

🧠 Bonus ideas
Visualizador gráfico.

Checker propio (bonus/).
