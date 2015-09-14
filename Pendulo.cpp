#include "Pendulo.h"

Pendulo::Pendulo()
{

}
/*
 *
from math import sin
from numpy import array,arange
from pylab import plot,xlabel,show

g=9.8#gravedad
l=2.0#longitud del pendulo
q=0.14#amortiguamiento
F=0.6#amplitud de la fuerza impulsora
od=0.5#frecuencia de la fuerza impulsora

def f(r,t):
    theta = r[0]
    omega = r[1]


    fx = omega
    fy = -1.0 * (g/l) * sin(theta) - q*omega + F*sin(od*t)
    return array([fx,fy],float)

a = 0.0 //inicio
b = 80.0 //fin
N = 10000 //fuerza
h = (b-a)/N

tpuntos = arange(a,b,h)
thetapuntos = []
omegapuntos = []

r = array([0.6,0.0],float)#condiciones iniciales ([thetha, omega o velocidad angular])
for t in tpuntos:#met. numerico runge kutta de cuarto orden
    thetapuntos.append(r[0])
    omegapuntos.append(r[1])


    k1 = h*f(r,t)
    k2 = h*f(r+0.5*k1,t+0.5*h)
    k3 = h*f(r+0.5*k2,t+0.5*h)
    k4 = h*f(r+k3,t+h)
    r = r+(k1+2*k2+2*k3+k4)/6
plot(tpuntos,thetapuntos)

xlabel("x")
show()
*/