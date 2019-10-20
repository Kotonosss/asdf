#include <stdio.h>
#include <stdlib.h>
#include <types/list.h>
#include <types/hash_table.h>

static list testf_iter(list l) {
	int i = 0;
	list lista = list_empty(integer_type);
	printf("Input 1: \d", l);
	if ( list_size(l) != 0) {
		while (i < list_size(l)) {
			if (list_get(l, i)%2 == 0) {
				list_add(lista, list_get(l,i)*list_get(l,i));
				i++;
				}
			} else {
				lista = l;
		}
	}
return lista;
	}
