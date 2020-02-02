# TDA Moneda Coing
## Especificación informal

TAD Moneda(VALORES: cantidad, dueño  ; OPERACIONES: Transferir, Disponibilidad, transferirFrom)

**Crear**
(dueño) **->** 

 		Efecto: crea moneda para el dueño

**Transferir**
(dueño, cantidad, destino) **->** boolean

 		Efecto: realizar transferencia de monedas

**Disponibilidad**
(cantidad) **->** boolean

 		Efecto: informa sobre si el dueño que realiza transferencia dispone de la cantidad de monedas

**TransferirFrom**
(dueño, cantidad, dueño) **->** boolean

 		Efecto: permite transferencias entre dueños de monedas

#### Descripcion
Especificacion informal para un TDA de tipo Moneda