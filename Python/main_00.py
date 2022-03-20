#! /usr/bin/env python3

#############################
#   L E A R N  C O D : 0 0  #
#############################

import collections
import random

Cartas = collections.namedtuple('Carta', ['numero', 'de'])

class DeckFrances:

    numeros = [str(n) for n in range(2, 11)] + list('JQKA')
    tipos = 'Espada Diamntes Treboles Corazones'.split()

    def __init__(self):
        
        self._cartas = [Cartas(numero, tipo) for tipo in self.tipos
                                             for numero in self.numeros]        
            
    def __len__(self):
        return len(self._cartas)
    
    def __getitem__ (self, posicion):
        return self._cartas[posicion]

