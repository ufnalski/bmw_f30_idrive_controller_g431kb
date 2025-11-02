# BMW F30/F31 iDrive controller [STM32G431KB]
The part number is [926170403](https://allegro.pl/listing?string=926170403) or [926170404](https://allegro.pl/listing?string=926170404).

![BMW F30 iDrive controller in action](/Assets/Images/bmw_f30_idrive_in_action.jpg)
![BMW F30 iDrive controller in pieces](/Assets/Images/bmw_f30_idrive_in_pieces.jpg)
![BMW F30 iDrive controller CAN frames](/Assets/Images/bmw_f30_idrive_can_messages.JPG)

# Pinout

| Color  | Signal |
|:------:|:------:|
| Red    | 12 V   |
| Brown  | GND    |
| Yellow | CAN_H  |
| Green  | CAN_L  |

![BMW F30 iDrive controller pinout](/Assets/Images/bmw_f30_idrive_pinout.jpg)

# What's inside?

* [TJA1055T](https://www.nxp.com/part/TJA1055T) (NXP)
* [MPC567x](https://www.phytec.eu/en/produkte/nxp-mpc567x-mpc5777-1/) (Freescale, NXP)

# Missing files?
Don't worry :slightly_smiling_face: Just log in to MyST and hit Alt-K to generate /Drivers/CMCIS/ and /Drivers/STM32G4xx_HAL_Driver/ based on the .ioc file. After a couple of seconds your project will be ready for building.

# Readings
* [K-CAN2 messages to wake a CIC/iDrive controller?](https://www.bimmerfest.com/threads/k-can2-messages-to-wake-a-cic-idrive-controller.890419) (BimmerFest)
* [Peugeot 308 T9 (2014+) instrument panel cluster hacking](https://github.com/ufnalski/peugeot_308_t9_cluster_g431kb) (a note on CAN physical layers)

# Call for action
Create your own [home laboratory/workshop/garage](http://ufnalski.edu.pl/control_engineering_for_hobbyists/2025_dzien_popularyzacji_matematyki/Dzien_Popularyzacji_Matematyki_2025.pdf)! Get inspired by [ControllersTech](https://www.youtube.com/@ControllersTech), [DroneBot Workshop](https://www.youtube.com/@Dronebotworkshop), [Andreas Spiess](https://www.youtube.com/@AndreasSpiess), [GreatScott!](https://www.youtube.com/@greatscottlab), [bitluni's lab](https://www.youtube.com/@bitluni), [ElectroBOOM](https://www.youtube.com/@ElectroBOOM), [Phil's Lab](https://www.youtube.com/@PhilsLab), [atomic14](https://www.youtube.com/@atomic14), [That Project](https://www.youtube.com/@ThatProject), [Paul McWhorter](https://www.youtube.com/@paulmcwhorter), [Max Imagination](https://www.youtube.com/@MaxImagination), [Nikodem Bartnik](https://www.youtube.com/@nikodembartnik), [Stuff Made Here](https://www.youtube.com/@StuffMadeHere), [Mario's Ideas](https://www.youtube.com/@marios_ideas), [Aaed Musa](https://www.aaedmusa.com/), and many other professional hobbyists sharing their awesome projects and tutorials! Shout-out/kudos to all of them!

> [!WARNING]
> Human-machine interfaces - do try them at home :exclamation:

200+ challenges to start from: [Control Engineering for Hobbyists at the Warsaw University of Technology](http://ufnalski.edu.pl/control_engineering_for_hobbyists/Control_Engineering_for_Hobbyists_list_of_challenges.pdf).

Stay tuned :sunglasses:
