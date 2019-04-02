import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ DanielSalazar_ejercicio21.cpp -o DanielSalazar_ejercicio21.x")
os.system("./DanielSalazar_ejercicio21.x > datos.dat")

dato = np.loadtxt("datos.dat")

plt.figure()
plt.plot(dato[:,0], dato[:,1])
plt.savefig("grafica.png")
