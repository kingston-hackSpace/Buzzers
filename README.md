# Buzzers

Buzzers, also called ***piezo electric speakers***, are electronic components that emit sound when an electrical voltage is applied across them. Inside, a thin piezoelectric disc bends and flexes in response to that voltage, and this rapid mechanical movement vibrates the air to produce sound.

There are two main types you'll come across:

**Passive buzzers** need a signal (like a square wave from a microcontroller pin) to produce sound. Because you control the frequency of that signal, you can make passive buzzers play different pitches and even simple melodies.

**Active buzzers** have a built-in oscillator, so they only need a steady DC voltage (like HIGH from a digital pin) to produce a single, fixed-pitch tone. They're simpler to wire up but far less flexibl. In other words, you get one beep, not a tune.

Watch [this tutorial to hear (and learn) the difference](https://www.youtube.com/watch?v=gj-H_agfd6U&t=210s) between passive and active buzzers


------
# TUTORIAL

------
## HARDWARE

- Arduino UNO

- Push-button

- Passive buzzer

- Active buzzer

------
## ACTIVE BUZZER (MODULE)

### WIRING

[Active Buzzer wiring diagram here](https://github.com/kingston-hackSpace/Buzzers/blob/main/Buzzer_active(module)_bb.jpg)

This active buzzer operates around the audible 2 kHz frequency range. It produces sound by itself, without needing an external frequency generator.

### CODE and INSTRUCTIONS

- Upload [this code](https://github.com/kingston-hackSpace/Buzzers/blob/main/Buzzer_active(module).ino) to your Arduino Board. The buzzer should emit a steady pattern sound. 

- Change the *delay* value to hear changes in the beeping patterns.
  
------
## PASSIVE BUZZER

### WIRING

[Passive Buzzer wiring diagram here](https://github.com/kingston-hackSpace/Buzzers/blob/main/Buzzer_passive_bb.jpg). Note: Passive buzzers don't have polarity.

### CODE and INSTRUCTIONS

Passive buzzers need a square wave signal to produce sound. By changing the frequency of the square wave you can change the pitch of the sound.

The Arduino has a built in function called **tone()** that generates square waves at a range of frequencies:

    tone(pin, frequency, duration);

The **noTone()** function can be used to turn off the tone() function.

- Upload [this "notes" code](https://github.com/kingston-hackSpace/Buzzers/blob/main/Buzzer_passive_notes.ino) to your Arduino board. 



