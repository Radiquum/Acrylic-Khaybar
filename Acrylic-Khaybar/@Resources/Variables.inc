[Variables]
; Pick and choose the modules you want to have! Leave unused fields empty.
; Valid values are: Battery, Music, Time, User, Weather, CPU, RAM and SWAP.

Module01=User
Module02=Time
Module03=Weather
Module04=Battery
Module05=Cpu
Module06=Ram
Module07=Swap
Module08=Music

; ================================================

Scale=1.05
; A size multiplier for Acrylic-Khaybar and its modules.

Alignment=Left
; The alignment of Acrylic-Khaybar on the screen.
; Valid values are "Left", "Center" and "Right".

Padding=20
; The amount of pixels on the sides between the edge of the screen and Acrylic-Khaybar.
; NOTE: This option is unaffected by the Scale option.

FreeFloatMode=False
; This allows you to place the skin anywhere, without using the Alignment and padding options above.
; Valid values are "True" and "False"

Font=Roboto
; The font used in Acrylic-Khaybar and its modules.

Color=255, 255, 255
; The color of the text and icons in Acrylic-Khaybar. Modules are not affected by this.
; Valid valides are formatted "RRR, GGG, BBB" with values of 0-255.

ModuleBackgroundColor=0,0,0,25
ModuleTextColor=255,255,255
ModuleActiveTextColor=216,255,255
; The color of the background and text of the modules.
; Valid valides are formatted "RRR, GGG, BBB" with values of 0-255.


; The blur of the background of the modules.
; Valid values are "Blur" (win 7+) and "Acrylic" (win 10+)
; ================================================

24HTime=False
; Enable or disable 24-hour time.
; Valid values are "True" and "False".

StartWeekOnSunday=True
; When enabled, the first day of the week shown in the calendar will be Sunday instead of Monday.
; Valid values are "True" and "False".

; ================================================

Player=WebNowPlaying
; This is where you specify the player you're using. Valid values (and compatible players) are:
; AIMP, foobar2000, iTunes, MediaMonkey, MusicBee, WebNowPlaying and Winamp.

; NOTE: Additional steps are needed for some players:
; - foobar2000: Install the foo_cad plugin. It can be found here: https://poiru.github.io/foo-cad/.
; - MusicBee: Enable the CD Art Display plugin in the settings.
; - Spotify: Install spicetify-cli and set the Player option to "WebNowPlaying".
;   A guide on how to install it can be found here: https://github.com/khanhas/spicetify-cli/wiki/Guide-for-Rainmeter-user.
; - WebNowPlaying: Install the browser extension here: https://github.com/tjhrulz/WebNowPlaying#extension-links

; ================================================

WeatherLocation=Amsterdam
; Just enter your city's name or your address here or whatever. Anything should work here.
; TIP: Check Rainmeter's log to see what location it got.

WeatherUnits=Metric
; The units of the weather info. Valid values are "Metric" and "Imperial".

Language=en
; The language code for the weather information and date/weekday text. Most languages are supported, but it's not guaranteed to work.
; Recommended and working values are (kind of grouped by area):
; "en" (English),
; "de" (German), "nl" (Dutch), "fr" (French), "es" (Spanish), "pt" (Portuguese), "it" (Italian),
; "sv" (Swedish), "no" (Norwegian), "fi" (Finnish), "da" (Danish),
; "ar" (Arabic), "tr" (Turkish),"hr" (Croatian), "el" (Greek), "cs" (Czech),
; "ru" (Russian), "pl" (Polish), "ro" (Romanian), "sk" (Slovak), "uk" (Ukrainian),"et" (Estonian), "hu" (Hungarian),
; "zh" (Chinese),"ja" (Japanese), "ko" (Korean), "th" (Thai), "vi" (Vietnamese), "hi" (Hindi), "bn" (Bangla).
