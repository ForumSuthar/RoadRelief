# SmsUpdates

Thr project takes in sensor values and sends updates vida sms on timely basis.

step1:
Processes smsSystem is created using Elma and it keeps updating the channel with sensorvalues
It sends data serially to Twilio arduino Board.

step2:
This data once received is sent to Twilio Iot account via broadband, through the sim card and antenna available on the kit.

step3:
function created in Twilio Iot is Triggered once it receives command from the Twilio NB-Iot sim.

## Hardware to be used:
Twilio Iot Development kit

## setup

### Elma

elma can be installed as directed here https://github.com/klavinslab/elma
git clone the current repository

'''
git clone https://github.com/ForumSuthar/SmsUpdates.git
'''

run using the following docker image
'''

'''

### Twilio NB-Iot

You need the twilio development kit and sim card to use twilio NB-iot.
The following provides detailed instruction of the Basic setup.
https://www.twilio.com/docs/wireless/tutorials/apn-configuration

compile the arduino code given here https://github.com/ForumSuthar/SmsUpdates/tree/master/arduino
Upload it into the board once the setup is complete

Additional library used: Twilio Breakout library
https://github.com/twilio/Breakout_Arduino_Library

You can download this library and ad as Zip as follows:
Open Arduino IDE-> Sketch->Include .zip library-> the browse to given library and click OK

create a new function in Twillio account as follows:
https://www.twilio.com/docs/runtime/functions

add the Javascript code available here https://github.com/ForumSuthar/SmsUpdates/tree/master/Twilio





