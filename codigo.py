v = []
c = []

while True:
    print ("1. Agregar vertice")
    print ("2. Agregar caras")
    print ("3. Ver figura")
    print ("4. Salir")
    
    opción = input("Elija una opción: ")

    if opción == "1":
        x,y,z = input("Ingresa los valores de x,y,z ").split()
        v.append((x,y,z))
        print ("Vertice agregado")
    
    elif opción == "2":
        if not v:
            print ("Primero debe ingresar los vertices")
        else:
            indices = input("Ingresa los indices separados por el espacio").split()
            c.append([int(i)for i in indices])
            print ("Cara agregada")
    
    
    elif opción == "3":
        print("Vertices")
        for i , vertice in enumerate(v):
            print(i,vertice)

        print("Caras")
        for i , cara in enumerate(c):
            print(i,cara)
        
    elif opción == "4":  
        print ("Saliendo del sistema")
        break
        
    else:
        print ("Opción invalida")
