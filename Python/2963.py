entrada = int(input())
lista = list()
for i in range(entrada):
    lista.append(int(input()))

if lista[0] >= lista[lista.index(max(lista))]:
    print("S")
else:
    print("N")