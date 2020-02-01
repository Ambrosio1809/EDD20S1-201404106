## TDA Moneda Coing
### Especificación informal

TAD Moneda(VALORES: cantidad, dueño  ; OPERACIONES: Transferir, Disponibilidad, transferirFrom)
-Transferir (dueño, cantidad, destino)   -> 
 		Efecto: realizar transferencia de monedas
-Disponibilidad (cantidad)   ->
 		Efecto: informa sobre si el dueño que realiza transferencia dispone de la cantidad de monedas
-TransferirFrom (dueño, cantidad, dueño) ->
 		Efecto: permite transferencias entre dueños de monedas

#### Description
Especificacion informal para un TDA de tipo Moneda