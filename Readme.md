# RGoBeToothConfig

How to configure HC-06 bluetooth module to make connections.

You should try once configure your bluetooth device with our [R-GoBe App](https://play.google.com/store/apps/details?id=com.jenazads.android.rgobe) in google play.

## HC-05

HC-05 puede comportarse como maestro/esclavo según su role.

* Saludo: AT

* nombre: AT+NAME=Jnzs

* passwd: AT+PSWD=1234

* baudios: AT+UART=9600,0,0

* modo maestro: AT+ROLE=1

* conectarse a cualquier dispositivo: AT+CMODE=1

## Hc 06 --> esclavo

HC-06 solo se comporta como esclavo, siendo cliente de otros dispositivos como celulares, tablets, etc.

* saludo: AT

* nombre: AT+NAMEJnzds

* passwd: AT+PIN1234

* opciones de fabrica: AT+ORGL

* reset: AT+RESET

* baudios: AT+BAUD4

        1 ---------1200
        2 ---------2400
        3 ---------4800
        4 ---------9600
        5 ---------19200
        6 ---------38400
        7 ---------57600
        8 ---------115200

