# SmsUpdates

Thr project takes in sensor values and sends updates vida sms on timely basis.

step1:
Processes smsSystem is created using Elma and it keeps updating the channel with sensorvalues
It sends data serially to Twilio arduino Board.

step2:
This data once received is sent to Twilio Iot account via broadband, through the sim card and antenna available on the kit.

step3:
function created in Twilio Iot is Triggered once it receives command from the Twilio NB-Iot sim.

## Milestoned Decided:

* Importing Elma to arduino
* Reading Data via Ultrasonic sensor
* Sending Sms based on the Data from Ultrasonic Sensor

## Change of plans

* It was not feasible to import elma on Twilio arduino
* Elma excuted via docker to send data serially to arduino

## Hardware to be used:
Twilio Iot Development kit

## setup

### Elma

elma can be installed as directed here https://github.com/klavinslab/elma
git clone the current repository


```
git clone https://github.com/ForumSuthar/SmsUpdates.git
```


### Twilio NB-Iot


You need the twilio development kit and sim card to use twilio NB-iot.
The following provides detailed instruction of the Basic setup.
[Twilio-account-setup](https://www.twilio.com/docs/wireless/tutorials/apn-configuration)


compile the arduino code given [here](https://github.com/ForumSuthar/SmsUpdates/tree/master/arduino)
Upload it into the board once the setup is complete


Additional library used: Twilio Breakout library
[Breakout-Arduino-Library](https://github.com/twilio/Breakout_Arduino_Library)


You can download this library and ad as Zip as follows:
Open Arduino IDE-> Sketch->Include .zip library-> the browse to given library and click OK

create a new function in Twillio account as given here [Functions](https://www.twilio.com/docs/runtime/functions)

add the Javascript code available [here](https://github.com/ForumSuthar/SmsUpdates/tree/master/Twilio) in the function created in Twilio App

##Acknowledgements
I would like to thank Prof. Klavins for the awesome coursework material.

##References
https://github.com/klavinslab/elma_project

https://github.com/klavins/ECEP520

http://wiringpi.com/examples/blink/

##License
This software is open source and uses the MIT license. Details can be found here.





