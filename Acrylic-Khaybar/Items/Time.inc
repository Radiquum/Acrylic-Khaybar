[MeterStyleTimeIsActive1]
OnUpdateAction=[!SetWindowPosition "(Clamp(#CurrentConfigX#+[TimeContainer:X]+([TimeContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? #CurrentConfigY#+#CurrentConfigHeight#+#Scale#*8 : #CurrentConfigY#-#Scale#*8)" "0%" "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 100)%" "Acrylic-Khaybar\Modules\Time"] [!WriteKeyValue Variables ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "#RootConfigPath#Modules\Time\Time.ini"] [!SetVariable ArrowTopOrBottom "(#CurrentConfigY#<#ScreenAreaHeight#/2 ? 0 : 1)" "Acrylic-Khaybar\Modules\Time"] [!WriteKeyValue Variables ArrowX "((#CurrentConfigX#+[TimeContainer:X]+[TimeContainer:W]/2)-Clamp(#CurrentConfigX#+[TimeContainer:X]+([TimeContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "#RootConfigPath#Modules\Time\Time.ini"] [!SetVariable ArrowX "((#CurrentConfigX#+[TimeContainer:X]+[TimeContainer:W]/2)-Clamp(#CurrentConfigX#+[TimeContainer:X]+([TimeContainer:W]-#Scale#*#ModuleWidth#)/2, #Padding#, #ScreenAreaWidth#-#Padding#-#Scale#*#ModuleWidth#))" "Acrylic-Khaybar\Modules\Time"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Time"] [!UpdateMeter * "Acrylic-Khaybar\Modules\Time"] [!Redraw "Acrylic-Khaybar\Modules\Time"]

[MeterStyleTimeIsActive-1]

[mTimeIsActive]
Group=IsActive
Measure=Plugin
Plugin=ConfigActive
ConfigName=Acrylic-Khaybar\Modules\Time

OnChangeAction=[!UpdateMeter TimeContainer] [!UpdateMeter TimeCloseButton]

[TimeContainer]
Meter=Image
MeterStyle=MeterStyleItem | MeterStyleTimeIsActive[&mTimeIsActive:]

W=[Time:W]

LeftMouseUpAction=[!DeactivateConfigGroup Modules] [!Delay 100] [!ActivateConfig "Acrylic-Khaybar\Modules\Time"]

[TimeCloseButton]
Meter=Image

W=([Time:W])
H=(#Scale#*#IconSize#)
SolidColor=0, 0, 0, 0

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1
Hidden=([mTimeIsActive:]=1 ? 0 : 1)

LeftMouseUpAction=[!DeactivateConfig "Acrylic-Khaybar\Modules\Time"]

[mTime]
Measure=Time
Format=[#TimeFormat24HTime[#[#24HTime]]]

OnChangeAction=#Update#

[Time]
Meter=String

Text=[mTime]

FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
FontWeight=700
AntiAlias=1

InlineSetting=CharacterSpacing | 0 | (#Scale#*1)

X=r
Y=((#Scale#*#IconSize#-[#CurrentSection#:H])/2)r

UpdateDivider=-1
DynamicVariables=1
