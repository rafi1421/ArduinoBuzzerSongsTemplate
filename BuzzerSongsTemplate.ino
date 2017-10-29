
int SpeakerPin = 11;
//#define NOTE_GS4 415
//#define NOTE_AS4 466
//#define NOTE_C5  523
//#define NOTE_G5  784
//#define NOTE_A5  880
//#define NOTE_E6  1319
//#define NOTE_G6  1568
#include "pitches.h"

void setup() {
  // put your setup code here, to run once:
	pinMode(SpeakerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
	Allstar();
	delay(1500);

}

  /////////////////////
 ///Tune Management///
/////////////////////
int marioMelody[] = {
 NOTE_E6, NOTE_E6, 0, NOTE_E6, 0, NOTE_A5, NOTE_E6, NOTE_G6, 0, NOTE_G5, 0
};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int marionoteDurations[] = {
  8, 8, 8, 8, 8, 8, 4, 4, 4, 4, 2
};

int ffvictoryMelody[] = {
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_GS4, NOTE_AS4, 0, NOTE_C5, 0, NOTE_AS4, NOTE_C5
};
int ffvictorynoteDurations[] = {
  8, 8, 8, 3, 3, 4, 64, 6, 32, 8, 1.5
};

int AllstarMelody[] = {
	NOTE_FS4, NOTE_CS5, NOTE_AS4, NOTE_AS4, //somebody once
	NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_B4, //told me the world 
	NOTE_AS4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, 0, //is gonna roll me/rest
	NOTE_FS4, NOTE_CS5, NOTE_AS4, NOTE_AS4, NOTE_GS4, NOTE_GS4, NOTE_FS4, NOTE_FS4, NOTE_DS4 //i aint the sharpest tool in the shed

};
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int a = 4.5;
int AllstarnoteDurations[] = {
	2, a, a, 2.2,
	a, a, a, 2,
	a, a, a, a, 2, 6,
	a, a, a, a, a, a, a, a, 1.5

};

int RockstarMelody[] = {
	NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_E4, //hey now yourn an
	NOTE_GS4, NOTE_GS4,0, NOTE_GS4, NOTE_E4, //all star  get your
	NOTE_GS4, NOTE_GS4, NOTE_E4, NOTE_B4,0,// game on go play
	
	NOTE_B4, NOTE_GS4, NOTE_GS4, NOTE_E4, //hey now yourn an
	NOTE_GS4, NOTE_GS4,0, NOTE_GS4, NOTE_E4, //all star  get your
	NOTE_GS4, NOTE_GS4, NOTE_E4, NOTE_B4,// game on go play

};
// note durations: 4 = quarter note, 8 = eighth note, etc.:

int RockstarnoteDurations[] = {
	a, 2, 8,8,
	a ,4,16,8,8,
	a,2,a,1.5,16,


	a, 2, 8,8,
	a ,4,16, 8,8,
	a,2,a,1.5
};

void mario() {
  for (int thisNote = 0; thisNote < 12; thisNote++) {
    // to calculate the note duration, take one second 
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/marionoteDurations[thisNote];
    tone(SpeakerPin, marioMelody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(SpeakerPin);
   }
}
void victory() {
  for (int thisNote = 0; thisNote < 12; thisNote++) {
    int noteDuration = 1000/ffvictorynoteDurations[thisNote];
    tone(SpeakerPin, ffvictoryMelody[thisNote],noteDuration);
    int pauseBetweenNotes = noteDuration * 1.28;
    delay(pauseBetweenNotes);
    noTone(SpeakerPin);
    } 
}

void Allstar() {
	for (int thisNote = 0; thisNote < 24; thisNote++) {
		// to calculate the note duration, take one second 
		// divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / AllstarnoteDurations[thisNote];
		tone(SpeakerPin, AllstarMelody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.3;
		delay(pauseBetweenNotes);
		noTone(SpeakerPin);
	}
}
void Rockstar() {
	for (int thisNote = 0; thisNote < 28; thisNote++) {
		// to calculate the note duration, take one second 
		// divided by the note type.
		//e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
		int noteDuration = 1000 / RockstarnoteDurations[thisNote];
		tone(SpeakerPin, RockstarMelody[thisNote], noteDuration);
		int pauseBetweenNotes = noteDuration * 1.3;
		delay(pauseBetweenNotes);
		noTone(SpeakerPin);
	}
}
//void playWin() {
//    if (!tuneplayed) { 
//    victory(); 
//    tuneplayed = true; 
//    }
//}


