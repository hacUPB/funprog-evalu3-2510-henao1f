
El programa está dividido en:

Un menú principal con bucle do-whileque permite al usuario elegir entre diferentes cálculos.
Funciones especializadas para cada tipo de cálculo, lo que mejora la legibilidad, modularidad y mantenimiento del código.

main()
Presenta un menú iterativo hasta que el usuario elige la opción de salir.
Usa switch-casepara dirigir al usuario a la función correspondiente.
Controla entradas inválidas con un default.

calcular_ley_de_ohm()
Permite calcular:

Voltaje (V) = I × R

Corriente (I) = V / R

Resistencia (R) = V / I

R e I no pueden ser 0

calcular_factor_potencia()
Fórmulas usadas:

FP = P/S (cosφ)

Q = √(S² - P²)

 S ≥ antes de calcular sqrt(S² - P²), ya que de lo contrario se produciría un error por raíz cuadrada de un número negativo.

revisar que S no sea cero para evitar división por cero.

calcular_resistencia_conductor()
Usa la fórmula:

R = (ρ × L) / A

Dónde:

ρ = resistividad (Ω·m)

L = longitud (m)

A = área de sección transversal (m²)

se revisa que A ≠ 0 para evitar división por cero.

calcular_resistencia_led()
Función interesante y más compleja, que permite calcular el resistor en función del número de LEDs y tipo de conexión:

Serie :
Voltaje total:V_fuente - V_total_leds
Corriente: constante

Paralelo :
Corriente total: suma de corrientes
Voltaje: constante

Fórmula general:

R = (V_fuente - V_led_total) / I_total

Potencia disipada en la resistencia

Potencia total del circuito

Corriente total suministrada