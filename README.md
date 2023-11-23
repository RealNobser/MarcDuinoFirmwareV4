# MarcDuinoV4

## What is the MarcDuino system?
(from https://www.curiousmarc.com/r2-d2/marcduino-system):

"The MarcDuino system controls the animatronics of an R2 (dome panels, light and sound). It currently controls 10 dome panels, an "MP3 Trigger" sound board, dome "Teeces" lights and holoprojectors light and movements, and I2C gizmos you can add-in yourself. It has lots of pre-programmed effects making all these act together.

The system is centered around the MarcDuino boards which sit in the R2. There are two kinds, the Master and the Slave board, which are very similar to each other." - CuriousMarc
## What is MarcDuinoV4
The MarcDuinoV4 software is a **firmware replacement** for the original MarcDuino V1.5Rev3 boards. 

Details about the **boards** can be found here:
https://www.curiousmarc.com/r2-d2/marcduino-system/marcduino-boards/marcduino-v1-5

The **original firmware** can be found here:
https://www.curiousmarc.com/r2-d2/marcduino-system/marcduino-software-reference

There also is a **spinoff** of Marcs firmware also known as **MarcDuinoMain V3** and **MarcDuinoClient V3**:
https://github.com/nhutchison/MarcDuinoMain
https://github.com/nhutchison/MarcDuinoClient

***MarcDuinoV4 has nothing to do with the original firmware made by Marc nor with the spinoff made by Neil! So if you have any questions about MarcDuinoV4 don't ask any of them!***

## Why MarcDuinoV4?
The last update of the original firmware was made in 2018. Neils latest update was a minor change in mid 2022. His V3 software has about 80% of the original source in common, adding some features for the most recent MarcDuino boards (servo controller and EXT/AUX-Pin controls). He also added the nice feature of storing settings on runtime within the EEPROM. But the code also has some glitches and bugs and is based on outdated Arduino libraries. I started in 2023, when the whole Arduino framework and community made really large progress over the last 5 years. 

## Supported Board


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTM3MDM3NDIxOCwtMjE5NzM5MjE4XX0=
-->