# CW Explorer
## Wirelss CW Key control 
uses real morse code keys and low latency XBee wireless modules

Breadboard layout

 Reciever Module | Transmitter Module
--- | ---
<img src="https://raw.githubusercontent.com/dcsim0n/CWExplorer/master/CW%20Explorer.RX_bb.png" width="300" height="600" /> | <img src="https://raw.githubusercontent.com/dcsim0n/CWExplorer/master/CW%20Explorer.TX_bb.png" width="270" height="600" />

### Design Features

+ Send stutter free code from anywhere in your QTH
+ Operate remotely with a real staight key or paddle
+ Qaulifies for SKCC use
+ 5v or 12v low power consumption
+ Frequency agile, 12 channel choices
+ Configurable and extendable (re-programmable Atmega microcontroller)

## How does it work?

The transmitter module will send a "state change" message across a real time wireless link to the receiver module. The receiver will then mirror the voltage change seen by the transmitter. For example, pulling trasmitter input 1 from HIGH to LOW will cause receiver output 1 to also switch from HIGH to LOW. 

This "line passing" signalling can also be used in reverse to provide feedback to the remote operator. When the reciever module receives the "state change" message. Line passing can also be used to send an acknowledgement by passing a HIGH or LOW signal back to the reciever on lines 3 and 4. These feedback signals can be used to control an led or buzzer at the operating position. Fedback signals could be for sidetone or as a general reception performance indicator.

The arduino nano is used as a means of passing AT commands to the Xbee microntroller. AT ccommands are used to change frequency, node association, and Private Area Network (PAN) settings. 

Arduino firmware can be used as an interface layer or to pass raw serial data to the Xbee.

## Construction alternatives

+ Replace Arduino nano with any microcontroller when working from the "parts drawer" 
+ Eleminiate Arduino and provide standalone 5v power supply for smaller footprint, lower current draw, fewer parts.
+ Add additional interfaces informational display and buttons. 
