#ifndef lista_h
#define lista_h



typedef struct List List;

/**
 Crea un nuevo puntero de tipo List.
 @return Puntero a la nueva List.
 */
List* createList(void);


/**
 Verifica que la lista no este vacia,
 en caso de estarlo retorna NULL
  */
void* list_no_vacia(List* L);

/**
 Devuele el primer dato de la List.

 @param L Puntero a la List.
 @return Puntero al dato contenido en la cabeza.
 */
void* first(List* L);


/**
 Devuele el siguiente dato de la List.

 @param L Puntero a la List.
 @return Puntero al dato.
 */
void* next(List* L);

/**
 Devuelve el ultimo dato de la List.

 @param L Puntero a la List.
 @return Puntero al dato.
 */
void* lastList(List* L);


/**
 Inserta un elemento al inicio de la lista.

 @param L Puntero a la List.
 @param dato Puntero al dato que se quiere guardar.
 */
void pushFront(List* L, void* dato);


/**
 Inserta un elemento al final de la lista.

 @param L Puntero a la List.
 @param dato Puntero al dato que se quiere guardar.
 */
void pushBack(List* L, void* dato);


/**
 Elimina el nodo del inicio de la lista.

 @param L Puntero a la List.
 */
void popFront(List * L);


/**
 Elimina el nodo final de la lista.

 @param L Puntero a la List.
 */
void popBack(List * L);


/**
 Elimina el nodo en donde se encuentre el current, actualiza el current al siguiente de este.

 @param L Puntero a la List.
 */
void popCurrent(List* L);

/**
 Elimina los nodos que la lista tiene

 @param L Puntero a la List
*/



#endif
