[IncludePlayer]
@Include=#RootConfigPath#\Modules\Music\Players\#Player#.inc

[mMusicProgress]
Disabled=1

[mMusicPosition]
Disabled=1

[mArtistTitle]
Measure=String

String=[mMusicArtist] - [mMusicTitle]

DynamicVariables=1

RegExpSubstitute=1
Substitute="^N\/A - N\/A$":"N/A"

OnChangeAction=#Update#

; ================================================

[MeterStyleMusicIsActive1]
OnUpdateAction=[!SetWindowPosition "(Clamp(#CurrentConfigX#+[MusicContainer:X]+([MusicContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? #CurrentConfigY#+#CurrentConfigHeight#+#Scale#*8 : #CurrentConfigY#-#Scale#*8)" "0%" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 100)%" "Acrylic-Khaybar\Modules\Music"] [!WriteKeyValue Variables ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "#RootConfigPath#Modules\Music\Music.ini"] [!SetVariable ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "Acrylic-Khaybar\Modules\Music"] [!WriteKeyValue Variables ArrowX "((#CurrentConfigX#+[MusicContainer:X]+[MusicContainer:W]/2)-Clamp(#CurrentConfigX#+[MusicContainer:X]+([MusicContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "#RootConfigPath#Modules\Music\Music.ini"] [!SetVariable ArrowX "((#CurrentConfigX#+[MusicContainer:X]+[MusicContainer:W]/2)-Clamp(#CurrentConfigX#+[MusicContainer:X]+([MusicContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "Acrylic-Khaybar\Modules\Music"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Music"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Music"] [!Redraw "Acrylic-Khaybar\Modules\Music"]

[MeterStyleMusicIsActive-1]

[mMusicIsActive]
Group=IsActive
Measure=Plugin
Plugin=ConfigActive
ConfigName=Acrylic-Khaybar\Modules\Music

OnChangeAction=[!UpdateMeter MusicContainer] [!UpdateMeter MusicCloseButton]

[MusicContainer]
Meter=Image
MeterStyle=MeterStyleItem | MeterStyleMusicIsActive[&mMusicIsActive:]

W=(#Scale#*#IconSize#*1.5+[MusicArtistTitle:W])

LeftMouseUpAction=[!DeactivateConfigGroup Modules] [!Delay 100] [!ActivateConfig "Acrylic-Khaybar\Modules\Music"]

[MusicCloseButton]
Meter=Image

W=(#Scale#*#IconSize#*1.5+[MusicArtistTitle:W])
H=(#Scale#*#IconSize#)
SolidColor=0, 0, 0, 0

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1
Hidden=([mMusicIsActive:]=1 ? 0 : 1)

LeftMouseUpAction=[!DeactivateConfig "Acrylic-Khaybar\Modules\Music"]

[MusicIcon]
Meter=String

Text=music_note

FontFace=Material Icons Outlined
FontSize=(#Scale#*#IconSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1

MouseOverAction=[!HideMeter MusicIcon] [!ShowMeter MusicPlayPause] [!Redraw]

[MusicPlayPause]
Meter=String

Text=[mMusicState]

FontFace=Material Icons Outlined
FontSize=(#Scale#*#IconSize#*0.75)
FontColor=#Color#
AntiAlias=1

UpdateDivider=-1
DynamicVariables=1
Hidden=1

X=r
Y=r

LeftMouseUpAction=[!CommandMeasure mMusicState PlayPause]
MouseLeaveAction=[!HideMeter MusicPlayPause] [!ShowMeter MusicIcon] [!Redraw]

[MusicArtistTitleDummy]
Meter=String

Text=[mArtistTitle]

FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

ClipString=1
W=0

X=(#Scale#*#IconSize#*1.5)r
Y=((#Scale#*#IconSize#-[#CurrentSection#:H])/2)r

UpdateDivider=-1
DynamicVariables=1

[MusicArtistTitle]
Meter=String
MeterStyle=#CurrentSection#Dummy

ClipString=2
ClipStringW=(#Scale#*320)
ClipStringH=[#CurrentSection#Dummy:H]
W=

X=r
Y=r
