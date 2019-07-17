# J.A.R.V.I.S

This is just a speech recognition project which plays several preprogrammed audio files which looks like it replies to our command. It may appear like a cool AI just like J.A.R.V.I.S, but again it is just a speech recognition project.

I made this project open-source since coders and makers could really bring out a solution on how to embed intelligence in response to the recognized speech and make it a real AI, which could help us a lot to unleash an AI.

So before implementing J.A.R.V.I.S, you need to train the voice recognition module with voice commands.

First connect the voice recognition module (Elechouse v3.0) with appropriate wiring

		GND -> Arduino Ground
		Vcc -> +5v
		TX  -> Arduino Pin 10
		RX  -> Arduino Pin 11
		
Now train the voice recognition module with the following steps. 
		
	1) Open "vr_sample_train" folder and launch "vr_sample_train.ino"	
	2) Select the board and port. Upload the code.
	3) Now launch the Serial Monitor.
	4) On the monitor, the help menu appears. Follow the instructions to train the commands.
		ie. to train a voice command and name a signature for it, type
				sigtrain <ID no.> <Signature> (Ex: sigtrain 0 JARVIS)
	5) Now follow the schematics of the voice commands for J.A.R.V.I.S.
		
		ID:0 Signature:JARVIS     Command to be spoken: "Hi, what's your name?"
		ID:1 Signature:ATSERVICE  Command to be spoken: "Jarvis, you there?"
		ID:2 Signature:REACTORON  Command to be spoken: "Turn on the reactor!"
		ID:3 Signature:ILOVEYOU   Command to be spoken: "I love you Jarvis!"
		ID:4 Signature:LASTWORDS  Command to be spoken: "Any last words Jarvis?"
		
	6) After all the commands have been trained successfully, load all those commands by typing "load 0 1 2 3 4" on the serial monitor textbox.
	
	7) Now simply exit the serial monitor, if you found the Voice recognition module LED is blinking red every second. Make sure you should not power off the Arduino. Let the program be in an open window.
	
    8) Mount the SD card on your PC. Extract "VOICE TRACKS.rar" and copy all the audio files to the SD Card and unmount it. Now mount the SD card back into the SD Card Module.

	9) Ensure whether all components are connected properly. Now open "J.A.R.V.I.S" folder and open "J.A.R.V.I.S.ino". Select the appropriate board and port. Now upload the code.
	
	10) After the code upload, open the serial monitor and start speaking pre-trained voice commands.
	
	11) Voila! You'll notice the tracks playing as per your command and the voice recognition module will work perfectly.
	
You can also use several other voice recognition modules that offers more voice commands to be stored on memory, since the Elechouse v3.0 module supports 80 commands on memory where only 7 commands can be loaded mainstream.

So feel free to recreate the whole project, modify the code upto to your convenience and add more voice tracks or make it more intelligent like chatbot integration, cloud connectivity etc. :)

 
