## Chord Organ Firmware V0.6-Chamäleon

### Standard Features (No Configuration)

* 16 Chords with 8 notes (Voice 8 now fixed)
* 1v/Oct Tuning
* Decoupled Root CV and Root Knob so they both use their own full range
* The module can be rebooted by holding the waveform button for 5 seconds
* Cycle between up to ten different configurations with a one second press of the waveform button

### Extra Features (Requires config file settings)

##### 8 Extra Waves

Use `!WAVES`

The data for the waves is in the Waves.h header file and can be replaced with any 16 bit 256 point wave data.

##### Stacked Voices

Use `!STACK`

The first 4 voices will be doubled with a 0.1% note offset.

##### Glide with time setting

Use `!GLIDE` for default glide (50ms) or use

`!GLIDE 80` for a custom glide time of 80ms.

Glide range is from 5 to 2000 msecs.

##### Custom Note Range

The Root CV note range can be set from 12 to 72 semitones via the !RANGE setting, e.g.

`!RANGE 48`

To use 4 octaves.

##### Unquantised Root CV / Knob

The Root CV and Root Knob can be set to not quantise to semitones.

For free CV input

`!FREEROOT`

For free knob control

`!FREEROOT KNOB`

For both

`!FREEROOT BOTH`

##### Scala Tuning File

If a TUNING.SCL file exists on the SD card it will be used to define the CV / Knob note to frequency mapping.

NOTE : This will only work for inputs which are quantised, anything that uses FREEROOT will not be affected by the tuning file.

Scala is available from the [Scala Website](http://www.huygens-fokker.org/scala/) where you can also find a collection of over 4500 scale files.

##### Different configuration files

There can be up to ten different configuration files to store chords and behaviours. The default config file is "CHORDORG.TXT". It is automatically created if there is none existing on the microSD card. Additionally there can be "CHORDORG1.TXT" to "CHORDORG9.TXT" with completely different configurations.

Cycling through the config files is possible by pressing the waveform button for at least one second. The waveform LEDs blink to indicate which file is being used.

### Config Generator / Firmware Binary
To generate a settings file and download the latest original(!)
firmware binary please visit the [Config Generator Page](http://polyfather.com/chord_organ)

